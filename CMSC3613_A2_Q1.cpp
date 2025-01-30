#include <iostream>

using namespace std;

int smallest(int arr[], int arrsize, int index){
    if(index >= arrsize){
        
    }

    int min = arr[index] < min ? arr[index] : min;

    smallest(arr, arrsize, index + 1);

    return min;
}

int main(int argc, char* argv[]){

    int arr[] = {5, 43, 1, 44, 3, 4};
    
    smallest(arr, sizeof(arr), 0);

    return 0;
}