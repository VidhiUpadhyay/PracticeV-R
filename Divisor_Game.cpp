class Solution {
public:
    bool divisorGame(int N) {
        bool ans;
        int counter=0;
        int x=1, New=2;
        while(x>0 && x<N &&New>1){
            if(N%x==0){
                New=N-x;
               counter++; 
                N=New;
            }           
            
                }
         if(counter%2==0){
                return false;
            }
            else return true;
    }
};
