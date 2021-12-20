#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;
int sum, n, t;
struct Buildings {
	int type = -1;
	int level = -1;
	int custom = -1;
	int clockspeed = -1;
	int input = -1;
	int output = -1;
}building[1001];
struct miner {
	//mine
	int type = -1;
	int quality = -1;
	//miner
	int level = -1;
	int clockspeed = -1;
}miners[31];
struct power {
	int type = -1;
	int clockspeed = -1;
}generators[21];
struct conveyor {
	int level = -1;
	int input = -1;
	int output = -1;
};
struct process {
	int type = -1;
	int clockspeed = -1;
}processers[121];
void show_list() {
	for (int i = 1;i <= n;i++) {
		if (building[i].type != 0) {
			cout << building[i].type << " " << building[i].level << " " << building[i].custom << " " << building[i].clockspeed;
		}
	}
}
int main() {
	cout << "Import data......\npress 0 to skip.\n";
	cin >> sum;
	n = sum + 1;
	for (int i = 1;i <= sum;i++)  cin >> building[i].type >> building[i].level >> building[i].custom >> building[i].clockspeed;
	char operation;
	while (true) {
		cout << "[+] add building\n[-] delete building\n[=] print productivity\n[s] save\n";
		cin >> operation;
		switch (operation) {
			case '+':
				cout << "type list:\n[1] power\n[2] miner\n[3] conveyor\n[4] production\n";
				cin >> building[n].type;
				cout << "level:\n";
				cin >> building[n].level >> building[n].custom >> building[n].clockspeed;
				switch (building[n].type) {
					case 1: //power

						break;
					case 2: //miner

						break;
					case 3: //conveyor

						break;
					case 4: //production

						break;
					default:
						break;
				}
				n++;
				break;
			case '-':
				cin >> t;
				building[t].type = 0;
				break;
			case '=':
				show_list();
				//build_line();
				break;
			case 's':
				t = 0;
				cout << "Please copy all the contents and save.\n";
				system("pause");
				system("cls");
				for (int i = 1;i <= n;i++) if (building[i].type != 0) t++;
				cout << t << endl;
				for (int i = 1;i <= n;i++) {
					if (building[i].type != 0) {
						cout << building[i].type << " " << building[i].level << " " << building[i].custom << " " << building[i].clockspeed;
					}
				}
				break;
			default:
				cout << "wrong command\n";
				break;
		}
	}
	return 0;
}