#include<iostream>
int reused=42;//定义全局变量
int main()
{
    int unique=0;
    std::cout<<reused<<" "<<unique<<std::endl;
    int reused=0;//修改全局变量的值，此时局部变量优先
    std::cout<<reused<<" "<<unique<<std::endl;
    //显式访问全局变量，此时reused改回全局变量的值
    std::cout<< ::reused <<" "<<unique<<std::endl;

    //42 0
    //0 0
    //42 0

    return 0;
}