#include <iostream>
int main() {
	int num;
	std::cout << "Seleccione un numero entero positivo y se le mostrara su factorial" << std::endl;
	std::cin >> num;
	int resultado = num;
	for (int i = num; i > 1; i--) {
		resultado = resultado * (i - 1);
	}
	std::cout << "El factorial de " << num << " es " << resultado << std::endl;
	return 0;
}
