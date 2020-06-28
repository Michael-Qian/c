//#include <iostream>
//
///*
//	从一个文件中按字节读取内容
//*/
//int main() 
//{	
//	// 缓冲区
//	char buffer[256]="";
//
//	// 打开文件
//	FILE* fp = NULL;
//	fp = fopen("E:/it/c/cexample/a.txt", "r");
//	if (fp == NULL) {
//		perror("fopen");	
//		return 0;
//	}
//
//	// 读文件
//	int i = 0;
//	while (1) {
//		buffer[i] = fgetc(fp);
//		if (buffer[i] == EOF) {
//			break;
//		}
//		i++;
//	}
//	
//	printf("buffer = %s", buffer);
//
//	// 关闭文件指针
//	fclose(fp);
//
//	return 0;
//}
