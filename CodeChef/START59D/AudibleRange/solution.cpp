#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x;
    cin>>t;
    for (int i=0; i<t ; i++) {
        cin>>x;
        if (x<=45000 && x>=67) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}

