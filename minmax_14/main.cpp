#include <iostream>

int main() {
    int B;
    std::cout << "Введите число B: ";
    std::cin >> B;
    int numbers[100];
    std::cout << "Введите " << 10 << " чисел: ";

    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    int arr[100];//массив в котором будут хранится числа больше b
    int arrSize = 0;// переменная с количеством элементов в масииве arr
    for (int i = 0; i < 10; ++i) {
            if (numbers[i] > B) {
                arr[arrSize + 1] = numbers[i];
            }
        }
        int index_min = 0;
        int min = arr[0];
        if (arrSize == 0)
        {
            std::cout<<" нет чисел больше B " ;
        }else{  
            for (int i = 1; i < arrSize; ++i) {
                    if (arr[i] < min) {
                        min = arr[i];
                        index_min = i;
            }
        } 
        std::cout<< " минимальное чилсло равно: " << min << '\n' << "индекс минимального числа равен: " << index_min  + 1<< '\n';
    }   
        
    return 0;
}
