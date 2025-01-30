#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<string> stack;

    if(tokens.size() == 0){ //edge case for empty vector
        return 0;
    }

    for( string s : tokens){ //traverse all strings within the vector "tokens"
        if(s == "+" && stack.size() >= 2){  //do equation for the "+" delimiter, edge case to ensure there are two integers to add
            int a = stoi(stack.top()); //empty stack into two integer variables
            stack.pop();
            int b = stoi(stack.top());
            stack.pop();

            stack.push(to_string(b + a)); //push sum into stack
        }
        else if(s == "-" && stack.size() >= 2){ //do equation for the "-" delimiter, edge case to ensure there are two integers to subtract
            int a = stoi(stack.top()); //empty stack into two integer variables
            stack.pop();
            int b = stoi(stack.top());
            stack.pop();

            stack.push(to_string(b - a)); //push difference into stack
        }
        else if(s == "*" && stack.size() >= 2){ //do equation for the "*" delimiter, edge case to ensure there are two integers to multiply
            int a = stoi(stack.top()); //empty stack into two integer variables
            stack.pop();
            int b = stoi(stack.top());
            stack.pop();

            stack.push(to_string(b * a)); //push product into stack
        }
        else if(s == "/" && stack.size() >= 2){ //do equation for the "/" delimiter, edge case to ensure there are two integers to devide
            int a = stoi(stack.top()); //empty stack into two integer variables
            stack.pop(); 
            int b = stoi(stack.top());
            stack.pop();

            stack.push(to_string(b / a)); //push quotient into stack
        }
        else if(s != "+" && s != "-" && s != "*" && s != "/"){ //this may seem redundant, but it actually cover an edge case
            stack.push(s); //push integer into stack
        }

    }


    return stoi(stack.top()); //return solution (only remaining item in stack) as an integer

}

int main(){
    vector<string> s = {"2","+"};
    
    

    cout << evalRPN(s);


    return 0;
}