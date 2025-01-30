#include <iostream>
#include<queue>

using namespace std;

int fib(int num){
    if(num <= 1) return num;
    else{
        return fib(num - 1) + fib(num - 2);
    }
}

int main(int argc, char* argv[]){

    cout << "Input a row number > 2: \n";
    int num;
    cin >> num;

    cout << fib(num);
 
    return 0;
}