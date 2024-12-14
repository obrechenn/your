#include <iostream>
int Perimetr(int a){
    return 4 * a;
}
int main()
{
    int a;
    std::cin>>a;
    std::cout<<"перриметр квадрата со стороной "<< a <<" равно "<<Perimetr(a) << '\n';
    return 0;
}