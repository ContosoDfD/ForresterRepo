#!/bin/bash

# This script automates the build process for the OpenSSH project.

# Set the build directory
BUILD_DIR="build"

# Create the build directory if it doesn't exist
if [ ! -d "$BUILD_DIR" ]; then
    mkdir "$BUILD_DIR"
fi

# Navigate to the build directory
cd "$BUILD_DIR"

# Run CMake to configure the project
cmake ..

# Compile the project
make

# Print a message indicating the build is complete
echo "Build completed successfully."