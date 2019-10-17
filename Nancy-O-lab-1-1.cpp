#include <iostream> 
#include <cmath> 
#include <clocale> 

using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "Введите первое ненулевое число: " << endl;
	cin>> a;

	cout << "Введите второе ненулевое число: " << endl;
	cin >> b;

	

	while (a * b == 0) {
		cout << "Одно из чисел равняется нулю, повторите попытку!" << endl;

		cout << "Введите первое ненулевое число: " << endl;
		cin >> a;

		cout << "Введите второе ненулевое число: " << endl;
		cin >> b;



	}


	double sum, res, mult;
	double div;

	sum = pow(a, 2) + pow(b, 2);
	res = pow(a, 2) - pow(b, 2);
	mult = pow(a, 2) * pow(b, 2);
	div = (double)pow(a, 2) / pow(b, 2);

	cout << "Сумма квадратов чисел: " << sum << endl;
	cout << "Разница квадратов чисел: " << res << endl;
	cout << "Произведение квадратов чисел: " << mult << endl;
	cout << "Частное квадратов чисел: " << div << endl;

	return 0;


}