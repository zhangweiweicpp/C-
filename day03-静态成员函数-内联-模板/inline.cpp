#include <iostream>
#include <chrono>

using namespace std;
#define PI 3.14

inline float getArea(float r){
    float area;
    area = PI * r * r;
    return area;
}

int main(int argc,char const *argv[])
{
    float r =2;
    float area;
    area = getArea(r);
    cout << "半径" << r << "面积：" << area << endl;
    return 0;
}