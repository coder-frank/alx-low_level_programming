#!/bin/bash

# Compile each .c file into corresponding .o file
for file in *.c; do
    gcc -c "$file"
done

# Create the static library liball.a from all the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm -f *.o
