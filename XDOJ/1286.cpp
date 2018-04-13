/*
题目描述
    众所周知，X老师是XDUACM实验室最优秀的人，无论是学习还是打游戏。今天他突然想到一个好玩的游戏。规则是这样的，在游戏中他要得到n个小国，初始的时候小国个小杰各有1个。经过了很久的修炼，X老师学会了两种魔法，他每次可以动用自己的智慧来使用魔法。
    
    第一个魔法：（小杰变小国）可以将自己的智慧复制和当前小杰一样多的小国出来；
    
    第二个魔法：（小国大爆发）可以将当前的小杰变成和小国的数量一样，然后小国的数量加倍！
    
    因为X老师的智力是无限多的，他不关心花掉的智力大小。但是好学的X老师想尽快得到n个小国，使得能有更多的时间去读paper和打比赛。他想问问你，最少需要使用多少次魔法可以得到n个小国。

输入
    多组数据，第一行一个正整数T(T<=20)表示数据组数。
    
    接下来T行，每行一个正整数n(n<=100)。

输出
    对于每组数据输出一个整数，表示得到n个小国汀老师最少需要使用多少次膜法。

样例输入
    2
    1
    3
样例输出
    0
    2
提示

*/


#include <iostream>

int minstep=-1;
int n=1;
int ming=-1;
void f(int step, int g, int j){
    if(g==n){
        if(step<minstep)
            minstep=step;
            ming=g;

        return;
    }
    if(step>minstep || g> ming)
        return;

    f(step+1, g*2, g);
    f(step+1, g+j, j);
}


int main() {
    //std::cout << "Hello, World!" << std::endl;
    while (!std::cin.eof()) {
        int T = 0;
        std::cin >> T;
        while (T--) {
            std::cin >> n;
            minstep = n;
            ming=n;
            f(0, 1, 1);
            std::cout << minstep << std::endl;
        }

    }
    return 0;
}



