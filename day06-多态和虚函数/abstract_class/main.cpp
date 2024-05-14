#include <iostream>
using namespace std;

class Figure{
    protected:
        double mx,my;
    public:
       void set(double x,double y) 
       {
            mx = x;
            my = y;
       }
       virtual double getarea() = 0;
};

class Trianle : public Figure{
    double getarea(){
        double area = 0;
        area = mx*my*0.5;
        return area;
    }
};

class Rectangle : public Figure{
    double getarea(){
        double area = 0;
        area = mx*my;
        return area;
    }
};

int main()
{
    double area;
    Figure *pF = NULL;
    Trianle t;
    Rectangle r;
    t.set(10,10);
    r.set(10,10);
    pF = &t;
    area = pF->getarea();
    cout <<" 三角形：" << area << endl;

    pF = &r;
    area = pF->getarea();
    cout << "正方形：" << area << endl;

    return 0;
}

