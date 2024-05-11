#include <iostream>
using namespace std;
// 知识点：
// 静态成员函数
// 类外代码可以使用类名和作用域操作符来调用静态成员函数。
// 静态成员函数只能引用属于该类的静态数据成员或静态成员函数。
class App{
    public:
        static void set();
        static void get();
    private:
        static  int global;
};

int App::global = 0;
void App::set()
{
    global = 5;
}
void App::get()
{
    cout << global << endl;
}

int main(int argc, char const *argv[])
{
    App a1;
    a1.set();
    a1.get();
    return 0;
}