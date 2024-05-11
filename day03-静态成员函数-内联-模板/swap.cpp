#include <iostream>
using namespace std;

template<typename T1>
void myswap(T1& num1, T1& num2){
    T1 temp; 
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    cout << "before swap: " << "a = " << a << ", b = " << b << endl;
    // myswap(a, b);
    std::swap(a, b);
    cout << "after swap: " << "a = " << a << ", b = " << b << endl;

    return 0;
}