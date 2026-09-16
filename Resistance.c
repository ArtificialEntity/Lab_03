#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	float R1;

	puts("Введите значение сопротивления первого резистера (Ом):");

	scanf("%f", &R1);

	float R2;

	puts("Введите значение сопротивления второго резистера (Ом):");

	scanf("%f", &R2);

	float straight = R1 + R2;

	float parallel = (R1 * R2) / (R1 + R2);

	printf("Общее сопротивление последовательно соединённых резисторов равна: %.5f\nОбщее сопротивление параллельно соединённых резисторов равна: %.5f", straight, parallel);

	return 0;
}