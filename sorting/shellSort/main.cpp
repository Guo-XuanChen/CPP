/*
    File      : main.cpp
    Time      : 2019/12/03 14:07:21
    Author    : Guo-XuanChen
*/

#include <iostream>
#include <vector>

using namespace std;

void shellSort(vector<unsigned int>& array, int size)
{
    // gap, n/2
    for(int gap = size / 2; gap > 0; gap /= 2)
    {
        for(int x = gap; x < size; x++)
        {
            unsigned temp = array[x];
            int y;
            for(y = x; y >= gap && array[y - gap] > temp; y -= gap)
            {
                array[y] = array[y - gap];
            }
            array[y] = temp;
        }
    }
}

int main(int argc, char **argv)
{
    int size = 0;
    vector<unsigned int>array;
    cin >> size;
    for(int x = 0; x < size; x++)
    {
        unsigned int buff;
        cin >> buff;
        array.push_back(buff);
    }
    shellSort(array, size);
    for(int x = 0; x < size; x++)
    {
        cout << array[x] << " ";
    }
    cout << endl;
    return 0;
}

