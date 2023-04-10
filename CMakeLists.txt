cmake_minimum_required(VERSION 3.25)
project(Brute_Force_and_Quick_Sort)

set(CMAKE_CXX_STANDARD 11)

add_executable(Brute_Force_and_Quick_Sort "Quick Sort/quicksort.cpp" "Quick Sort/troca.cpp" "Quick Sort/troca.hpp" "Quick Sort/quicksort.hpp" main.cpp "Quick Sort/particao.cpp" "imprime_array.cpp" "Brute Force/bruteforce.cpp" "recebe_array.cpp" "recebe_array.hpp" "Brute Force/bruteforce.hpp")
