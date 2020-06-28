//#include <stdio.h>
//
///*
//	顺序读写使用同一个文件指针的弊端
//*/
//int main()
//{
//
//	// 打开文件：读写
//	FILE* fp = fopen("E:/it/c/cexample/f.txt", "w+");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 写
//	fputs("hello world", fp);
//
//	// 读
//	// 为什么没有将数据读取出来，而且还输出乱码？
//	// 读写操作的是同一个文件指针，当写完之后，文件指针定位在“hello world”的“d”后面
//	// 所以“d”后的值输出
//	// 乱码是预留空间中的值，因为分配了20个字节，使用11个字节
//	// 顺序读写要避免同时写和读，读不齐作用的，文件指针总是指向内容末尾
//	char buffer[20];
//	fgets(buffer, sizeof(buffer), fp);
//	printf("%s", buffer);
//	
//	return 0;
//}