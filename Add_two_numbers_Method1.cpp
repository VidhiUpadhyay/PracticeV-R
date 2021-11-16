
#include<iostream>
#include<string>
using namespace std;

int add(int a, int b = 0)
{
    return a+b;
}

int main()
{
	string a;
	cout << "Input the numbers\n";
	getline(cin,a) ;
	cout<<a;
	//cout<<a;
	int c,d;
	int count;
	string temp =" ";
	count=a.find(temp);
	
    c=(count<1)?0:stoi(a.substr(0,count));
    d=(count==a.size()-1)?0:stoi(a.substr(count+1,a.size()));
    cout<<"\n"<<add(c,d);
	return 0;
}
