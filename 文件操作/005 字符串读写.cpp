//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	// 打开
//	const char* path = "E:/it/c/cexample/c.txt";
//	FILE* fp = fopen(path, "r");
//
//	if (fp == NULL) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 读取
//	//while (1) {
//	//	char buffer[125];
//	//	char* n;
//	//	n = fgets(buffer, sizeof(buffer), fp);
//
//	//	if (n == NULL) {
//	//		break;
//	//	}
//
//	//	printf("%s", buffer);
//	//}
//
//	// 读取-优化
//	// 读取时是连续的
//	char buffer[125];
//	while (fgets(buffer, sizeof(buffer), fp)) {
//
//		printf("%s", buffer);
//	}
//
//	// 关闭
//	fclose(fp);
//
//	return 0;
//}