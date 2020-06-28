//#include <stdio.h>
//
///*
//	避免顺序读写使用同一个文件指针
//*/
//int main()
//{
//
//	// 打开 -> 写 - 关闭
//	FILE* fp = fopen("E:/it/c/cexample/f.txt", "w");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	fputs("hello world", fp);
//	fclose(fp);
//	
//	// 打开 -> 读 -> 关闭
//	FILE* fp1 = fopen("E:/it/c/cexample/f.txt", "r");
//	if (!fp1) {
//		perror("fopen");
//		return 0;
//	}
//
//	char buffer[20];
//	fgets(buffer, sizeof(buffer), fp1);
//	printf("%s", buffer);
//	fclose(fp1);
//
//	return 0;
//}