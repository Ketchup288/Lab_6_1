// Масив від -25 до 80
// int* b[23]
// Всі додатні і непарні

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High, int i){
	b[i] = Low + rand() % (High - Low + 1);
	if (i<size-1){
		Create(b, size, Low, High, i+1);
	}
}


void Print(int* b, const int size, int i){
	cout << setw(4) << b[i];
	if (i<size-1){
		Print(b, size, i + 1);
	}
	else{
		cout << endl;
	}
}


int Sum(int* b, const int size, int i, int S){
	if (b[i] > 0 && b[i] % 2 !=0){
		S += b[i];
	}
	if (i<size-1){
		return Sum(b, size, i+1, S);
	}
	else{
		return S;
	}
}

int SumArguments(int* b, const int size, int i, int s){
	if (b[i] > 0 && b[i] % 2 !=0){
		s += 1;
	}
	if (i<size-1){
		return Sum(b, size, i+1, s);
	}
	else{
		return s;
	}
}




int main(){

	srand((unsigned)time(NULL));

	const int n = 23;
	int b[n];
	int Low = -25;
	int High = 80;

	Create(b, n, Low, High, 0);

	Print(b, n, 0);

	cout << "Sum: " << Sum(b, n, 0, 0) << endl << "\n";

	cout << SumArguments(b, n, 0, 0) << endl;
	

	return 0;
}
