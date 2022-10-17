#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	char c;
	cin>>t;
	for (int i = 0; i < t ; i++) {
	    cin>>c;
	    if(c=='b'|| c=='B'){
	        std::cout << "BattleShip" << std::endl;
	    } else if(c=='c'|| c=='C'){
	        std::cout << "Cruiser" << std::endl;
	    }else if(c=='d'|| c=='D'){
	        std::cout << "Destroyer" << std::endl;
	    }else if(c=='f'|| c=='F'){
	        std::cout << "Frigate" << std::endl;
	    }
	}
	return 0;
}

