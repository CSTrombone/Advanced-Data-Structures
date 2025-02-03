#include <iostream>

using namespace std;

bool helper(/*ToDo: finish the parameter list to facilitate your task*/){
//ToDo: This is a recursive function
}

void twoSum(int * arr, int target, int size) {
    
    if ( /*ToDo: Call the helper() function*/ ) {
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