/*
    File      : main.cpp
    Time      : 2019/10/24 19:45:43
    Author    : Guo-XuanChen
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* function tamplate */
template <typename T>
T myAdd(T v1, T v2)
{
    return v1 + v2;
};

/* class tamplate */
template <class T>
class complex 
{
    T value1, value2;
    public:
        complex():value1(0),value2(0){};
        complex(T value1, T value2):value1(value1),value2(value2){};
        void print()
        {
            cout << "Value1: " << value1  << ", Value2: " << value2 << endl;
        }

};

int main(int argc, char **argv){
    /* function tamplate */
    int v1 = 1, v2 = 2;
    double v3 = 1.56, v4 = 3.89;
    cout << myAdd(v1, v2) << endl;
    cout << myAdd(v3, v4) << endl;

    complex<int> complex1(1, 2);
    complex1.print();
    
    complex<double> complex2(1.223, 2.556);
    complex2.print();
    return 0;
}