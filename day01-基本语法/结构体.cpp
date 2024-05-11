#include <iostream>
#include "string"
using namespace std;
// 定义结构体 https://zhuanlan.zhihu.com/p/648972558
struct S1{
    int number;
    
    string name;
    string sex;
    int age;
};
// union 共用体
int main(int argc,char const *argv[])
{
    struct S1 xiaoming;
    xiaoming.number = 4150307;
    xiaoming.name = "abc";
    xiaoming.sex="男";
    xiaoming.age = 100;
    cout << "学号：" << xiaoming.number << " 名字：" << xiaoming.name << " 性别：" << xiaoming.sex << " 年龄：" << xiaoming.age << endl;
    return 0;   
}