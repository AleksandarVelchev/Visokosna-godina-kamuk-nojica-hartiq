#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	// ���������� �����
	srand(time(0));

	// ��������� � ����� �� �������, �������� � ��������
	string psr[3] = {"nojica", "kamuk", "hartiq"};

	// ���������� �� ���������� ����� �� ��������
	int PC = rand() % 3;

	int you;

	cout << "nojica (0), kamuk (1), hartiq (2): " << endl;

	// ����������� ������� ���������
	cout << "Vuvedete chislo ot 0 do 2."<<endl;

    cin >> you;

    //������<�����<������

	if ((PC + 1) % 3 == you) {
		cout << "PC - " << psr[PC] << ". You - " << psr[you] << ". Pechelish ";
	}
	else if ((you + 1) % 3 == PC) {
		cout << "PC -  " << psr[PC] << ". You - " << psr[you] << ". Gubish";
	} else {
		cout << "PC -  " << psr[PC] << ". You - " << psr[you] << ". Ravni";
	}

	return 0;
}
