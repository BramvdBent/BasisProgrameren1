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
//int a, b, c;
//int gemiddelde;
//int main(void) {
//	printf_s("kies 3 getallen om het gemiddelde van te berekenen\n");
//	scanf_s("%d %d %d", &a, &b, &c);
//	gemiddelde = (a + b + c) / 3;
//	printf_s("het gemidelde is %d", gemiddelde);
//	return 0;
//}

// opdracht 3:
// variables
//int a, b, grootste_getal;
//
//
//int main(void) {
//		printf_s("kies 2 getallen om te vergelijken\n");
//		scanf_s("%d %d", &a, &b);
//		// evengroot
//		if (a == b) {
//			printf_s("de getallen zijn even groot");
//		}
//		// a is het grootst
//		if (a > b) {
//			grootste_getal = a;
//		}
//		// b is het grootst
//		if (a < b) {
//			grootste_getal = b;
//		}
//		printf_s("het grootste getal is: %d", grootste_getal);
//		return 0;
//
//}

// opdracht 4:
// variables
//int a, b, c, grootste_getal;


//int main(void) {
//		printf_s("kies 3 getallen om te vergelijken\n");
//		scanf_s("%d %d %d", &a, &b, &c);
//		// evengroot
//		if (a == b and a == c) {
//			printf_s("de getallen zijn even groot\n");
//			grootste_getal = a;
//		}
//		// a is het grootst
//		else if (a > b and a > c) 
//		{
//			grootste_getal = a;
//		}
//		// b is het grootst
//		else if (b > a and b > c) {
//			grootste_getal = b;
//		}
//		// c is het grootst
//		else
//		{
//			grootste_getal = c;
//		}
//		printf_s("het grootste getal is: %d", grootste_getal);
//		return 0;
//}

// opdracht 5:
// variables
//int a, b;
//
//
//int main(void) {
//		printf_s("kies 2 getallen om te vergelijken\n");
//		scanf_s("%d %d", &a, &b);
//		// evengroot
//		if (a == b) {
//			printf_s("de getallen zijn even groot");
//		}
//		else if (a < 0 or b < 0) {
//			printf_s("kies positieve getallen");
//		}
//		else if (a != b) {
//			printf_s("de getallen zijn niet gelijk aan elkaar");
//		}
//		return 0;
//
//}

// opdracht 6
// variables
//float a;
//
//int main(void)
//{
//	scanf_s("%f", &a);
//	printf_s("%.4f", a);
//}

// opdracht 7
// variables
//float pi = 3.141592;
//float radius;
//float omtrek;
//float oppervlakte; 
//
//int main(void) {
//	scanf_s("%f", &radius);
//		//omtrek = 2pi * r
//		omtrek = 2 * pi * radius;
//		printf_s("omtrek: %f\n", omtrek);
//	//oppervlakte pi**2 * r
//		oppervlakte =  pi * pi * radius;
//		printf_s("oppervlakte: %f\n", oppervlakte);
//}



// opdracht 8
// variables
//float btw = 1.21;
//float bedrag;
//int main(void) {
//	printf_s("typ een prijs in excl btw \n");
//	scanf_s("%f", &bedrag);
//	bedrag = bedrag * btw;
//	printf_s("het bedrag met btw is: %f", bedrag);
//}

// opdracht 9
// variables
float omrekenfactor = 3.6;
float snelheid;
int main(void) {
	printf_s("typ een snelheid in km/h \n");
	scanf_s("%f", &snelheid);
	snelheid = snelheid / omrekenfactor;
	printf_s("je snelheid in m/s is: %f", snelheid);
}