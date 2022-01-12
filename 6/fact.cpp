//
// Created by 尧 on 2021/6/24.
//
#include "Chapter6.h"

int fact(int val){ //fact函数求形参val的阶乘
    int i = 1;
    while(val>1)
        i *= val--;
    return i;
}

