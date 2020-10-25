// variant 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // вхідний параметр 
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = (sin(a) + cos(a * 5) - sin(a * 3)) / (cos(a) - cos(a * 3) + cos(a * 5));
	z2 = tan(a * 3);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}