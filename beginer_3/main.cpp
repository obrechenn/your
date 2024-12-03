#include <iostream>
int perimetr(int a, int b){
    return 2 * (a + b);
}
int Square(int a, int b){
    return(a * b);
}
int main(){
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << "площадь прямоугольника со сторонами "<< a << " и " << b << " равна " << Square(a, b) << '\n';
    std::cout << "периметр прямоугольника со сторонами "<< a << " и " << b <<  " равна " << perimetr(a, b) << '\n';
    return 0;
}