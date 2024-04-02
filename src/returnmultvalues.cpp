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

int main() 
{
    // return multiple values from a function using pointers
    // Create an array of numbers.
    // Two functions - one returns the smallest number
    // in the array. The other returns the largest number
    // in the array.

    int numbers[5] = { 5, 4, -2, 29, 6 };
    cout << "Min is " << getMin(numbers, 5) << endl;
    cout << "Max is " << getMax(numbers, 5) << endl;


    return 0;
}