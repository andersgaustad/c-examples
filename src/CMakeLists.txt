cmake_minimum_required(VERSION 3.10)

project(CExamples LANGUAGES C)

# Use GLOB to find all .c files in the source directory
file(GLOB C_FILES *.c)

# Loop through each C file and create an executable
foreach(C_FILE ${C_FILES})
    # Extract the file name (without extension) to use as the target name
    get_filename_component(TARGET_NAME ${C_FILE} NAME_WE)
    
    # Create an executable for each C file
    add_executable(${TARGET_NAME} ${C_FILE})
endforeach()
