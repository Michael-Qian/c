//#include <stdio.h>
//#include <string.h>
//
///*
//	将一个文件的内容读出来并写入另一个文件中
//*/
//int main()
//{
//	// 打开两个文件指针
//	FILE* fp1,*fp2;
//
//	fp1 = fopen("E:/it/c/cexample/a.txt", "r");
//	fp2 = fopen("E:/it/c/cexample/b.txt", "w");
//	
//	if (fp1 == NULL || fp2 == NULL) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 一边读，一边写
//	char c=0;
//	while (1) {
//		// 读
//		c = fgetc(fp1);
//		if (c == EOF) {
//			break;
//		}
//
//		// 写
//		fputc(c, fp2);
//	}
//
//	// 关闭文件
//	fclose(fp1);
//	fclose(fp2);
//	return 0;
//
//}