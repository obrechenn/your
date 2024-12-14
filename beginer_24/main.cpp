#include <iostream>
int main(){
	int a;
    int b;
    int c;
    int x;
    int y;
    int z;
    std::cout<<"введите число а: ";
    std::cin>>a;
    std::cout<<"введите число b: ";
    std::cin>>b;
    std::cout<<"введите число c: ";
    std::cin>>c;
	x = a;
	y = b;
    z = c;
    a = z;
    b = x;
    c = y;
	std::cout << "a: " << a << '\n';
	std::cout << "b: " << b << '\n';
	std::cout << "c: " << c << '\n';
	return 0;
}
