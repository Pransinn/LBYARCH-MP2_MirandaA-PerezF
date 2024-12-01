# LBYARCH-MP2_MirandaB-PerezF

GROUP 9
Members:
MIRANDA, Bryce Andrei
PEREZ, Francine Meryl Antoinette

Vehicle Acceleration Calculator (C and x86-64 Assembly)
This repository contains a program written in C and optimized with x86-64 assembly to compute the acceleration of vehicles based on initial velocity, final velocity, and time taken to cover a 1 km distance.

Features
Computes acceleration for multiple vehicles (up to 10,000 rows) from a matrix of velocities and time.
Optimized using SIMD instructions in x86-64 assembly for improved performance.
Provides a correctness check for the computed acceleration values.

## Steps to Compile and Run

### 1. **Clone the Repository**

### 2. **Run the build_and_run.bat**

...........................................................................................

i.) Execution Time and Performance Analysis
The execution time for this program is measured using clock() from the time.h library, which captures the time taken to compute the acceleration for all rows. Here are some performance observations:

The program can handle up to 10,000 rows efficiently.
For smaller datasets (e.g., 1 to 10 rows), the execution time is negligible (0.000000 seconds).
The time increases with the number of rows, but the program remains responsive due to efficient SIMD optimization.


## TEST CODE

![image](https://github.com/user-attachments/assets/92c4cdd9-2611-4197-b959-91c143124f33)


