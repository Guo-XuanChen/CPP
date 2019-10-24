/*
    File      : main.cpp
    Time      : 2019/10/24 18:32:54
    Author    : Guo-XuanChen
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class complex
{
    int v1, v2;
    public:
    complex():v1(0),v2(0){};
    complex(int v1, int v2):v1(v1),v2(v2){};
    complex operator - (const complex&);
    complex operator + (const complex&);     
    friend complex operator * (const complex&, const complex&);
    friend complex operator / (const complex&, const complex&);
    friend complex operator ^ (const complex&, const complex&);
    friend ostream& operator<<(ostream &os, const complex&); 
};


int main(int argc, char **argv)
{
    complex complex1(2, 5);
    complex complex2(2, 10);
    complex complex3 = complex1 + complex2; 
    complex complex4 = complex2 - complex1;
    complex complex5 = complex1 * complex2;
    complex complex6 = complex2 / complex1; 
    complex complex7 = complex1 ^ complex2; 
    cout << "Operator + : "  << complex3 << endl;
    cout << "Operator - : "  << complex4 << endl;
    cout << "Operator * : " << complex5 << endl;
    cout << "Operator / : "  << complex6 << endl;
    cout << "Operator ^ : " << complex7 << endl;
    return 0;
}

ostream& operator<<(ostream &os, const complex& complex1)
{
    os << "v1: " << complex1.v1 << ", v2: " << complex1.v2;
    return os;
}

complex complex::operator + (const complex& complex2)
{
    complex res;
    res.v1 = this->v1 + complex2.v1;
    res.v2 = this->v2 + complex2.v2;
    return res;

}

complex complex::operator - (const complex& complex2){
    complex res;
    res.v1 = this->v1 - complex2.v1;
    res.v2 = this->v2 - complex2.v2;
    return res;
}

complex operator * (const complex& complex1, const complex& complex2)
{
    complex res(complex1.v1 * complex2.v1, complex1.v2 * complex2.v2);
    return res;   
}

complex operator / (const complex& complex1, const complex& complex2)
{
    return {complex1.v1 / complex2.v1, complex1.v2 / complex2.v2};      // Uniform Initialization
}

complex operator ^ (const complex& complex1, const complex& complex2)
{
    return {complex1.v1 ^ complex2.v1, complex1.v2 ^ complex2.v2};      // Uniform Initialization
}