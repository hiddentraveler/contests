#include <bits/stdc++.h>
using  std::cout,std::cin,std::endl;

int main() {
    // your code goes here
    float t,a,b,x,y;
    float as,bs;
    cin>>t;
    for (int i = 0; i < t; i++) {
        cin>>a>>b>>x>>y;
        as = a/x;
        bs = b/y;
        if (as<bs) {
            std::cout<< "Chef" <<std::endl;
        } else if (bs<as) {
            std::cout<< "Chefina" <<std::endl;
        } else {
            std::cout<< "Both" <<std::endl;
        }
    }
    return 0;
}
