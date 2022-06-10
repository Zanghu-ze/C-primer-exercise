/*
author : Zanghu-ze
date   : 2022/6/11

*/
#include <iostream>
using namespace std;

int main(){
    int cnt = 0, sum = 0, temp = 0;
    cout << "please enter the array's length: " << endl;
    cin >> cnt;
    while (cnt > 0){
        cin >> temp;
        sum += temp;
        cnt--;
    }
    cout << "the sum of array is " << sum << endl;
    
    return 0;
}