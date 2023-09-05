#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ns="";
    int count = 0;
    map<string,string> brackets = {};
    // stack<string>
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '['){
            ns += s[i];
        }else{
            // if(ns[ns.size()-1] == '(' && s[i] == ')'){

            // }
            bool op = true;
            for (int j = ns.size()-1; j > 0; j--)
            {
                if((ns[j]=='(' && s[i] == ')') || (ns[j]=='[' && s[i] == ']')){
                    ns.pop_back();
                }else{
                    op = false;
                    ns="";
                }
            }
            if(op) count++;
        }
        cout<<"ns = "<<ns<<endl;
    }

    cout<<"count = "<<count;
    
}