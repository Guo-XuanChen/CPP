/*
    File      : main.cpp
    Time      : 2019/11/28 21:46:34
    Author    : Guo-XuanChen
*/
#include <iostream>
#include <vector>

using namespace std;

void insertSort(vector<unsigned int>& array, unsigned int size)
{
    for(unsigned int x = 1; x < size; x++)
    {
        unsigned int temp = array[x];                  
        int y = x - 1;                                
        while(temp < array[y] && y >= 0)               
        {
            array[y+1] = array[y];
            y--;
        }
        array[y+1] = temp;
    }
}

int main(int argc, char **argv)
{
    unsigned int size;
    vector<unsigned int> array;
    cin >> size;
    for(unsigned int x = 0; x < size; x++)
    {
        unsigned int buff;
        cin >> buff;
        array.push_back(buff);
    }

    insertSort(array, size);
    for(unsigned int x = 0; x < size; x++)
    {
        cout << array[x] << " ";
    }
    cout << endl;

    return 0;
}

