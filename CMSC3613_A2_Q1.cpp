#include <iostream>

using namespace std;

int find_smallest(int* a, int size) {
    if(size == 1){ //If there is only one item available, it is smallest by default
        return a[0]; //so return it
    }

    return min(a[size - 1], find_smallest(a, size - 1)); //Return the minimum number between last item in the array 
                                                         //and whatever minimum number the function returns
}

int main(int argc, char* argv[]) {

    int arr[] = {13, 19, 12, 11, 15, 19, 23, 12, 9, 22, 18, 19, 14, 17, 23, 21};

    cout << "smallest: " << find_smallest(arr, ( sizeof(arr)/sizeof(arr[0]) )) << endl; //sizeof array / sizeof array[0] 
                                                                                        //to determine size of the array automatically

    return 0;
}