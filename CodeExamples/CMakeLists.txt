cmake_minimum_required(VERSION 3.19)
project(CodeExamples)

set(CMAKE_CXX_STANDARD 14)

add_executable(CodeExamples main.cpp CyclicRedundancy.cpp CyclicRedundancy.h Hamming.cpp Hamming.h ParityCheck.cpp ParityCheck.h)