#include "iostream"

using namespace std;

int main()
{
    int num = 30;
    int i = 0;
    int j = 0;
    for(i = 0; i < num / 2 - 1; i++)
    {
        cout << " ";
        for(j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "*" << endl;
    }
    return 0;
}
