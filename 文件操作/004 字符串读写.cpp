//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str[] = { "床前明月光a\n","疑是地上霜b\n","举头望明月c\n","低头思故乡d" };
//
//	FILE* fp = fopen("E:/it/c/cexample/c.txt", "w");
//
//	if (fp == NULL) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 写
//	// 16 / 4 = 4 总共地址是16个字节，每个字符串地址占4个字节，得到4行
//	int n = sizeof(str) / sizeof(str[0]);
//	for (int i = 0; i < n; i++) {
//
//		fputs(str[i], fp);
//	}
//
//	// 关闭
//	fclose(fp);
//	return 0;
//}