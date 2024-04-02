#include <iostream>
using namespace std;

// size represents the size of the array
int getMin(int numbers[], int size) {
    int min = numbers[0];
    for(int i = 1; i < size; i++) {
        if(numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for(int i = 1; i < size; i++) {
        if(numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

// int* min is a pointer to the min number. 
// int* max is a pointer to the max number
void getMinAndMax(int numbers[], int size, int* min, int* max) {
        for(int i = 1; i < size; i++) {
        if(numbers[i] > *max)
            *max = numbers[i];        
        if(numbers[i] < *min)
            *min = numbers[i];
    }
}

int main() 
{
    // return multiple values from a function using pointers
    // Create an array of numbers.
    // Two functions - one returns the smallest number
    // in the array. The other returns the largest number
    // in the array.

    int numbers[5] = { 5, 4, -2, 29, 6 };
    // cout << "Min is " << getMin(numbers, 5) << endl;
    // cout << "Max is " << getMax(numbers, 5) << endl;

    int min = numbers[0];
    int max = numbers[0];

    // &min is called passing a parameter using a reference
    // That is, passing the address of the variable
    // rather than passing the variable itself
    getMinAndMax(numbers, 5, &min, &max);

    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;

    return 0;
}