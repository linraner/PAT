/* 
题目 ： https://www.patest.cn/contests/gplt/L1-007
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：

输入在一行中给出一个整数，如： 1234 。

提示：整数包括负数、零和正数。

输出格式：

在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。

输入样例：
-600
输出样例：
fu liu ling ling

 */
#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main() {
	//ifstream cin("INPUT.txt");
	/*
	map<int, char> m;
	map<char, int> mp;
	for (int i = 0; i < 10; i++) {
		//m['0'+i] = i;
		mp[i] = i+'0';
		cout << m[i] << endl;
	}
	*/
	string s;
	cin >> s;
	string mp[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int len = s.length();
	int flag = s[0] == '-' ? 1 : 0;
	if (flag == 1) cout << "fu";
	for (int i = flag; i < len; i++) {
		if (i == 0) {
			cout << mp[s[i] - '0'];
            continue;
		} 
		cout << " " << mp[s[i] - '0'];
	}
	return 0;
} 