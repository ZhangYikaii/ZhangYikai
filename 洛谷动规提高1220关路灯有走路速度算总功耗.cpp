#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<vector>
#include<queue>
#include<cmath>
#include<stack>
#include<set>
#include<map>
#define INF 0xfffffff
#define mod 1000000007
#define CLR(a,b,Size) memset((a),(b),sizeof((a[0]))*(Size+1))
#define CPY(a,b) memcpy ((a), (b), sizeof((a)))
using namespace std;
typedef long long ll;

#define in(x) x=read()
#define MAXN 2010

inline int read() {
	int X = 0, w = 1;
	char ch = getchar();
	while (ch<'0' || ch>'9') { if (ch == '-') w = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') X = (X << 3) + (X << 1) + ch - '0', ch = getchar();
	return X*w;
}

int n, c, dp[110][60];
bool isHaveLight[60] = { false };

int main() {
	in(n);
	in(c);

	for (int i = 1; i <= n; ++i) {

	}

	return 0;
}

/*
题目描述
某一村庄在一条路线上安装了n盏路灯，每盏灯的功率有大有小（即同一段时间内消耗的电量有多有少）。老张就住在这条路中间某一路灯旁，他有一项工作就是每天早上天亮时一盏一盏地关掉这些路灯。

为了给村里节省电费，老张记录下了每盏路灯的位置和功率，他每次关灯时也都是尽快地去关，但是老张不知道怎样去关灯才能够最节省电。他每天都是在天亮时首先关掉自己所处位置的路灯，然后可以向左也可以向右去关灯。开始他以为先算一下左边路灯的总功率再算一下右边路灯的总功率，然后选择先关掉功率大的一边，再回过头来关掉另一边的路灯，而事实并非如此，因为在关的过程中适当地调头有可能会更省一些。

现在已知老张走的速度为1m/s，每个路灯的位置（是一个整数，即距路线起点的距离，单位：m）、功率（W），老张关灯所用的时间很短而可以忽略不计。

请你为老张编一程序来安排关灯的顺序，使从老张开始关灯时刻算起所有灯消耗电最少（灯关掉后便不再消耗电了）。

输入输出格式
输入格式：
文件第一行是两个数字n(1<=n<=50，表示路灯的总数)和c(1<＝c<=n老张所处位置的路灯号)；

接下来n行，每行两个数据，表示第1盏到第n盏路灯的位置和功率。数据保证路灯位置单调递增。

输出格式：
一个数据，即最少的功耗(单位：J，1J＝1W·s)。

输入输出样例
输入样例#1：
5 3
2 10
3 20
5 20
6 30
8 10
输出样例#1：
270

*/