cmake_minimum_required(VERSION 3.8)
project(utilities)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp IMediator.hpp Mediator.hpp Agent.hpp MediatorPacket.hpp Mediator.cpp MediatorPacket.cpp)
add_executable(utilities ${SOURCE_FILES})