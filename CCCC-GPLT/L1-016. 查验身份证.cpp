/* 
题目 ： https://www.patest.cn/contests/gplt/L1-016

一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：

首先对前17位数字加权求和,权重分配为：{7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}；然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：

Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2

现在给定一些身份证号码,请你验证校验码的有效性,并输出有问题的号码。

输入格式：

输入第一行给出正整数N（<= 100）是输入的身份证号码的个数。随后N行,每行给出1个18位身份证号码。

输出格式：

按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理,只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常,则输出“All passed”。

输入样例1：
4
320124198808240056
12010X198901011234
110108196711301866
37070419881216001X
输出样例1：
12010X198901011234
110108196711301866
37070419881216001X
输入样例2：
2
320124198808240056
110108196711301862
输出样例2：
All passed
 */
//未完全通过
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
//	ifstream cin("INPUT.txt");
	int n;
	cin >> n;
	string s;
	int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  	char M[] = {
	'1',
	'0',
	'X',
	'9',
	'8',
	'7',
	'6',
	'5',
	'4',
	'3',
	'2'};
	int flag = 1;
	while (n--) {
		cin >> s;
		int len = s.length();
		int sum = 0, temp = 0;
		stringstream ss;
		for (int i = 0; i < len - 1; i++) {
			if (s[i] <'0' || s[i] >'9')
				flag = 0;
			ss << s[i];
			ss >> temp;
			ss.clear();
			sum = sum + weight[i]*temp;
		}
		sum = sum % 11;
		if (M[sum] != s[17]) 
			flag = 0;
		if (flag == 0)
			cout << s << endl; 
	}
	if (flag == 1)
		cout << "All passed" << endl;
	return 0;
} 
