//#include <iostream>
//
///*
//	向一个文件按字节写入内容
//*/
//int main()
//{
//	// 打开文件
//	char buffer[128];
//	FILE* fp = fopen("E:/it/c/cexample/b.txt", "w");
//	if (fp == NULL) {
//		perror("file open error!");
//		return 0;	
//	}
//
//	// 输入字符串
//	printf("请输入字符串：");
//	fgets(buffer, sizeof(buffer), stdin);
//	printf("strlen = %d", strlen(buffer)); // "hello world"=12 11字符+1换行符
//	//buffer[strlen(buffer) - 1] = 0;	// 去除换行
//
//	// 写入文件
//	int i = 0;
//	while (buffer[i] != 0x0A) {	// 不等于换行符
//		fputc(buffer[i], fp);
//		i++;
//	}
//
//	// 关闭文件
//	fclose(fp);
//	return 0;
//}
