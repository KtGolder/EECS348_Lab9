

/*

* Program1.c

*

* Created on: Feb 9, 2023

* Author: k121g110

*/

#include <stdio.h>

int main()

{

printf("Hello World\n");

const char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

FILE* fp;

fp = fopen("SampleInput.txt", "r");

float sales[12];

printf("Monthly sales report for 2022: \nMONTHS SALES\n");

int i;

for (i=0; i< 12; i++){

fscanf(fp,"%f", &sales[i]);

}

fclose(fp);

for (i=0; i< 12; i++){

printf("%-9s %5.2f\n",months[i], sales[i]);

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

printf("\nSales summary:\n");

int location = 0;

for (int c = 1; c < 12; c++)

if (sales[c] < sales[location])

location = c;

printf("Minimum Sales: $%5.2f (%s)\n", sales[location], months[location]);

//-------------------------------------------------------

location = 0;

for (int c = 1; c < 12; c++)

if (sales[c] > sales[location])

location = c;

printf("Maximum Sales: $%5.2f (%s)\n", sales[location], months[location]);

//-------------------------------------------------------

float sum;

float avg;

for (i = 0; i < 12; i++) {

sum += sales[i];

}

avg = sum / 12;

printf("Average Sales: $%5.2f\n", avg);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

printf("\nSix Month Moving Average Report:\n");

int k;

for (k = 0; k < 7; k++){

sum = 0;

avg = 0;

printf("%-9s - ",months[k]);

for (i = k; i < (k+6); i++) {

sum += sales[i];

}

printf("%-9s",months[i-1]);

avg = sum / 6;

printf(" $%5.2f\n", avg);

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

printf("Sales Report (Highest to Lowest):\nMonth Sales\n");

/*

float temp = 0;

for (int i = 0; i < 12; i++) {

for (int j = i+1; j < 12; j++) {

if(sales[i] > sales[j]) {

temp = sales[i];

sales[i] = sales[j];

sales[j] = temp;

}

}

}

for (int i = 0; i < 12; i++) {

printf("%s %f5.2\n ",months[i], sales[i]);

}

*/

int max_index;

for(int i = 0; i < 13 - 1; i++) {

max_index = i;

for(int j = i + 1; j < 12; j++) {

if(sales[max_index] < sales[j]) {

max_index = j;

}

}

if(max_index != i)

{

float temp = sales[i];

sales[i] = sales[max_index];

sales[max_index] = temp;

//printf("temp: %f\n", max_index);

}

printf("%-9s ", months[max_index]); //Error here! Good till max doesn't change

printf("%5.2f\n", sales[i]);

}

printf("\nBye World");

return 0;

}
