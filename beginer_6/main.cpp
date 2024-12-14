#include <iostream>
int Volume(int a, int b, int c){
    return (a * b * c);
}
int Square(int a, int b, int c){
    return (2 * (a * b + b * c + a * c ));
}
int main(){
    int a;
    int b;
    int c;
    std::cout<<"Введите число a: ";
    std::cin >> a;
    std::cout<<"Введите число b: ";
    std::cin >> b;
    std::cout<<"Введите число c: ";
    std::cin >> c;
    std::cout << "Объем прямоугольного параллелепипида со сторонами: "<< a << ", " << b << ", " << c << " равен " << Volume(a,b,c) << '\n';
    std::cout << "Площадь поверхности прямоугольного параллелепипида со сторонами: " << a << ", " << b << ", " << c << " равна " << Square(a,b,c) << '\n';
    return 0;
}