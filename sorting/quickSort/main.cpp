/*
    File      : main.cpp
    Time      : 2019/11/28 22:09:33
    Author    : Guo-XuanChen
*/
#include <iostream>
#include <vector>

using namespace std;

void swap(unsigned int& n1, unsigned int& n2)
{
    unsigned int temp = n1;
    n1 = n2;
    n2 = temp;
}

unsigned int partition(vector<unsigned int>& array, unsigned int front, unsigned end)
{
    unsigned int pivot = array[end];
    int x = front - 1;

    for(unsigned int y = front; y < end; y++)
    {
        if(array[y] < pivot)
        {
            x++;
            swap(array[x], array[y]);
        }
    }
    x++;
    swap(array[x], array[end]);
    return x;
}


void quickSort(vector<unsigned int>& array, unsigned int front, unsigned int end)
{
    if(front < end)
    {
        int pivot = partition(array, front, end);
        quickSort(array, front, pivot - 1);
        quickSort(array, pivot + 1, end);
    }
}

int main(int argc, char **argv)
{
    unsigned int size;
    vector<unsigned int>array;
    cin >> size;
    for(unsigned int x = 0; x < size; x++)
    {
        unsigned int buff;
        cin >> buff;
        array.push_back(buff);
    }
    quickSort(array, 0, size - 1);
    for(unsigned int x = 0; x < size; x++)
    {
        cout << array[x] << " ";
    }
    cout << endl;

    return 0;
}

