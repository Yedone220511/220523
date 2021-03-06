#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() //算术操作符
//{
//	int a = 5 / 2; //商2余1，结果为2
//	float b = 5 / 2.0; //结果为2.5
//	int c = 5 % 2; //取模，%左右都必须为整型，结果为1
//	printf("a=%d\n", a);
//	return 0;
//}

//int main() //位移操作符
//{
//	//int a = 16;
//	//a >> 1; //右移操作符，移动的是二进制位，相当于a的值为原来的一半
//	//a << 1; //相当于a的值为原来的2倍
//	int a = -1;//负数存储为反码，32个比特位全是1
//	int b = a >> 1;//最右的1去掉，左边加上1，结果b的值还是-1
//	printf("b=%d\n", b);
//	return 0;
//}

//int main() //位操作符
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b; //按位与：想要结果为1，a与b的对应位必须都为1；
//	//int c = a | b; //按位或：想要结果为1，a或b的的对应位是1即可；
//	//int c = a ^ b; //按位异或：对应位相同为0，相异为1；
//	return 0;
//}

//int main() //不借助第三个变量，交换a和b的值
//{
//	int a = 3;
//	int b = 5;
//	//加减法实现交换（缺陷：如果a跟b的值特别大，相加的值占内存超过4个字节，会溢出，结果不准）
//	//a = a + b; a=8
//	//b = a - b; b=8-5=3
//	//a = a - b; a=8-3=5
//	// 
//	//异或操作实现交换
//	a = a ^ b;  //a=3^5
//	b = a ^ b; //b=3^5^5=3
//	a = a ^ b; //a=3^5^3=5
//	return 0;
//}

//int main() //求一个整数在二进制存储中1的个数
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//不断用2去%，缺陷是num为-1时结果不对
//	/*while (num != 0)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num / 2;
//		}
//	}*/
//
//	int i = 0;
//	for (i = 0; i < 32; i++) //用二进制最后一位跟1按位与，结果为1的话最后一位就是1，结果为0的话，最后一位就不是1
//	{
//		if ((num >> i) & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//单目操作符：
// ! 逻辑反操作：!10=0(任何为真的取反，结果为0，即假), !0=1（对0取反，结果为真，默认为1）
// int a=0;
// if(!a) //如果!a为真（即a为假，a=0），则执行
// {}
// if(a) //如果a为真（即a不为0），则执行
// {}
//

//int main()
//{
//	int a = 10;
//	int* p = &a; //取出a的地址，*p为指针变量
//	*p = 20; //*为解引用操作符，把a的值改为20
//	return 0;
//}

//int main()
//{
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof(p)、sizeof((char*))的结果是4，因为指针的大小只能是4字节(32位机器)或者8字节(64位机器)
//	//p的类型是char*
//	//sizeof(arr)、sizeof(int [10])，结果是40
//	//arr的类型是int [10]
//  
// 
//  short s = 0;
//  int a = 10;
//  printf("%d\n", sizeof(s = a + 5)); // 结果是2
//  printf("%d\n", s);                 //结果是0，sizeof内部的表达式不发生真实运算，s的值没改变
//	return 0;
//}

//int main()
//{
//	// 单目操作符~，二进制按位取反
//	//int a = 0;
//	//int b = ~a; //结果是-1
//
//	//int a = 11; //二进制为1011
//	//a = a | (1 << 2); // 1<<2二进制为0100，a值变为1111
//	//a = b & (~(1 << 2)); //a的值变回去了，结果为1011
//
//	int a = 10;
//	printf("%d\n", ++a); //先++，再打印，打印出来为11；之后a的值为11
//	printf("%d\n", ++a); //先打印再++，打印出来为10；之后a的值也是11
//	return 0;
//}

//int main() //&& || 链接多个表达式，如果前一个表达式计算出来已经能知道最后结果，后面的表达式就不用算了
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++; //由于a++为0，是假，最终结果反正都是假，那后面的表达式都不计算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d); //结果为1，2，3，4
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //由于a++为1，是真，那后面的表达式要参与计算才能确定最后结果
//	//printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d); //结果为2，3，3，4
//	return 0;
//}

//int main() //三目操作符
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b); //a跟b谁大就赋值给max
//	return 0;
//}

//int main() //逗号表达式，从左往右依次执行，最后一个表达的结果就是整个表达式的结果
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	return 0;
//}

//int main()
//{
//	char a = 3;   //00000011
//	char b = 127; //01111111
//	char c = a + b; //10000010
//	//计算前要先发生整型提升，a和b由原来的8个比特位（1个字节）提升为32个比特位，中间填充部分根据符号位，符号位是1就填充1，符号位是0就填充0
//	//计算好之后放入c里，c个类型为char，还是8个比特位
//	//打印整型格式，c还需要做整型提升，填充符号位(1),得到补码111111111111111110000010，转为原码1000000000000000011111110
//	printf("%d\n", c); //值为-126
//	return 0;
//}





//隐式类型转换：
//整型提升
//算数转换：相同类型的值才能参与运算，不同类型的要先做算数转换为同一类型
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)      //a会发生整型提升，表达式不成立
//		printf("a");
//	if (b == 0xb600)    //b会发生整型提升，表达式不成立
//		printf("b");
//	if (a == 0xb6000000) //c本来就是整型，不提升，表达式成立
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c)); //1
//	printf("%u\n", sizeof(+c)); //4，只要字符c参与运算，就会发生整型提升，结果为4个字节
//	printf("%u\n", sizeof(!c)); //1
//	return 0;
//}