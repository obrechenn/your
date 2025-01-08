#include <iostream>
int main()
{
    int b;
    std::cout << "Введите b: ";
    std::cin >> b;
    int A = b/1024;
    std::cout << "Значение b в килограммах равно = " << A;
    return 0;
}