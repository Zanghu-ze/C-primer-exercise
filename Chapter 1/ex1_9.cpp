/*
author : Zanghu-ze
date   : 2022/6/8

*/
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int init = 50;
    while (init <= 100){
        sum += init;
        init++;
    }
    
    cout << "the sum is " << sum << endl;
    return 0;
}