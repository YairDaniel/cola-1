#include<iostream>
#define MaxTamC 10

typedef int TipoDato;
int main() {


	int frente = 0, final = 0;
	TipoDato A[MaxTamC];
	int contador = 0;
	// Iniciar la cola 
	frente = 0,
		final = 0;

	std::cout << "desea agregar elementos a la cola? (s/n):";
	char respuesta;
	std::cin >> respuesta;

	while ((respuesta == 'S' || respuesta == 'S') && contador < 10) {

		if ((final + 1) % MaxTamC == frente) {
			std::cout << "desbordamiento de la cola" << std::endl;
			return 1;
		}

		std::cout << "ingrese un elemnto para la cola:";
		TipoDato elemento;
		std::cin >> elemento;
		final = (final + 1) % MaxTamC;
		A[final] = elemento;

		contador++;
		std::cout << "elemento" << contador << "agrea a la cola:" << elemento << std::endl;

		if (contador < 10) {
			std::cout << "desea agregar mas elementos a la cola? (s/n)";
			std::cin >> respuesta;
		}


	}
	//validar si la cola esta vacia 
	if (frente == final) {
		std::cout << "la cola esta vacia" << std::endl;
		return 1;
	}
	//obtener el primaer elemento de la cola 
	TipoDato primerelemento = A[(frente + 1) & MaxTamC];
	std::cout << "el primer elemento es:" << primerelemento << std::endl;
	//Eliminar un elemento de la cola 
	frente = (frente + 1) % MaxTamC;
	//Imprimir elementos de la cola en el orden en que fueron ingresados 
	std::cout << "elementos de la cola en el orden de ingreso:" << std::endl;
	for (int i = frente + 1; i <= final; i = (i + 1) % MaxTamC) {
		std::cout << A[i] << "";
	}
	std::cout << std::endl;
	return 0;
}