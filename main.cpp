#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	double a,b,p;
	cout << "Podaj bok a: ";
	cin >> a;
	cout << "Podaj bok b: ";
	cin >> b;
	if(a>0 && b>0){
		p = a*b;
		cout << "Pole wynosi: " << p;
		getch();
	}else{
		exit(0);
	}
//	return 0;
}
