cmake_minimum_required(VERSION 3.10)


project(RPGCB VERSION 1.0)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)



add_executable(RPGCB 
CharacterClass.cpp
ClassTypeClass.cpp
main.cpp
RaceClass.cpp
Utility.cpp
)


target_include_directories(RPGCB PUBLIC                         
			   "${PROJECT_SOURCE_DIR}/inc"
                           )



