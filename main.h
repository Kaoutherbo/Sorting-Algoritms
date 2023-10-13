#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

void bubbleSort(int*,int);

void selectionSort(int*,int);

void insertionSort(int*,int);
void displayArray(int* , int ,char*);
int getSize(char *s);
int getOption(char *s);
void printUsageSort(int *arr, int size, int option);
void fillArray(int *arr,int size);

#endif