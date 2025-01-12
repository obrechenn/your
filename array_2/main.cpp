#include <iostream>
int pow(int x, int c)
{
    int res = 1;
    x % 2 == 0;
    for(int i = 0;i < c;i++)
    {
        res = res * x;
    }
    return res;
}
int main() {
    int N;
    std::cout << "Введите целое число N: ";
    std::cin >> N;
    
    int x;
    int c;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = (2 * pow(x,N));
    }

    std::cout << "Массив первых " << N << " положительных нечетных чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << '\n';
    }
    return 0;
}
