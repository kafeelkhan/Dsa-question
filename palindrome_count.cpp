#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s)
{
    int l = s.length();
    int j;
     
    for(int i = 0, j = l - 1; i <= j; i++, j--)
    {
        if(s[i] != s[j])
            return false;
    }
    return true;
}



int main()
{
    string str;
    cin>>str;
    int count=0;
    int flag=0;
    while(str.length()>0){
        
        if(ispalindrom(str)){
            flag=1;
            break;
        }
        else
        {   count++;
            str.erase(str.begin()+str.length()-1);
        }
    }
    
   cout<<count;

    return 0;
}