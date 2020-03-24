#include <iostream> 
#include <bits/stdc++.h>
#include <vector> 
#include <algorithm> 
#include <string>
#include <cmath>
#include <iomanip> 
#include<climits> 
#include <utility>   
#include <set>
#include <numeric> 
#include <iterator>
#include <map> 
using namespace std; 
#define ll long long int
//typedef pair<ll,ll> p; 
int main()
{
       string s;
       cin>>s;
       //cout<<s<<endl;
       int ans=0;
        stack<char> st;
         
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')' && st.empty()==false)
            {
                if(st.top()=='(')
                st.pop();
                else
                st.push(s[i]);
            }
            else
                st.push(s[i]);
                
           //cout<<st.size()<<endl;
        }
    cout<<st.size()<<endl;
}