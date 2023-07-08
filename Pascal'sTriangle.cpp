/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown (when numRows=5):
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int ele;
        vector<int> previous;
        for (int i=1; i<=numRows; i++){
            vector<int> temp;
            for (int j=0; j<i; j++){
                if (j==0)
                    ele=1;
                else if (j==i-1)
                    ele=1;
                else
                    ele= previous[j-1] + previous[j];
                
                temp.push_back(ele);
            }
            previous=temp;
            ans.push_back(temp);
        }
        return ans;
    }
};
