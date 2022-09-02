#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//1.判断素数
void Prime_Number_Judgment()
{
	int i = 0;
	int j = 0;
	int n = 0;
	printf("请输入你想要判断的数值>:");
	scanf("%d", &i);
	if (i < 2)
		printf("error!!!\n");
	else
	{
		for (j = 2; j < sqrt(i); j++)
		{
			n = i % j;
			if (n == 0)
			{
				printf("不是素数\n");
				break;
			}
		}
	}
	printf("是素数\n");
}

//功能实现：
void Function_Run(int output)
{
	switch (output)
	{
		case 1:
		Prime_Number_Judgment();
		break;
	case 2:
		printf("创建一个数组，寻找其中元素的位置\n");
		break;
	case 3:
		printf("扫雷游戏\n");
		break;
	case 4:
		printf("三子棋游戏\n");
		break;
	case 5:
		printf("猜数字游戏\n");
		break;
	case 6:
		printf("汉诺塔功能\n");
		break;
	}
}

//功能选择：
int Function_Choose(int input)
{
	int output = 0;
	do
	{
		printf("你需要什么功能，请输入对应的序号>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("你的选择是>: 1. 判断一个数是否为素数\n");
			output = 1;
			break;
		case 2:
			printf("你的选择是>: 2. 创建一个数组，寻找其中元素的位置\n");
			output = 2;
			break;
		case 3:
			printf("你的选择是>: 3. 扫雷游戏\n");
			output = 3;
			break;
		case 4:
			printf("你的选择是>: 4. 三子棋游戏\n");
			output = 4;
			break;
		case 5:
			printf("你的选择是>: 5. 猜数字游戏\n");
			output = 5;
			break;
		case 6:
			printf("你的选择是>: 6. 汉诺塔功能\n");
			output = 6;
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input < 1 && input >6);
return output;
}


//功能清单：
void Function_List()
{
	printf("可选功能清单如下：\n");
	printf("*** 1. 判断一个数是否为素数                    ***\n");
	printf("*** 2. 创建一个数组，寻找其中元素的位置 ***\n");
	printf("*** 3. 扫雷游戏                                       ***\n");
	printf("*** 4. 三子棋游戏                                    ***\n");
	printf("*** 5. 猜数字游戏                                    ***\n");
	printf("*** 6. 汉诺塔功能                                   ***\n");
}

//主函数：
int main()
{
	int input = 0;
	int output = 0;
	Function_List();
	output = Function_Choose(input);
	Function_Run(output);
	return 0;
}