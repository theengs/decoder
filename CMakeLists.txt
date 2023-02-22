cmake_minimum_required(VERSION 3.3)

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

else()

    add_library(decoder
                src/decoder.cpp
                )

    target_include_directories(decoder
        PUBLIC
            $<INSTALL_INTERFACE:arduino_json>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/arduino_json/src>
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
