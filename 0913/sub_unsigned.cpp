#include<iostream>
int main()
{
    unsigned u1=42,u2=10;
    std::cout<<u1-u2<<std::endl;//正确
    std::cout<<u2-u1<<std::endl;//正确，但是是取模后的值
    return 0;
}