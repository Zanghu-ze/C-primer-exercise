/*
author : Zanghu-ze
date   : 2022/7/2

*/
#include <iostream>
using namespace std;

int main(){
    int num1 = 0, num2 = 0;
    cout << "Please input two integers!" << endl;
    cin >> num1 >> num2;
    if (num1 < num2){
        int cnt = num2;
        num2 = num1;
        num1 = cnt;
    }
    for(int i = num1;i < num2 + 1;i++){
        cout << i << endl;
    }

    return 0;

}