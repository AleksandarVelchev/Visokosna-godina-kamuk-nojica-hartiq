#include<iostream>
using namespace std;
int main() {
	int godina;
	cout << "Vuvedete godina" << endl;
	cin >> godina;
	if(godina % 400 == 0){
        cout << "Visokosna godina" << endl;
	}else if(godina % 100 == 0){
        cout << "Ne e visokosna" << endl;
	}else if(godina % 4 == 0){
        cout << "Visokosna godina" << endl;
	}else{
        cout << "Ne e visokosna" <<endl;
	}

	return 0;
}
