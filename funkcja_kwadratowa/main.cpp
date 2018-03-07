#include <iostream>
#include <Math.h>
#include <conio.h>

using namespace std;

int main() {
	double a,b,c, delta, x0, x1, x2;
	cout << "Podaj wspolczynnik a: ";
	cin >> a;
	cout << "Podaj wspolczynnik b: ";
	cin >> b;
	cout << "Podaj wspolczynnik c: ";
	cin >> c;
	
	delta = b*b-4*a*c;
	
	if(delta>0){
		x1 = -b-sqrt(delta)/2*a;
		x2 = -b+sqrt(delta)/2*a;
		cout << "Delta = " << delta << "\n";
		cout << "Rownanie posiada 2 rozwiazania: \n";
		cout << "x1: " << x1 << "\n";
		cout << "x2: " << x2;
	}else if(delta == 0){
		x0 = -b/2*a;
		cout << "Delta = " << delta << "\n";
		cout << "Rownanie posiada 1 rozwiazanie: \n";
		cout << "x0 = " << x0;
	}else{
		cout << "Rownanie nie ma rozwiazan";
	}
	
	getch();
	return 0;
}
