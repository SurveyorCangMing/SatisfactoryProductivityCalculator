#include<bits/stdc++.h>
#include<Windows.h>

#include"operation.cpp"

using namespace std;

int sum, n, t;
struct Building {
	int type = -1;
	int level = -1;
	int custom = -1;
	int clockspeed = -1;
	int input = -1;
	int output = -1;
	int line = -1;
}buildings[501];
void show_list() {
	for (int i = 1;i <= n;i++) {
		if (buildings[i].type != 0) {
			cout << buildings[i].type << " " << buildings[i].level << " " << buildings[i].custom << " " << buildings[i].clockspeed;
		}
	}
}
int main() {
	int num = 1;
	char operation;
	while (true) {
		cout << "[+] add building\n[-] delete building\n[=] print productivity\n[s] save\n";
		cin >> operation;

		if (operation == '+') {
			int* M = add(/*num*/);
			buildings[num].type = M[1];
			buildings[num].level = M[2];
			buildings[num].clockspeed = M[3];
			num++;
			//
			cout << buildings[num].type << buildings[num].level << buildings[num].clockspeed;
			//
		}
		else if (operation == '-') {
			cin >> t;
			buildings[t].type = -1;
			break;
		}
		else {
			cout << "wrong command\n";
		}

		system("cls");
	}
	return 0;
}