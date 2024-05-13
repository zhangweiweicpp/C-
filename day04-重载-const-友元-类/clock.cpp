
#include <iostream>
using namespace std;

class Clock{
public:
    Clock(int h,int m,int s);
    Clock(Clock &c);
    ~Clock(){};
    void settime(int h,int m,int s){
        this->H = h;
        this->M = m;
        this->S = s;
    }
    void gettime(){
        cout << "--------" << endl;
        cout << H << ":" << M << ":" << S << endl; 
    }
private:
    int H;int M;int S;
};

Clock::Clock(int h,int m,int s){
    H = h;
    M = m;
    S = s;
}
Clock::Clock(Clock &c){
    this->H = c.H;
    this->M = c.M;
    this->S = c.S;
}

int main(int argc, char const *argv[]) {
    Clock c1(10,59,59);
    c1.gettime();
    Clock c2(c1);
    c2.gettime();
    c2.settime(11, 59, 59);
    c2.gettime();
    return 0;
}