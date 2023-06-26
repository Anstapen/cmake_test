add_executable(main main.cpp)

add_subdirectory(custom_string)

add_subdirectory(custom_math)

target_link_libraries(
    main 
    PUBLIC custom_string
    PUBLIC custom_math
)