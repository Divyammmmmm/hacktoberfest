
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	    string s="gjhksjklsjhxbhj";
unordered_map<char,int> mp;

for(int i=0;i<s.size();i++)
mp[s[i]]++;

for(auto i:mp){

cout<<i.first<<"  "<<i.second<<endl;

}

int mx=0;
for(auto i:mp){
if(mx<i.second){
    mx=i.second;
}

}
cout<<mx;



    
	return 0;

}
