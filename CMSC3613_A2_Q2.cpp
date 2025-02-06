#include <iostream>
#define numOfDisks 5

using namespace std;

void Move(int n, char x, char y){
    cout<<"Move "<<n<<" from "<<x<<" to "<<y<<endl;
}

void Hannoi(int n, char a, char b, char c){
    if(n == 0){ //stops the current function at zero because zero is not a disk
        return; //This decides when to move a disk because it stops the current recursion and follows through on the previous instructions
    }
    Hannoi(n - 1, a, c, b); //call Hannoi() for the disk below original disk, this repeats until is hits lowest (top) disk, rearranging 'A', 'B', and 'C'
    Move(n, a, c); //moves current disk from x to y, the varying orders of 'A', 'B', and 'C' represents all possible moves
    Hannoi(n - 1, b, a, c); //call Hannoi() again after a successful move to rearrange 'A', 'B', and 'C', going up to lowest disk again
}

int main(int argc, char* argv[]){
    
    cout<<"Hanoi solution (the number of disks is "<< numOfDisks<<"):"<<endl;
    Hannoi(numOfDisks,'A','B','C');
    cout<<"The End!"<<endl;

    return 0;
}