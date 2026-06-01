cmake_minimum_required(VERSION 3.10)

project(decoder)

if(SKBUILD)
    message(STATUS "The project is built using scikit-build")
    find_package(PythonExtensions REQUIRED)

    add_library(_decoder MODULE TheengsDecoder/_decoder.cpp src/decoder.cpp)

    python_extension_module(_decoder)

    target_include_directories(_decoder
        PUBLIC
            $<INSTALL_INTERFACE:arduino_json>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/arduino_json/src>
            ${CMAKE_CURRENT_SOURCE_DIR}/src
    )

    target_compile_features(_decoder PRIVATE cxx_std_11)
    install(TARGETS _decoder LIBRARY DESTINATION TheengsDecoder)

elseif(BUILD_WASM)
    message(STATUS "Building WebAssembly module via Emscripten")

    add_executable(theengs_decoder_wasm
        nodejs/theengs-decoder/src/wasm_bindings.cc
        src/decoder.cpp
    )

    target_include_directories(theengs_decoder_wasm
        PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/src/arduino_json/src
            ${CMAKE_CURRENT_SOURCE_DIR}/src
    )

    target_compile_features(theengs_decoder_wasm PRIVATE cxx_std_17)

    # Single ES6 module that runs in the browser, web workers and Node.js.
    # The .mjs suffix lets Node load it as an ES module even though the npm
    # package itself is CommonJS. SINGLE_FILE inlines the wasm so the same
    # artifact is shipped to npm (dist/) and to the docs site (public/wasm/).
    set_target_properties(theengs_decoder_wasm PROPERTIES
        SUFFIX ".mjs"
        LINK_FLAGS "-lembind -sMODULARIZE=1 -sEXPORT_ES6=1 -sEXPORT_NAME=createTheengsDecoderModule -sENVIRONMENT=web,worker,node -sALLOW_MEMORY_GROWTH=1 -sSINGLE_FILE=1 -sNODEJS_CATCH_EXIT=0 -sNODEJS_CATCH_REJECTION=0"
    )

else()

    add_library(decoder
                src/decoder.cpp
                src/decoder_c.cpp
                )

    set_target_properties(decoder PROPERTIES
        PUBLIC_HEADER shared/theengs.h)

    target_include_directories(decoder
        PUBLIC
            $<INSTALL_INTERFACE:arduino_json>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/arduino_json/src>
            ${CMAKE_CURRENT_SOURCE_DIR}/include
            ${CMAKE_CURRENT_SOURCE_DIR}/src
    )

    target_compile_features(decoder PRIVATE cxx_std_11)

    if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
        include(CTest)
    endif()

    if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
        include(tests/CompileOptions.cmake)
        add_subdirectory(tests)
    endif()

endif()
