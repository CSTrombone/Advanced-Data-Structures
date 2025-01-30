#include <iostream>

using namespace std;

void Move(int n, char x, char y){
    cout << "Move " << n << " from " << x << " to " << y << endl;
}

void Hannoi(int n, char a, char c, char b){
    if(n == 0){
        return;
    }
    Hannoi(n - 1, a, b, c);
    Move(n, a, c);
    Hannoi(n - 1, b, c, a);

}


int main(int argc, char* argv[]){

    cout << "Input a row number > 2: \n";
    int n;
    cin >> n;

    Hannoi(n, 'A', 'C', 'B');
 
    return 0;
}