#include<cmath>
#include<iostream>

#include</usr/local/Cellar/eigen/3.4.0_1/include/eigen3/Eigen/Core>
#include</usr/local/Cellar/eigen/3.4.0_1/include/eigen3/Eigen/Dense>//TODO:why former directory is not valid?

using namespace Eigen;

constexpr float PI = 3.1415f;
constexpr float RAD = (PI / 180.0f);

int assignment0()
{
    Vector3f ptBase(2, 1, 1);// Homogeneous coordinate system
    Matrix3f matrix;
    float rad = 45.0f * RAD;
    matrix << cos(rad), -sin(rad), 1, sin(rad), cos(rad), 2, 0, 0, 1;
    Vector3f ptConverted = matrix * ptBase;

    std::cout << ptConverted << std::endl;

    return 0;
}