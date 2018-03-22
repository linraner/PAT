/* 
题目 ： https://www.patest.cn/contests/gplt/L1-023
给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按“GPLTGPLT....”这样的顺序输出，并忽略其它字符。当然，四种字符（不区分大小写）的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按GPLT的顺序打印，直到所有字符都被输出。

输入格式：

输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。

输出格式：

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：
pcTclnGloRgLrtLhgljkLhGFauPewSKgt
输出样例：
GPLTGPLTGLTGLGLL
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
   	string s;
   	cin >> s;
   	int a[4] = {0};
   	int len = s.length();
   	for (int i = 0; i < len; i++) {
   		char c = toupper(s[i]);
   		if (c == 'G') {
   			a[0]++;
   		} else if (c == 'P') {
   			a[1]++;
   		} else if (c == 'L') {
   			a[2]++;
   		} else if (c == 'T') {
   			a[3]++;
   		} 
   	}
   	while (a[0] != 0 || a[1] != 0 || a[2] != 0 || a[3] != 0) {
   		for (int i = 0; i < 4; i++) {
   			if (a[i] != 0) {
   				a[i]--;
   				if(i == 0)
					cout << "G";
				else if(i == 1)
					cout << "P";
				else if(i == 2)
					cout << "L";
				else
					cout << "T";
   			}
   		}
   	}
    return 0;
}