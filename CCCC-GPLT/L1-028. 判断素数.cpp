/* 
题目 ： https://www.patest.cn/contests/gplt/L1-028
本题的目标很简单，就是判断一个给定的正整数是否素数。

输入格式：

输入在第一行给出一个正整数N（<=10），随后N行，每行给出一个小于231的需要判断的正整数。

输出格式：

对每个需要判断的正整数，如果它是素数，则在一行中输出“Yes”，否则输出“No”。

输入样例：
2
11
111
输出样例：
Yes
No
 */
#include <iostream>
#include <cmath>
using namespace std;
bool fuck (int n) {
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0)
			return false;
	}
	return true;
}
int main() {
   	int n;
   	cin >> n;
   	int a;
   	while (n--) {
   		cin >> a;
   		if (fuck(a))
   			cout << "Yes" << endl;
   		else 
   			cout << "No" << endl;
   	}
    return 0;
}