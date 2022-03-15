#include <stdio.h>

int func(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9)
{
	printf("%d %d %d", arg1, arg3, arg5);
	return 1;
}

int main(int argc, char const *argv[])
{
	func(0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9);
	return 0;
}
