class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
         unordered_map<char,int> count_stones;
        
        for(char c :stones)
        {
            count_stones.insert(pair(c,count_stones[c]++));
            //cout<<c<<" "<<count_stones[c]<<endl;
        }
        
        for (char x: jewels)
        {
            if (count_stones.count(x))
                count+=count_stones[x];
            
        }
       return count; 
    }

};
