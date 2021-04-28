#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("15%d\n", 0xABCDEF);
//	return 0;
//}

//printf 可以用%md 格式输出控制串输出域宽为十进制的整数。
//
//int main()
//{
//	int x, c, sh, y;
//	scanf("%d %d %d %d\n",&x,&c,&sh,&y);
//	printf("The each subject score of No. %d is %d, %d, %d.\n", x, c, sh, y);
//	return 0;
//}
//int main()
//{
//	int number = 0;
//	float score_c = 0.0;
//	float score_math=0.0;
//	float score_eng=0.0;
//	scanf("%d;%f,%f,%f",&number,&score_c,&score_math,&score_eng);
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n",number,score_c,score_math,score_eng);
//	return 0;
//}
int main()
{
	int number = 0;
	float score_c = 0.0;
	float score_math = 0.0;
	float score_eng = 0.0;
	scanf("%d;%f,%f,%f", &number, &score_c, &score_math, &score_eng);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", \
		number, score_c, score_math, score_eng);
	return 0;
}