#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> stack; //initialize a stack

    for (char c : s) { //loop for every character in string
        if(c == '(' || c == '{' || c == '['){
            stack.push(c); //push current char to stack if it is open brackets, braces, or parenthesis
        }
        else {
            if (stack.empty()) { //edge case for empty or invalid string
                return false;
            }

            char temp = stack.top(); //temparary char for comparison of previous character
            stack.pop(); //remove top of stack to see next char in future loop

            if ((c == ')' && temp != '(') || (c == '}' && temp != '{') || (c == ']' && temp != '[')) { //compare current char to previously popped char 
                return false;
            }
        }
    }

    return stack.empty(); //return wheter parenthesis are valid: if stack is empty they were valid        
}

int main(){
    string s = "";

    

    cout << isValid(s);


    return 0;
}