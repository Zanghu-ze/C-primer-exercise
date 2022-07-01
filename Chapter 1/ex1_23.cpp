/*
author : Zanghu-ze
date   : 2022/7/2

*/
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item currItem, valItem;
    if (std::cin >> currItem)
    {
        int cnt = 1;
        while (std::cin >> valItem)
        {
            if (valItem.isbn() == currItem.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << currItem << " occurs " << cnt << " times " << std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        std::cout << currItem << " occurs "<< cnt << " times " << std::endl;
    }
    return 0;
}