#include<iostream>
using namespace std;

int* add() {
	int* P = new int[4];
	//type level clockspeed
	int o;
	cout << "type:\n[1] power\n[2] miner\n[3] conveyor\n[4] production\n";
	cin >> o;
	switch (o) {
	case 1: //power
		cout << "type list:\n[1]树叶\n[2]花瓣\n[3]木头\n[4]菌丝体\n[5]外星甲壳\n[6]外星器官\n[7]生物质\n[8]固态生物燃料\n";
		cout << "[9]煤炭\n[10]燃油\n[11]地热能\n[12]核能\n";
		cin >> P[1];
		break;
	case 2: //miner
		cout << "type list:\n[1]铁\n[2]铜\n[3]石灰石\n[4]硫\n[5]钦\n[6]原石英\n[7]炭\n[8]S.A.M\n[9]铝土\n[10]铀\n";
		cin >> P[1];
		P[1] += 12;
		break;
	case 3: //conveyor
		P[1] = 23;
		break;
	case 4: //production
		cout << "type list:\n";
		//smelter
		cout << "Smelter\n[1]铁\n[2]铜\n[3]钦\n[4]铝锭(替代配方)\n";
		//Constructor
		cout << "Constructor\n[5]铁板\n[6]铁棒\n[7]螺丝\n[8]铁锭制螺丝(替代配方)\n[9]电线\n[10]电缆\n[11]铁锭制电线(替代配方)\n";
		cout << "";
		cin >> P[1];
		P[1] += 23;
		break;
	default:
		cout << "wrong type.\n";
		break;
	}
	cout << "level\n";
	cin >> P[2];
	cout << "clockspeed\n";
	cin >> P[3];
	return P;
}
