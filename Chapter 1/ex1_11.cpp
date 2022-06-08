/*
author : Zanghu-ze
date   : 2022/6/8

*/
#include <iostream>
using namespace std;

int main(){
    int num1 = 0, num2 = 0;
    cout << "Please input two integers!" << endl;
    cin >> num1 >> num2;
    for(int i = num1;i < num2 + 1;i++){
        cout << i << endl;
    }
    
    return 0;
}