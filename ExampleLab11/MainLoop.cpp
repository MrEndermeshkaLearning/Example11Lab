#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define NUM_MAX_ARRAY_VALUE 100

int main() {
	srand(time(NULL));

	//few examples task1
	//1 .1
	int arr[NUM_MAX_ARRAY_VALUE];
	for (int i = 0; i < NUM_MAX_ARRAY_VALUE; i++) {
		arr[i] = rand() % (-4 - -1) + -4;
		// rand()%(левая граница - правая граница) + левая граница
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	//1.3
	for (int i = 0; i < NUM_MAX_ARRAY_VALUE; i++) {
		while (true) {
			arr[i] = rand() % (-35 - -1) + -35;
			if (arr[i] % 2 == 0)
			{
				break;
			}
		}
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	//1.10
	double sqrt17 = (sqrt(17) * 100);
	double sqrt82 = (sqrt(82) * 100);
	int a=(int)sqrt17, b= (int)sqrt82;
	double arr[NUM_MAX_ARRAY_VALUE];
	for (int i = 0; i < NUM_MAX_ARRAY_VALUE; i++) {
		arr[i] = (rand() % (a-b) + a)/100;
		printf("arr[%d]=%lf\n", i, arr[i]);
	}
	//task2
	int n, m, k;
	printf("Сколько целых чисел нужно?\n=>");
	scanf_s("%d", &m);

	printf("Сколько чисел нужно?\n=>");
	scanf_s("%d", &n);
	while (true) {
		printf("Введите число с диапазона 3<=k<=10");
		scanf_s("%d", &k);
		if (k >= 3 && k <= 10) {
			break;
		}
	}
	int AArray[NUM_MAX_ARRAY_VALUE];
	double BArray[NUM_MAX_ARRAY_VALUE];
	for (int i = 0; i < m; i++) {
		AArray[i] = rand() % (77 - 127) + 77;
	}
	for (int i = 0; i < n; i++) {
		BArray[i] = rand() % (-6-10)+ -6;
	}
	int count = 0;
	for (int i = 0; i < m; i++) {
		if (count == k) {
			count = 0;
			printf("\n");
		}
		printf("arr[%d] = %d ", i, AArray[i]);
		count++;
	}

	printf("\n");
	 count = 0;
	for (int i = 0; i < m; i++) {
		if (count == k) {
			count = 0;
			printf("\n");
		}
		printf("arr[%d] = %.1lf ", i, BArray[i]);
		count++;
	}
	//task3
	int arr[NUM_MAX_ARRAY_VALUE];
	for (int i = 0; i < NUM_MAX_ARRAY_VALUE; i++) {
		arr[i] = rand() % (-100 - 200) + -100;
	}
	int max=INT_MIN;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	int lastPositiveElement = 0;
	for (int i = 0; i < NUM_MAX_ARRAY_VALUE; i++) {
		if (arr[i] > 0) {
			lastPositiveElement = i;
		}
	}
	int sum=0;
	for (int i = 0; i < lastPositiveElement; i++) {
		sum += arr[i];
	}
	for (int i = 0; i < NUM_MAX_ARRAY_VALUE; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("sum = %d, lastpositiveelement = %d", sum, lastPositiveElement);
	//task 4
	int arr4task[13];
	for (int i = 0; i < 13; i++) {
		arr4task[i] = rand() % (-100 - 200) + -100;
	}
	double averange = 0;
	for (int i = 0; i < 5; i++) {
		averange += arr4task[i];
	}
	averange /= 5.0;
	int sumQuad = 0;
	for (int i = 5; i < 13; i++) {
		sumQuad += pow(arr4task[i],2);
	}
	double difference;
	if (averange > sumQuad) {
		difference = averange - sumQuad;
	}
	else
	{
		difference = sumQuad - averange;
	}
	printf("averenge:%lf\nSumQuad:%d\ndifference:%lf", averange, sumQuad, difference);
}