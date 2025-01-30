#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int numRows = 0;

        cin >> numRows;

        queue<int> q; //initialize queue for the triangle
        vector<vector<int>> result(numRows); //initialize nested vector for LeetCode

        for(int i = 0; i < numRows; i++){ //iterate for the specified amount of rows

            int val = 1; //initial '1' for the outskirts of the triangle
            for(int j = 0; j <= i; j++){    //interate for the length of the rows
                q.push(val); //push value calulated from last row
                result[i].push_back(q.front()); //push_back into nested vector so it can be understood by LeetCode
                q.pop(); //remove from queue after copying to nested vector
                

                cout << " " << result[i][j] << " "; //Print progress from nested vector

                val = val * (i - j) / (j + 1); //calulate next number in row
                
            }

            cout << endl; //Next line
        }

    return 0;
}