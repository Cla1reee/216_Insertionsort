#include <iostream>
using namespace std;

void intsertionsort() {
    int i, j, n{}, temp;
    int arr[20];

    for (i = 1; i <= - 1; i++) { //step 1
        temp = arr[20]; //step 2
        j = i - 1; //step 3
        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j] = arr[j + 1]; //step 4a
            j = j - 1; //step 4b
        }
