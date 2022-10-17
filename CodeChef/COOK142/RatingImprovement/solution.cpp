#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if (x<=y && y<=x+200) {
        cout<<"YES"<<endl;
        } else {
        cout<<"NO"<<endl;
        }
    } 
	return 0;
}

