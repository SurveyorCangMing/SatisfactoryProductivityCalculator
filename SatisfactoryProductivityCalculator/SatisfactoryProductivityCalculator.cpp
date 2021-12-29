#include<bits/stdc++.h>
#include<Windows.h>
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
struct miner {
	//mine
	int type = -1;
	int quality = -1;
	//miner
	int level = -1;
}miners[31];
struct power {
	int type = -1;
}generators[21];
struct conveyor {
	int level = -1;
	int input = -1;
	int output = -1;
};
struct process {
	int type = -1;
}processers[121];
void show_list() {
	for (int i = 1;i <= n;i++) {
		if (buildings[i].type != 0) {
			cout << buildings[i].type << " " << buildings[i].level << " " << buildings[i].custom << " " << buildings[i].clockspeed;
		}
	}
}
void add(int n) {
	int t;
	cout << "type:\n[1] power\n[2] miner\n[3] conveyor\n[4] production\n";
	cin >> t;
	switch (t) {
		case 1: //power
			cout << "type list:\n[1]树叶\n[2]花瓣\n[3]木头\n[4]菌丝体\n[5]外星甲壳\n[6]外星器官\n[7]生物质\n[8]固态生物燃料\n";
			cout << "[9]煤炭\n[10]燃油\n[11]地热能\n[12]核能\n";
			cin >> buildings[n].type;
			break;
		case 2: //miner
			cout << "type list:\n[1]铁\n[2]铜\n[3]石灰石\n[4]硫\n[5]钦\n[6]原石英\n[7]炭\n[8]S.A.M\n[9]铝土\n[10]铀\n";
			cin >> buildings[n].type;
			buildings[n].type += 12;
			break;
		case 3: //conveyor
			buildings[n].type = 23;
			break;
		case 4: //production
			cout << "type list:\n";
			//smelter
			cout << "Smelter\n[1]铁\n[2]铜\n[3]钦\n[4]铝锭(替代配方)\n";
			//Constructor
			cout << "Constructor\n[5]铁板\n[6]铁棒\n[7]螺丝\n[8]铁锭制螺丝(替代配方)\n[9]电线\n[10]电缆\n[11]铁锭制电线(替代配方)\n";
			buildings[n].type += 23;
			break;
		default:
			cout << "wrong type.\n";
			return;
			break;
		}
	cin >> buildings[n].clockspeed;
}
int main() {
	int num = 1;
	char operation;
	while (true) {
		cout << "[+] add building\n[-] delete building\n[=] print productivity\n[s] save\n";
		cin >> operation;
		switch (operation) {
			case '+':
				add(num);
				num++;
			case '-':
				cin >> t;
				buildings[t].type = -1;
				break;
			case '=':
				show_list();
				//build_line();
				break;
			/*case 's':
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
				break;*/
			default:
				cout << "wrong command\n";
				break;
		}
		system("cls");
	}
	return 0;
}