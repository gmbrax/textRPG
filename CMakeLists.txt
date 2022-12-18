cmake_minimum_required(VERSION "3.16")
project("TextRPG")
add_executable("${PROJECT_NAME}" src/main.c src/pyprinter.c src/token.c src/token_linkedlist.c)