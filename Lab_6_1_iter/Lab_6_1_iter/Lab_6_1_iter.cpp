// Масив від -25 до 80
// int* b[23]
// Всі додатні і непарні

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++) {
		b[i] = Low + rand() % (High - Low + 1);
	}

}

void Print(int* b, const int size) {
	for (int i = 0; i < size; i++){
		cout << setw(4) << b[i];
	}
	cout << endl;
}

int Sum(int* b, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
	{
		if (b[i] > 0 && b[i] % 2 !=0) {
			S += b[i];
		}
	}
	return S;
	}

int SumArguments(int* b, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
	{
		if (b[i] > 0 && b[i] % 2 != 0) {
			S += 1;
		}
	}
	return S;
}


void ChangeToZero(int* b, const int size){
	for (int i = 0; i < size; i++)
	{
		if (b[i] > 0 && b[i] % 2 != 0) {
			b[i] = 0; 
		}
	}
}



int main() {

	srand((unsigned)time(NULL));

	const int n = 23;
	int b[n];
	int Low = -25;
	int High = 80;

	Create(b, n, Low, High); // Заповнюэ масив ранд. числами

	Print(b, n); // Виводить масив 
	
	cout << "\nSum: " << Sum(b, n) << endl << "\n"; // Обчислює за вказ. данними

	cout << "Sum of arguments: " << SumArguments(b, n) << endl << "\n"; // Обчислює кількість елементів за вказ. данними

	ChangeToZero(b, n); // Міняє вказ. числа на 0

	Print(b, n); // Виводить модифікований масив

	return 0;
}