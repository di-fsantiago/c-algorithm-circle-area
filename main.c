#include <stdio.h>
#include <locale.h>
#define PI 3.14159 // Define a constante do "PI"

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	area = PI * raio * raio;
	
	printf("A área é aproximadamente = %.2f\n", area);
	return 0;
}
