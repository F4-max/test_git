#include <iostream>

int somme(const int a, const int b){

return a + b;

}

int main(){

int a = 3;
int b = 9;

std::cout << "Hello Main !\n";
std::cout << "a = " << a << " et b = " << b;

std::cout << "\na + b = " << a << " + " << b << " = " << somme(a, b);

std::cout << "\nC'est tout !" << std::endl;

}
