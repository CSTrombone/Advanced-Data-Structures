#include <iostream>
#include <ctype.h>
#include <vector>

using namespace std;

void removeDigits(vector<char> & v, vector<char> & result, int index) {
    if(index >= v.size()){ //Prevent exceeding vector bounds
        return;
    }

    if (!isdigit(v[index])){ //Check if current index is NOT a digit
        v.erase(v.begin() + index); //Remove the digit from the original vector
        result.push_back(v[index]); //Push non-digit to result vector
    }
    removeDigits(v, result, ++index); //Increment index and repeat function
}

int main() {

    vector<char> v = {'a', 'b', 'c', '1', '2', '3', 'd', 'e', 'f'};
    vector<char> result;
    
    removeDigits(v, result, 0); //Calling the finished void function
    
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}