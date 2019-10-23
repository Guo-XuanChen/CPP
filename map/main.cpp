/*
    File      :
    Time      :
    Author    : Guo-XuanChen
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char **argv){
    map<string, int> map1;
    
    map1["one"] = 1;
    map1["two"] = 2;
    map1["three"] = 3;

    // match
    cout << map1.count("one") << endl;
    // no match
    cout << map1.count("ten") << endl;

    // map1
    cout << map1["one"] << endl;
    cout << map1["three"] << endl;

    map<string ,int>::iterator begin = map1.begin();
    map<string ,int>::iterator end = map1.end();

    map<string, int>::iterator it;
    for(it=begin; it!=end; it++){
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}

