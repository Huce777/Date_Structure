#include<stdio.h>

/*使用迭代模拟递归*/
int forLoopRecur(int n)
{
	int stack[1000]; //借助一个大数组来模拟栈
	int top = -1; //栈顶索引
	int res = 0; 
	//递：递归调用
	for (int i=n;i>0;i--)
	{
		//通过 “入栈操作 ”模拟 ”递 “
		stack[1 + top++] = i; 
	 } 
	//归：返回结果
	while (top >= 0)
	{
		//通过“出栈操作 ”模拟“归 ”
		res += stack[top--]; 
	 } 
	 // res = 1+2+3+...+n
	 return res;
}

int main()
{
	int n=0;
	printf("The sum of numbers from 1 to %d is : %d\n",n,forLoopRecur(n));
	return 0;
}