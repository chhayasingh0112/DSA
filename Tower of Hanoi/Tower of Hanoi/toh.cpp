#include <stdio.h>
//void TOH(int n, int A, int B, int C)
//{
//	if (n > 0)
//	{
//		TOH(n - 1, A, C, B);
//		printf("(%d,%d)\n", A, C);
//		TOH(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	TOH(7, 1, 2, 3);
//	return 0;
//}

int f(int n)

{

	static int i = 1;

		if (n >= 5)return n;

	n = n + i;

	i++;

	return f(n);

}