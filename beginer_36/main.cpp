#include <iostream>
int main()
{
    int V1; 
    int V2;
    int T;
    int S;
    int S1 = 0;
    std::cout << "Введите значение скорости первого автомобиля V1: ";
    std::cin >> V1;
    std::cout << "Введите значение скорости второго автомобиля V2: ";
    std::cin >> V2;
    std::cout << "Введите значение переменной времени T: ";
    std::cin >> T; 
    std::cout << "Введите значение первоначального расстояния S: ";
    std::cin >> S;
    S1 += (V1 * T) + (V2 * T) + S;
    std::cout << "Спустя " << T << " единиц(ы) времени, между машинами будет расстояние равное: " << S << '\n';
    return 0;
}