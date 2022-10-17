#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for (int i=0 ; i<t ; i++) {
        cin>>x>>y>>z;
        if (x>y ) {
            cout<<"Setter"<<endl;
        } else if (y>z ) {
            cout<<"Tester"<<endl;
        } else {
            cout<<"Editorialist"<<endl;
        }
    }
	return 0;
}
