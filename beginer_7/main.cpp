#include <iostream>
#include <cmath>
double lenght_Circle(int R){
    return (2 * M_PI * R);
}
double Square_Circle(int R){
    return (M_PI * (R * R));
}
int main(){
    int R;
    std::cout<<"Введите значение радиуса R: ";
    std::cin >> R;
    std::cout << "Длина окружности с радиусом: " << R << " равна " << lenght_Circle(R) << '\n';
    std::cout << "Площадь окружности с радиусом: " << R << " равна " << Square_Circle(R) << '\n';
    return 0;
}