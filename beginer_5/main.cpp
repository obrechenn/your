#include <iostream>
int Volume(int a){
    return (a * a * a);
}
int Square(int a){
    return(6 * (a * a));
}
int main(){
    int a;
    std::cin >> a;
    std::cout << "Объем куба с ребром "<< a <<"  равен "<< Volume(a) << '\n';
    std::cout << "Площадь куба с ребром " << a << " равна " << Square(a) << "\n";
    return 0;
}