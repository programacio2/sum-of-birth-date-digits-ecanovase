#include <stdio.h>

int main() {
	int year, month, day;
	printf("What year were you born in?: ");
	scanf_s("%i", &year);
	printf("\nWhat month wew you born in?:");
	scanf_s("%i", &month);
	printf("\nWhat day were you born in?:");
	scanf_s("%i", &day);

	int result;
	result = year + month + day;

	printf("The result is %i", result);
}