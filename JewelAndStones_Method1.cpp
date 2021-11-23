class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> isjewel('z',false);
        int count = 0;
        
        for(char& j : jewels)
            isjewel[j] = true;
        
        for(char& s : stones)
            count += isjewel[s];
        
        return count;
    }
};
