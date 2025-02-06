#include <iostream>
#include <vector>

using namespace std;

void backtrack(int start, vector<int>& nums, vector<int>& currsubset, vector<vector<int>>& result) {
    if(start == nums.size()) { //once the index reaches the end of the 'nums' vector, push the current subset into the result vector
        result.push_back(currsubset);
        return; //return result vector
    }

    currsubset.push_back(nums[start]); //push the integer being pointed to into the current subset
    backtrack(start + 1, nums, currsubset, result); //call backtrack to follow the next possible step to the left of the tree

    currsubset.pop_back(); //remove the previous integer from the current subset to "backtrack" 
    backtrack(start + 1, nums, currsubset, result); //explore the next possible step to the right of the tree

}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result; //result vector to store all subsets
    vector<int> currsubset; //current subset to store intermediate results

    backtrack(0, nums, currsubset, result); //call backtrack to generate all subsets of 'nums' and store them in the result vector

    return result; //return the result vector containing all subsets of 'nums'
}

int main() {

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = subsets(nums);

    for(int i = 0; i < res.size(); i++) {
        cout << "[ " ;   
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << "]"<< endl;
    }

    return 0;
}

