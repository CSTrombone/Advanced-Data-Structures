#include <iostream>

using namespace std;

bool helper(int* a, int target, int size, int index0, int index1){ //Pass the array, the target, and two values to point to any combination on the array
    if(size < 2 || index0 == size){ //Automatically return false if there isnt 2 numbers to add or if index0 exceeds the length of the array
        return false;
    }

    if(a[index0] + a[index1] == target && index0 != index1){ //Check if both indexes add up to target, ignore if they are pointing to the same position on the array
        return true;                                         //Return true if this condition is fullfilled
    }

    if(index1 == size - 1) { //Check if index1 has reached the end of the array
        return helper(a, target, size, index0 + 1, 0); //resent index1 to 0 and increment index0 by 1
    }   

    return helper(a, target, size, index0, index1 + 1); //If no condition is met, point index1 to next position, keeping index0 in place
    
}

void twoSum(int * arr, int target, int size) {
    
    if ( helper(arr, target, size, 0, 1) ) { //Call helper() and pass 0 and 1 for the pointers so they are not looking at the same position
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}

int main() {

    int arr1[] = {2,7,11,15};
    int target1 = 9;
    int size1 = 4;
    
    twoSum(arr1, target1, size1);
    
    int arr2[] = {1,2,4,7,5,11,4};
    int target2 = 10;
    int size2 = 7;
    
    twoSum(arr2, target2, size2);
    
    int arr3[] = {6,6,1,4,3,3};
    int target3 = 6;
    int size3 = 6;
    
    twoSum(arr3, target3, size3);

    return 0;
}