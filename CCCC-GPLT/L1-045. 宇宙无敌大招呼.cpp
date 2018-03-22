/* 
题目 ：https://www.patest.cn/contests/gplt/L1-045
据说所有程序员学习的第一个程序都是在屏幕上输出一句“Hello World”，跟这个世界打个招呼。作为天梯赛中的程序员，你写的程序得高级一点，要能跟任意指定的星球打招呼。

输入格式：

输入在第一行给出一个星球的名字S，是一个由不超过7个英文字母组成的单词，以回车结束。

输出格式：

在一行中输出“Hello S”，跟输入的S星球打个招呼。

输入样例：
Mars
输出样例：
Hello Mars
 */
#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	cout << "Hello " << s;
	return 0;
} 
