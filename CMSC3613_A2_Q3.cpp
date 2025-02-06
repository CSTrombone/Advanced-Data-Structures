#include <iostream>
#include <ctype.h>
#include <vector>
    
using namespace std;

void removeDigits(vector<char> & v, vector<char> & result, int index) {
    if(index >= v.size()){ //Prevent exceeding vector bounds
        return;
    }

    if (!isdigit(v[index])){ //Check if current index is NOT a digit
        result.push_back(v[index]); //Push non-digit to result vector
    }
    else{
        v.erase(v.begin() + index); //Remove the digit from the original vector
        return removeDigits(v, result, index); //Repeat function without increasing the index
    }
    
    return removeDigits(v, result, ++index); //Increment index and repeat function
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