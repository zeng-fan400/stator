#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()//code 1
//{
// double i = 0;
// double j = 0;
// double a = 1.0;
// double b = 1.0;
// double c = 1.0;
// double d = 0.5;
// double n = 0;
// /*for (i = 3; i <= 100; i = i + 2)
// {
//  a = a * i + b * 1;
//  b = b * i;
// }*/
// for (i = 3; i <= 100; i = i + 2)
// {
//  b = 1.0 / i;
//  a = a + b;
// }
// for (j = 4; j <= 100; j = j + 2)
// {
//  c = 1.0 / j;
//  d = d + c;
// }
// n = a - d;
// printf("reslut=%0.2f", n); 
// return 0;
//}

//int main()//code 2 optimize1- less parameters
//{
// double i = 0;
// double j = 0;
// double a = 0;
// double b = 0;
// for (i = 1; i <= 100; i = i + 2)
// {
//  a = a + 1.0 / i;
// }
// for (j = 2; j <= 100; j=j+2)
// {
//  b = b + 1.0 / j;
// }
// printf("result = %f\n", a - b);
// return 0;
//}

//int main()//code 3 optimize2 - one loop
//{
// double i = 0;
// double a = 0;
// int sign = 1;
// for (i = 1; i <= 100; i++)
// {
//  a = a + sign * 1.0 / i;
//  sign = -sign;
// }
// printf("result =%f \n", a);
// return 0;
//}

//int main()//code 3 - while{...}
//{
// double i = 1.0;
// double a = 0;
// int sign = 1;
// while (i <= 100)
// {
//  a = a + sign * 1.0 / i;
//  i++;
//  sign = -sign;
// }
// printf("result = %f\n", a);
// return 0;
//}

double Round_Robin_Algorithm(int n)
{
	double i = 0;
	double j = 0;
	int sign = 1;
	for (j = 1; j <= n; j++)
	{
		i = i + sign * 1.0 / j;
		sign = -sign;
	}
	return i;
}
int main()//code 5 - function()
{
	int n = 0;
	double i = 0;
	printf("Please input the up limit value>:");
	scanf("%d", &n);
	i = Round_Robin_Algorithm(n);
	printf("reslut = %f\n", i);
	return 0;
}