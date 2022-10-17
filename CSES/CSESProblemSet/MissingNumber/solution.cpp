#include <bits/stdc++.h>
using  std::cout,std::cin,std::endl;

int main() {
    // your code goes here
    long long n;
    cin>>n;
    long long sum {0};
    long long temp;
    for (long long i = 1; i < n; i++) {
        cin>>temp;
        sum = sum + temp;
    }
    cout<< n*(n+1)/2 - sum;
    return 0;
}
