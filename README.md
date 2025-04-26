# Pattern Printing in C++

This repository contains a collection of C++ programs that generate various text-based patterns using loops. These are useful for learning nested loops, basic C++ syntax, and for practicing pattern-based problems often asked in coding interviews.

## Summary

- **Language:** C++
- **Purpose:** Demonstrate different pattern printing techniques using C++
- **Files Included:** Only `.cpp` source files (executables and other files are ignored)

## File Descriptions

### 1. `main.cpp`

Contains basic pattern functions for printing triangles, squares, and rectangles using a simple interface. Also demonstrates the use of namespaces for organizing pattern functions.

### 2. `butterfly_patern.cpp`

Prints a butterfly pattern using stars (`*`). The pattern is symmetric and consists of a top and bottom half, each forming a wing of the butterfly.

### 3. `hollow_diamond.cpp`

Generates a hollow diamond pattern using stars. The diamond is constructed by printing spaces and stars in such a way that the center is hollow.

### 4. `triangle.cpp`

Includes multiple functions to print various triangle patterns:

- One-sided and two-sided triangles
- Number triangles (incremental, decremental, pyramid, etc.)
- Pyramid shapes
- Demonstrates different ways to use loops for pattern generation

### 5. `square.cpp`

Contains several square pattern functions:

- Solid square
- Numbered squares (row-wise, column-wise, decremental)
- Alphabet squares
- Sequential number squares

## How to Use

1. **Compile any pattern file:**

   ```sh
   g++ filename.cpp -o pattern
   ./pattern
   ```

   Replace `filename.cpp` with the desired file (e.g., `butterfly_patern.cpp`).

2. **Modify pattern size:**
   Most files have a variable (usually `n`) at the top of `main()` to control the size of the pattern. Change its value to generate larger or smaller patterns.

## Contribution

Feel free to contribute more pattern programs or improve the existing ones! Fork the repository, add your `.cpp` file, and submit a pull request.

## License

This project is open source and available under the MIT License.
