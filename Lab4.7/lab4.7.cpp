#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double x, x2, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;

	cout << "x = "; cin >> x;
	cout << "x2 = "; cin >> x2;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-----------------------------------------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(15) << "exp(x*x)" << " |"
		<< setw(15) << "S" << " |"
		<< setw(10) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------------------------" << endl;

	while (x <= x2)  // ???? ??? ?
	{
		n = 0; // ????????? ???????? n
		a = 1; // ????? ???????? ? ????? ??? n = 0
		S = a; // ????? ???????? ? ???? ??? n = 0
		do {
			n++; // ?????????? n
			R = x*x / n; // ??????????? ?????????? ?????????????
			a *= R; // ????????? ????????? ???? ? ????? ???? ?? ????????? ???????? ???????? ?? ?????????? 
			S += a; // ????????? ???? ???? ?????? ????????? ?????? ?????????? ????? ?? ??????? ????
		} while (abs(a) >= eps);
		cout << "|" << setw(10) << setprecision(2) << x << " |"
			<< setw(15) << setprecision(2) << exp(x*x) << " |"  // ??? ?????????? ???????? ?񳺿 ???????
			<< setw(15) << setprecision(2) << S << " |"
			<< setw(10) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------------------" << endl;
	return 0;
}

