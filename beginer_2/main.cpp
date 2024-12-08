#include <iostream>
int Square(int a){
    return a * a;
}
int main()
{
    int a;
    std::cin>>a;
    std::cout<<"площадь квадрата со стороной "<< a <<" равно "<<Square(a) << '\n';
    return 0;
}