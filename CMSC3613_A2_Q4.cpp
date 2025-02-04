#include <iostream>

using namespace std;

bool helper(int* a, int target, int size, int index0, int index1){
    if(size < 2){
        return false;
    }

    if(a[index0] + a[index1] == target){
        return true;
    }

    if(index0 == size) {
        return helper(a, target, size, index0 + 1, index0 + 2);
    }   

    return helper(a, target, size, index0, index1 + 1);
    
}

void twoSum(int * arr, int target, int size) {
    
    if ( helper(arr, target, size, 0, 1) ) {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}

int main() {

    int arr1[] = {2,15,11,7};
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