// Масив від - 25 до 80
// int* c[23]
// Всі крім парних, або з індексами кратними 13

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int *c, const int size, const int Low, const int High){
	for(int i = 0; i < size; i++){
		c[i] = Low + rand() % (High - Low + 1);
	}

}

void Print(int *c, const int size){
	for(int i = 0; i<size; i++){
		cout << "c[" << setw(2) << i << "] = " << setw(4) << c[i] << endl;
	}
}

int Sum(int *c, const int size){
	int S = 0;
	for (int i=0; i < size; i++)
	{
		if(c[i] > 0 && (c[i] % 2) != 0){
			S += c[i];
			return S;
		}
		else{
			return 0;
		}
	}
}

int main(){

	srand((unsigned)time(NULL));

	const int n = 23;
	int c[n];
	int Low = -25;
	int High = 80;

	Create(c, n, Low, High);

	Print(c, n);

	Sum(c, n);

	return 0;
}