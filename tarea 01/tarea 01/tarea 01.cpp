#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


bool espalindrome(int n) {
	int a, b, c, d, e;
	a = n / 10000;
	b = (n - a * 10000) / 1000;
	c = (n - (a * 10000 + b * 1000)) / 100;
	d = (n - (a * 10000 + b * 1000 + c * 100)) / 10;
	e = n % 10;

	if (a == e && b == d)
		return true;
	else
		return false;
}


int fibonnacci(int i) {
	int c = 0;
	int q = 0;
	int r = 1;
	int s;
	if (i >= 2) {
		while (c <= i - 2) {
			s = q + r;
			q = r;
			r = s;
			c++;
		}
	}
	else if (i == 0) {
		s = 0;
	}
	else s = 1;
	return s;
}


float  calcularcargo(float x) {
	float y = 20.00;
	for (float c=0; c  <= 24-x; c++) {
		for (; c >= 0; y = y + 5.00) {
			cout << y << "\t";
		}
	}
	return 0;
}


int resultado(int x, int y) {
	int result = 1;
	for (int c = 0; c < y; c += 1) {
		result = result * x;
	}
	return result;
}


bool esfactor(int x, int y) {
	bool g;
	if (x % y == 0) {
		g = true;
	}
	else g = false;
	return g;
}


int primo(int x) {
	int c = 0;
	int y = 1;
	int n;
	while (y <= x) {
		if (x % y == 0)
			c += 1;
		y += 1;

	}
	if (c == 2)
		n = 1;
	else {
		n = 0;
	}

	return n;

}


int invertir(int x){
	for (; x > 0; x = x / 10) {
		int y = x % 10;
		cout << y << '\t';
	}
	return 0;
}

int exponencial(int x, int y) {

	if (y == 0)
		x = 1;
	else {
		x = x * exponencial(x, y - 1);
	}
	return x;
}
int mcd(int x, int y) {
	if (x == 0) {
		return y;
	}
	return mcd(x % y, y);
}

int main()
{
	/*4.26
	short lado;
	cout << "ingresa el lado del cuadrado" << endl;
	cin >> lado;
	for (short i = 0; i < lado; i++) {
		for (short j = 0; j < lado; j++) {
			if (i == 0 || j == 0 || i == lado - 1 || j == lado - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}*/


	/*4.27
	int numero;
	cout << "ingresa un numero de 5 digitos" << endl;
	cin >> numero;
	if (espalindrome(numero)) {
		cout << "es palindrome";
	}
	else
		cout << "no es palindrome";
		*/


	/*4.28
	int numero, temporal;
	int divisor = 1;
	cout << "ingresa un numero" << endl;
	cin >> numero;
	temporal = numero;
	while (temporal / 10 != 0) {
		temporal = temporal/10;
		divisor = divisor * 10;
	}
	while (divisor != 0) {
		cout << numero / divisor;
		if (divisor / 10 != 0) {
			cout << " ";
		}
		numero = numero % divisor;
		divisor = divisor / 10;
	}
	cout << '\t';*/


	/*4.30
	int x = 1;
	while(x>0){
		cout << fibonnacci(x) << endl;
		x = x + 1;
	}*/


	/*5.11
	int num, mayor, menor;
	for (int i = 0; i < 5; i++) {
		cout << "ingresa un numero" << endl;
		cin >> num;
		if (i == 0) {
			mayor = num;
			menor = num;
		}
		else {
			if (num > mayor)mayor = num;
			if (num < menor)menor = num;
		}
	}
	cout << " el numero menor es " << menor;*/


	/*5.15
	int main()

/*{
	//Parte a

	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 10; j++) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}*/


/*int main()
{
	//Parte b

	for (int i = 10; i >= 1; i--) {

		for (int j = 1; j <= 10; j++) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}*/


/*int main()
{
	//Parte c

	for (int i = 10; i >= 1; i--) {

		for (int j = 10; j >= 1; j--) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}
	
int main()

//Parte d
{
	for (int i = 1; i <= 10; i++) {

		for (int j = 10; j >= 1; j--) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}
	}*/


	/*5.19
	float x = 4;
	float y = 1;
	float c1 = 0;
	int c2 = 1;
	while (c2<=200000){

		if (c2 % 2 == 0)
			c1 -= x / y;
		else 
			c1 += x / y;
		c2 += 1;
		y += 2;
		
		
	}

	cout << c1 << endl;
	*/


	/*5.29
	cout << fixed << setprecision(2);
	double principal{ 24.00 };
	double rate{ 0.10 };
	cout << "Initial principal: " << principal << endl;
	cout << " Interest rate: " << rate << endl;
	cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
	for (unsigned int year = 1; year <= 390; year++) {
		double amount = principal * pow(1.0 + rate, year);
		cout << setw(4) << year << setw(20) << amount << endl;
	}*/


	/*6.12
	float x;
	cout << "ingresa la hora" << endl;
	cin >> x;
	float y;
	cout << "ingresa la hora" << endl;
	cin >> y;
	float z;
	cout << "ingresa la hora" << endl;
	cin >> z;
	cout << "cliente 1" << calcularcargo(x) << endl;
	cout << "cliente 2" << calcularcargo(y) << endl;
	cout << "cliente 3" << calcularcargo(z) << endl; */

	/*6.18
	int x;
	int y;
	cout << "ponga su base:" << endl;
	cin >> x;
	cout << " ponga su exponente" << endl;
	cin >> y;
	cout << " el resultado es:" << resultado(x, y) << endl; */


	/*6.20
	int x;
	int y;
	cout << "ingresa un numero" << endl;
	cin>> x;
	cout << "ingresa otro numero" << endl;
	cin >> y;
	cout << esfactor(x, y) << endl; */


	/*6.25*/


	/*6.29

	int x;
	int q = 2;

	cout << "coloque el numero de x" << endl;
	cin >> x;
	cout << primo(x) << endl;

	while (q <= 10000) {
		q++;

		cout << q << '\t' << primo(q) << endl;
	}*/


	/*6.30

	int x;
	cout << "ingrese un numero" << endl;
	cin >> x;
	cout << invertir(x); */


	/*6.36

	int x;
	int  y;
	cout << "ingresa la base:" << endl;
	cin >> x;
	cout << "ingrese el exponente:" << endl;
	cin >> y;
	cout << "la respuesta es:" << exponencial(x, y) << endl; */

	/*6.37
	int x;
	cout << "ingresa un numero" << endl;
	cin >> x;
	cout << "su numero fibonacci es :" <<fibonnacci(x)<< endl; */


	/*6.39*/


	/*6.41
	int x, y;
	cout << "ingresa el mayor" << endl;
	cin >> x;
	cout << "ingreas el menor" << endl;
	cin >> y;
	cout <<"el maximo comun divisor: "<< mcd(x, y); */


	return 0;
}