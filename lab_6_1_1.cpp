// Масив від - 25 до 80
// int* c[21]
// Всі крім парних, або з індексами кратними 13

#include <iostream>
#include <time.h>

using namespace std;

void Create(int *c, const int size, const int Low, const int High){
	for(int i=0; i < size; i++){
		c[i] = Low + rand() % (High - Low + 1);
	}

}

int main(){

	srand((unsigned)time(NULL));

	const int n = 21;
	int c[n];
	int Low = -25;
	int High = 80;

	Create(c, n, Low, High);

	return 0;
}