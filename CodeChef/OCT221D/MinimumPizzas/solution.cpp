#include <bits/stdc++.h>
#include <cmath>
using  std::cout,std::cin,std::endl;

int main() {
    // your code goes here
    float t,n,x;
    cin>>t;
    for (int  i = 0; i < t; i++) {
        cin>>n>>x;
        std::cout<< std::ceil((n*x)/4) <<std::endl;
    }
    return 0;
}
