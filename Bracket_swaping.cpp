#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int imbalance=0;
	int left=0,right=0,sum=0;
	for(int i=0;i<str.length();i++)
    { if(str[i]=='['){
        left++;
           if(imbalance>0){
              sum+=imbalance;
              imbalance--;
           }
       }
       else if(str[i]==']'){
           right++;
           imbalance=right-left;
           
       }
       
    }	
	cout<<"Number of Swaping bracket : "<<sum;
    return 0;
   
}
