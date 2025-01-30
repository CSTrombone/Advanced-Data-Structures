#include <iostream>
#include<queue>

using namespace std;

int find_smallest(int a[], int size){
    if (size == 1){
        return a[0];
    }

    int s = a[size - 1];

    if(a[size - 2] < s){
        s = a[size - 2];
        return find_smallest(a, --size);
    }

    return s;
}

int main(int argc, char* argv[]){

    int arr[] = {13, 19, 12, 11, 15, 19, 23, 12, 13, 22, 18, 19, 14, 17, 23, 21};

    cout << "Smallest: " << find_smallest(arr, 16) << endl;
 
    return 0;
}