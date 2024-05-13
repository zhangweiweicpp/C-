/* 例1.cpp */
#include <iostream>
using namespace std;
class A {
public:
  void vf() { cout << "I come from class A" << endl; }
};
class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
  D d;
  //继承多个不同基类具有名函数时出现错误
  d.vf(); // error
  
  return 0;
}