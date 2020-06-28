//#include <stdio.h>
//
///*
//	复位文件流
//	指针定位到内容的首部
//*/
//int main()
//{
//
//	// 打开文件：读写
//	FILE* fp = fopen("E:/it/c/cexample/g.txt", "w+");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 写
//	fputs("hello world", fp);
//
//	// 复位文件流
//	rewind(fp);
//
//	// 读
//	char buffer[20];
//	fgets(buffer, sizeof(buffer), fp);
//	printf("%s", buffer);
//	
//	return 0;
//}