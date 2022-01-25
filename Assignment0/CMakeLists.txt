cmake_minimum_required (VERSION 2.8.11)

project (Assignment0)

set(Eigen3_DIR "/usr/local/Cellar/eigen/3.4.0_1/share/eigen3/cmake")
include_directories(
        EIGEN3_INCLUDE_DIR
        #"/usr/local/Cellar/eigen/3.4.0_1/include/eigen3"
        )
find_package(Eigen3 REQUIRED)


message(${EIGEN3_INCLUDE_DIR})

add_executable (Assignment0 src/assignment0.cpp include/assignment0.h)
