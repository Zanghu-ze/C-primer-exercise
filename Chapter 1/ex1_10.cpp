/*
author : Zanghu-ze
date   : 2022/6/8

*/
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int init = 10;
    while (init >= 0){
        sum += init;
        init--;
    }

    cout << "the sum is between 0 to 10 " << sum << endl;
    
    return 0;
}