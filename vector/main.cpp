/*
    File      : main.cpp
    Time      : 2019/10/24 00:30:23
    Author    : Guo-XuanChen
*/
#include <iostream>
#include <vector>

using namespace std;

// method 1
struct student {
    string name;
    int age;
};

void method1();

int main(int argc, char **argv){
    method1();
    return 0;
}

void method1(){
    vector<student> classA;

    student student1;
    student1.name = "one";
    student1.age = 21;
    classA.push_back(student1);
    
    student student2;
    student2.name = "two";
    student2.age = 22;
    classA.push_back(student2);

    for(unsigned int x=0; x<classA.size(); x++){
        cout << classA[x].name  << " " << classA[x].age << endl;
    }

    vector<student>::iterator begin = classA.begin();
    vector<student>::iterator end = classA.end();
    
    vector<student>::iterator it;
    for(it=begin; it!=end; it++){
        cout << it->name << " " << it->age << endl;
    }

    
    cout << "--------------------------" << endl;
}

