#include <iostream>

int main() {
    int N;
    std::cout << "Введите целое число N (> 2): ";
    std::cin >> N;

    int a;
    std::cout << "Введите первый член A: ";
    std::cin >> a;
    int b;
    std::cout << "Введите знаменатель D: ";
    std::cin >> b;

    int arr[N];
    arr[0] = a;
    arr[1] = b;
    for (int i = 1; i < N; ++i) {
       
    }
    std::cout << "Массив первых " << N << " членов геометрической прогрессии: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
