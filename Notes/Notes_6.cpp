#include <iostream>
#include<queue>

using namespace std;

void Move(int n, char x, char y){
    cout << "Move " << n << " from " << x << " to " << y << endl;
}

void Hannoi(int n, char a, char b, char c){
    //To do
}


int main(int argc, char* argv[]){

    cout << "Input a row number > 2: \n";
    int n;
    cin >> n;

    Hannoi(n, 1, 3, 2);
 
    return 0;
}