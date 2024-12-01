@echo off

:: Assemble the assembly file
nasm -f elf64 accelerationasm.asm -o accelerationasm.o

:: Compile the C file
gcc -std=c99 -c thing.c -o thing.o

:: Link the object files into the final executable
gcc -o acceleration_test thing.o accelerationasm.o

:: Run the program
acceleration_test

:: Pause to see output
pause
