
#include <iostream>
#include <array>
#include<vector>
using namespace std;

vector<int> sorting(vector<int> x)
{
    for(int i=0;i<x.size();i++)
    {  
        int a=x[i];
       
        for(int j=i+1; j<x.size(); j++)
        {
            int b;
            if (a>x[j])
            
                {
                a=x[j];
                x[j] = x[i];
                }
            
            
        }
        x[i]=a;
       cout<<x[i]<<"\n";
        
    }
     return x;
}
int main()
{  
vector<int> arr ={2,3,4,1,23,4};
    vector<int>x = sorting(arr);
    return 0;
}
