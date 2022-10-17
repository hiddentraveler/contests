#include <bits/stdc++.h>
using  std::cout,std::cin,std::endl;

int main() {
    // your code goes here
    int t,n,m;
    for (int  i = 0; i < t ; i++) {
        cin>>n>>m;
        int s[n+m];
        for (int i = 0; i < n; i++) {
            s[i]=2;
        }
        for (int i = n; i < m+n; i++) {
            s[i]=0;
        }


    }
    return 0;
}
