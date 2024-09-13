#include<iostream>
int main()
{
    unsigned u=10;
    int i=-42;
    std::cout<<i+i<<std::endl;//-42
    std::cout<<i+u<<std::endl;//4294967264
    return 0;
}