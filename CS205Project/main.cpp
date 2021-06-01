#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Matrix.h"
#include <complex>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    Matrix<complex<double>> a(2,3);
    Matrix<int> b(4,5);
    cout<<b;
    return 0;
}
