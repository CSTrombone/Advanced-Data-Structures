#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int numRows = 0;

        cin >> numRows;

        if(numRows == 0){
            vector<int> result;
            result.push_back(1);
            //return result;
        }
        
        if(numRows == 1){
            vector<int> result;
            result.push_back(1);
            result.push_back(1);
            //return result;
        }

        queue<int> q; //initialize queue for the triangle
        vector<vector<int>> result(numRows + 1); //initialize nested vector for LeetCode

        for(int i = 0; i <= numRows; i++){ //iterate for the specified amount of rows

            int val = 1; //initial '1' for the outskirts of the triangle
            for(int j = 0; j <= i; j++){    //interate for the length of the rows
                q.push(val); //push value calulated from last row
                result[i].push_back(q.front()); //push_back into nested vector so it can be understood by LeetCode
                q.pop(); //remove from queue after copying to nested vector

                val = val * (i - j) / (j + 1); //calulate next number in row
                
            }

        }

        for(int z = 0; z < numRows; z++){
            cout << result[numRows - 1][z] << " "; //Print nested vector
        }

    return 0;
}