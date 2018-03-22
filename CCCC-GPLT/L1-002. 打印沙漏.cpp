/* 
题目 ： https://www.patest.cn/contests/gplt/L1-002
本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印

*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

输入格式：

输入在一行给出1个正整数N（<=1000）和一个符号，中间以空格分隔。

输出格式：

首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

输入样例：
19 *
输出样例：
*****
 ***
  *
 ***
*****
2
 */
#include <iostream>
//sum = n[2a1+(n-1)d]/2 , d =2, n*n 
using namespace std;
int main() {
	int n;
	cin >> n;
	char a = '*';
	cin >> a;
	int row = -2;//单行长度 
	for (int i = 1; i < n/2; i++) {
		row++;
		if (2*i*i-1 > n)
			break;
	}

	for (int i = row; i >= 1; i--) {
		 for (int k = row - i; k >= 1; k--) {
            cout << " ";
         }
		for (int j = i * 2 + 1; j >= 1; j--) {
            cout << a;
        }
		cout << endl;
	}
	for (int i = row; i >= 1; i--)
		cout << " ";
	cout << a << endl;
	 for (int i = 1; i <= row; i++) {
        for (int k = row - i; k >= 1; k--) {
            cout << " ";
        }
        for (int j = i * 2 + 1; j >= 1; j--) {
            cout << a;
        }
        cout << endl;
    }
    cout << n - (2*(row+1)*(row+1)-1);
	return 0;
}
