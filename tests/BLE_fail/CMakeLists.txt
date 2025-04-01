cmake_minimum_required(VERSION 3.5)

project(test_ble_fail)

add_executable(test_ble_fail test_ble_fail.cpp)

target_compile_features(test_ble_fail PRIVATE cxx_std_11)

target_link_libraries(test_ble_fail PUBLIC decoder)

target_include_directories(test_ble_fail PUBLIC 
                           "${PROJECT_BINARY_DIR}"
                           )
                           
add_test(NAME run_test_ble_fail COMMAND test_ble_fail)

