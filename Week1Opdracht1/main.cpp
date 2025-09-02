#include <stdio.h>



// opdracht 1:
//variables
//int leeftijd;
//
//int main(void)
//{
//	scanf_s("%d", &leeftijd);
//	leeftijd *= 12;
//	printf_s("leeftijd in maanden is:\n%d", leeftijd);
//}

// opdracht 2:
//variables
int a, b, c;
int gemiddelde;
int main(void) {
	printf_s("kies 3 getallen om het gemiddelde van te berekenen\n");
	scanf_s("%d %d %d", &a, &b, &c);
	gemiddelde = (a + b + c) / 3;
	printf_s("het gemidelde is %d", gemiddelde);
	return 0;
}