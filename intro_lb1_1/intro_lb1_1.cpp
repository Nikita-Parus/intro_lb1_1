#include <iostream>

using namespace std;

int main()
{
	setlocale(0,".1251");
	int  S, P, a, b;
	double sum, dif, mul, div;
	
	cout << "Введiть А та В: ";
	cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);

	printf("S = %d P = %d\n",S,P);

	sum = (double)S + P;
	dif = (double)S - P;
	mul = (double)S * P;
	div = (double)S / P;
	
	printf("Sum: %f Dif: %f Mul: %f Div: %f\n", sum, dif, mul, div);

	cout << "Адреси: \n";
	printf("S: %p P: %p a: %p b: %p\n", &S, &P, &a, &b);
	printf("Sum: %p Dif: %p Mul: %p Div: %p\n", &sum, &dif, &mul, &div);
}