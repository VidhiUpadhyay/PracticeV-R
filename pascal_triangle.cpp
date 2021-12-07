class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        
        if(numRows==0)
            return ans;
        
         ans.push_back({1});
        for (int row=1; row<numRows; row++)
        {
            vector<int> currRow;
            vector<int> prevRow=ans[row-1];
            currRow.push_back(1);
            for(int j=1; j<row; j++)
                currRow.push_back(prevRow[j-1]+prevRow[j]);
            
            currRow.push_back(1);
            ans.push_back(currRow);
        }
        
        return ans;
    }
};
