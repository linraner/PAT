/* 
题目 ： https://www.patest.cn/contests/gplt/L1-044
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：

图片 ： http://nos.patest.cn/of_oo9zfrbo2e3.jpg
现要求你编写一个稳赢不输的程序，根据对方的出招，给出对应的赢招。但是！为了不让对方输得太惨，你需要每隔K次就让一个平局。

输入格式：

输入首先在第一行给出正整数K（<=10），即平局间隔的次数。随后每行给出对方的一次出招：“ChuiZi”代表“锤子”、“JianDao”代表“剪刀”、“Bu”代表“布”。“End”代表输入结束，这一行不要作为出招处理。

输出格式：

对每一个输入的出招，按要求输出稳赢或平局的招式。每招占一行。

输入样例：
2
ChuiZi
JianDao
Bu
JianDao
Bu
ChuiZi
ChuiZi
End
输出样例：
Bu
ChuiZi
Bu
ChuiZi
JianDao
ChuiZi
Bu
 */
#include <iostream>
#include <fstream>
using namespace std;
string fuck(string s) {
	if (s == "ChuiZi") {
		return "Bu";
	} else if (s == "JianDao") {
		return "ChuiZi";
	} else if (s == "Bu") {
		return "JianDao";
	}
}
int main() {
//	ifstream cin("INPUT.txt");
	int k, cnt = 0;
	cin >> k;
	string s;
	while (cin >> s) {
		if (s == "End")
			break;
		cnt++;
		if (cnt%(k+1) == 0) {
			cout << s << endl;
		} else {
			cout << fuck(s) << endl;
		}
		
	}
	return 0;
} 
