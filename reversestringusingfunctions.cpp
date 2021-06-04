#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string ModifyString(string &s)
{
    //string res(s.rbegin(),s.rend());
    //return res;
    reverse(s.begin(),s.end());
    return s;
}

int main() 
{
    string s="hello";
    cout<<ModifyString(s); 
	return 0;
}
