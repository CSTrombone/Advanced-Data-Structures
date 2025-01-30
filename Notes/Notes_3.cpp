#include <iostream>
#include<queue>

using namespace std;

int fact(int num){
    if (num == 0) {
        return 1;
    }
    else {
        int val = fact(num -1);
        return num * val;
    }
}

int main(int argc, char* argv[]){

    cout << "Input a row number > 2: \n";
    int num;
    cin >> num;

    cout << fact(num);

    return 0;
}