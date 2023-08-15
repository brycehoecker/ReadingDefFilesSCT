#!/bin/bash

# Remove build directory if it exists
if [ -d "build" ]; then
  echo "Removing existing build directory..."
  rm -rf build
fi

# Create a new build directory
echo "Creating new build directory..."
mkdir build

# Navigate to build directory
cd build

# Run CMake and build the project
cmake ..
make

# Check if compilation was successful
if [ $? -eq 0 ]; then
  echo "Compilation successful. Running the program..."
  ./ReadingDefFilesSCTTest
else
  echo "Compilation failed."
fi

