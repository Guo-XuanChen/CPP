/*
    File      : main.cpp
    Time      : 2019/10/24 01:10:51
    Author    : Guo-XuanChen
*/
#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char **argv){
    stack<int> stack1;
    
    stack1.push(10); 
    stack1.push(20); 
    stack1.push(30); 
    /*
        While push() function inserts a copy of the value or the parameter passed to the function into the container at the top, 
        the emplace() function constructs a new element as the value of the parameter and then adds it to the top of the container.
    */
    stack1.emplace(40);
    stack1.push(50);

    while(!stack1.empty()){
        cout << stack1.top() << endl;
        stack1.pop();
    }

    return 0;
}

