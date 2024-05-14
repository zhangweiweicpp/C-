/* 虚析构函数.cpp */

#include <iostream>
using namespace std;
class A {
public:
  virtual ~A() { cout << "call A::~A()" << endl; }
};
class B : public A {
  char *buf;

public:
  B(int i) { buf = new char[i]; }
  ~B() {
    delete[] buf;
    cout << "call B::~()" << endl;
  }
};
int main() {
  A *a = new B(10);//基类的引用需为虚函数，然后调用的是派生类的析构函数释放派生类
  delete a;
  
  return 0;
}