/* 
题目 ： https://www.patest.cn/contests/gplt/L1-022
给定N个正整数，请统计奇数和偶数各有多少个？

输入格式：

输入第一行给出一个正整N（<= 1000）；第2行给出N个正整数，以空格分隔。

输出格式：

在一行中先后输出奇数的个数、偶数的个数。中间以1个空格分隔。

输入样例：
9
88 74 101 26 15 0 34 22 77
输出样例：
3 6
 */
#include <iostream>
using namespace std;
int main() {
   	int n, a;
   	cin >> n;
   	int ji = 0, ou = 0;
   	while (n--) {
   		cin >> a;
   		if (a%2 == 0)
   			ou++;
   		else 
   			ji++;
   	}
   	cout << ji << " " << ou;
    return 0;
}