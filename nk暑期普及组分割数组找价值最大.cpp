#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define in(x) x=read()
#define For(i, a, b) for(int i = a; i < b; ++i)

inline int read() {
	int X = 0, w = 1;
	char ch = getchar();
	while (ch<'0' || ch>'9') { if (ch == '-') w = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') X = (X << 3) + (X << 1) + ch - '0', ch = getchar();
	return X * w;
}

int n;
int arr[100010];
int sum[100010];

int main() {
	int res = 0;

	in(n);
	for (int i = 1; i <= n; ++i) {
		in(arr[i]);

		res += i * arr[i];
	}

	sum[n] = arr[n];
	for (int i = n - 1; i >= 1; --i) {
		sum[i] = sum[i + 1] + arr[i];
	}

	
	int cur = res;
	for (int bef = 1; bef <= n; ++bef) {
		cur = cur - sum[bef + 1] + arr[bef] * (bef - 1);
		res = min(res, cur);
	}

	printf("%d\n", res);
	return 0;
}

/*


链接：https://ac.nowcoder.com/acm/contest/929/A
来源：牛客网

题目描述
开始对数组的切割手术！

当我们需要储存多个变量的时候，往往就会用到数组这种东西，不过仓鼠这个人觉得数组太长的话很不美观，仓鼠喜欢更短一点的数组。
对于一个长度为n的数组，我们认为它自左向右的第一个元素为a[1]，第二个元素为a[2]...第i个元素为a[i]一直到第n个元素为a[n]。即数组下标从1开始计算。
仓鼠定义一个数组的不完美度为1*a[1]+2*a[2]+3*a[3]+...+i*a[i]+...+n*a[n]。
仓鼠拥有一个长度为n的数组，但是这个数组太不美丽了。于是仓鼠决定将其从某个位置切开，切成两半分成两个数组，当然，仓鼠允许其中的一个数组为空，在这种情况下仓鼠认为它的不完美度为0。

例如现在有一个大小为5的数组a[5]={1,2,3,4,5}
如果仓鼠从4.5的中间切开，他将得到{1,2,3}和{4,5}两个新的数组，第一个的不完美度为14，第二个的不完美度也为14，不完美度之和为28。
当然，仓鼠也可以一刀切在1的左边或者5的右边，这样会得到{1,2,3,4,5}和一个空数组{}，一个不完美度为55，另一个为0，不完美度之和为55。
注意，仓鼠的操作只能从某个位置切开使数组分成两个新的数组，他不能交换数组中的元素。
现在它想知道，任意选择k，这两个的不完美度之和最小是多少。
输入描述:
第一行输入一个整数n。

第二行输入n个整数a[i]。
输出描述:
请选择一个合适的k，需保证k\in[1,n]k∈[1,n]且当k为n时可视为不进行切割，使得不完美度最小，输出这个最小的不完美度。
示例1
输入
复制
5
1 2 3 4 5
输出
复制
28
说明
当从4、5中间切开时，不完美度只和为1*1+2*2+3*3+4*1+5*2=28，是最小的。


*/