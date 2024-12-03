#include <iostream>
int rasstoyanie(int x1, int y1, int x2, int y2) 
{
return **(1/2(x2 - x1)**2 + (y2 - y1)**2);
}

int main() 
{
    int x1;
    int y1;
    int x2;
    int y2;
    std::cin>>x1>>x2>>y1>>y2;
    std::cout<<"расстояние между двумя точками с координатами "<<x1, y2<< " и "<<x2, y2<<" равно "<<rasstoyanie(x1, x2, y1, y2);
return 0;
}