#include <iostream>
int main()
{ 
    int a;
    int b;
    int x;
    int y;
    std::cout<<"введите значение a:";
    std::cin>>a;
    std::cout<<"введите значение b:";
    std::cin>>b;
    x = a;
    y = b;
    a = y;
    b = x;
    std::cout<<"a: "<<a<<'\n'<<"b: "<<b<<'\n';
return 0;
}
