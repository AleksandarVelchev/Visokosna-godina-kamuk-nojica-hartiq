#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {


	srand(time(0));

	int PC = rand() % 3;

	int guess;

	cout << "scissors (0), rock (1), paper (2): " << endl;

	cout << "Enter a number between 0 and 2"<<endl;

	cin >> guess;

	if(guess == 0 && PC == 0){
        cout << "The computer is scissors, you are scissors. It's a draw. Try again" << endl;
	}
	if(guess == 0 && PC == 1){
        cout << "The computer is rock, you are scissors. You lost. Try again" << endl;
	}if(guess == 0 && PC == 2){
        cout << "The computer is paper, you are scissors. Congratulations you won." << endl;
	}if(guess== 1 && PC == 0){
        cout << "The computer is scissors, you are rock. Congratulations you won." << endl;
	}
	if(guess == 1 && PC == 1){
        cout << "The computer is rock, you are rock. It's a draw. Try again" << endl;
	}if(guess == 1 && PC == 2){
        cout << "The computer is paper, you are rock. You lost. Try again" << endl;
	}if(guess == 2 && PC == 0){
        cout << "The computer is scissors, you are paper. You lost. Try again" << endl;
	}
	if(guess == 2 && PC == 1){
        cout << "The computer is rock, you are paper. Congratulations you won" << endl;
	}if(guess == 2 && PC == 2){
        cout << "The computer is paper, you are paper. It's a draw. Try again" << endl;
	}

	return 0;
}
