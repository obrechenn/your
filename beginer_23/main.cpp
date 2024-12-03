#include <iostream>
int main(){
	int a;
    int b;
    int c;
    int x;
    int y;
    std::cout<<"введите число а: ";
    std::cin>>a;
    std::cout<<"введите число b: ";
    std::cin>>b;
    std::cout<<"введите число c: ";
    std::cin>>c;
	x = b;
	b = a;
	y = c;
	c = x;
	a = y;
	std::cout << "a: " << a << '\n';
	std::cout << "b: " << b << '\n';
	std::cout << "c: " << c << '\n';
	return 0;
}
