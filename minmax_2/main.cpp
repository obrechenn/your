#include <iostream>

int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    int numbers[N];
    std::cout << "Введите " << N << " чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    int a = numbers[0];
    int b = numbers[1];

    for (int i = 2; i < N; ++i) 
    {
        if (numbers[i] < a) {
            a = numbers[i];}
            else if (numbers[i] < b) {
                b = numbers[i];
        }
    }
    

    std::cout << "первая сторона: " << a << '\n';
    std::cout << "вторая сорона: " << b << '\n';
    std::cout <<"Площадь: " << a * b <<'\n';
    return 0;
}