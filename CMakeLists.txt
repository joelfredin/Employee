cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyExecutable main.cpp Employee.cpp ContractEmployee.cpp FulltimeEmployee.cpp EngineeringEmployee.cpp)
