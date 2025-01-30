#include <iostream>

using namespace std;

void Move(int n, char x, char y){ //Move function to make the Hannoi function cleaner
    cout << "Move " << n << " from " << x << " to " << y << endl; 
}

void Hannoi(int n, char a, char c, char b){
    if(n == 0){ //stops the current function at zero because zero is not a disk
        return;
    }
    Hannoi(n - 1, a, b, c); //call hannoi function again for the disk below original disk, this repeats until is hits lowest (top) disk
    Move(n, a, c); //moves current disk from x to y, the varying orders of 'a', 'b', and 'c' represents all possible moves
    Hannoi(n - 1, b, c, a);
}

int main(int argc, char* argv[]){
    
    cout << "Input a row number > 2: \n";
    int n;
    cin >> n;

    Hannoi(n, 'A', 'C', 'B');

    return 0;
}