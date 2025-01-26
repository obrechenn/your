#include <iostream>

int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    int numbers[100];
    std::cout << "Введите " << N << " чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }
    int min = numbers[0];
    for (int i = 1; i < N; ++i) {
        if(numbers[i] > 0) {
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }else{
            i+=1;
        }
    }   
    if(min < 0) {
        std::cout<< " 0 " << '\n';
    }else{
        std::cout << " минимальный элемент: " << min << '\n';
    }
    
    
    return 0;
}
//так и не придумал че сделать чтобы если первый элемент отрицателньыый все работало(( я бы мог  все через нейронку бахнуть,но не круто
