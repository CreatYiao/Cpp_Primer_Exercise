//
// Created by 尧 on 2021/6/24.
//
#include "Chapter6.h"
#include <iostream>

using namespace std;

int main(){
    int i = 0;
    cout << "请输入一个数，计算它的阶乘：" << endl;
    cin >> i;
    cout << i << "! = " << fact(i) << endl;
}
