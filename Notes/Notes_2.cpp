#include <iostream>
#include<queue>

using namespace std;

int main(int argc, char* argv[]){

    cout << "Input a row number > 2: \n";
    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        queue<int> row;
        int val = 1;

        for(int j = 0; j <= i; j++){
            row.push(val);
            val = val * (i - j) / (j + 1);
        }
    }

    return 0;
}