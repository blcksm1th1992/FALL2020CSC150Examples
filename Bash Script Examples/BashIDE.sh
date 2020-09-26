#!/bin/bash

# This is the Script IDE
# Written by Miles Livermont for the CSC-150 2020 Fall Semester
#Goals Make a UI that will allow for custom .out/.exe files in gcc

echo 'Welcome to the BashIDE'

echo 'What is the name of the file to compile?: '
read file_name
echo 'What is the name for the executable you want:'
read exe_name

echo 'Compiling'

gcc $file_name -o $exe_name

echo 'DONE!! Here are thefiles in the directory'
ls -a