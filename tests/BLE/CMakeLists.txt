cmake_minimum_required(VERSION 3.5)

project(test_ble)

add_executable(test_ble test_ble.cpp)

target_compile_features(test_ble PRIVATE cxx_std_11)

target_link_libraries(test_ble PUBLIC decoder)

target_compile_definitions(decoder PUBLIC DEBUG_DECODER UNIT_TESTING)

target_include_directories(test_ble PUBLIC 
                           "${PROJECT_BINARY_DIR}"
                           )
                           
add_test(NAME run_test_ble COMMAND test_ble)

