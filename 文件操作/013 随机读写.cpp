#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	将文件中的数据一次性读取到内存中
*/
int main()
{
	// 打开
	FILE* fp = fopen("E:/it/c/cexample/h.txt", "r");
	if (!fp) {
		perror("open");
		return -1;
	}

	// 使用fseek将文件指针定位到文件尾部
	fseek(fp, 0, SEEK_END);

	// 使用ftell得到文件的偏移量，文件的字节数
	long file_size = ftell(fp);

	// 使用rewind复位文件指针
	rewind(fp);

	// 根据文件大小申请内存空间
	char* content = (char *)calloc(1,file_size+1); // +1目的，内存末尾添加"\0"，读取的内容是没有"\0"

	// 一次将数据写入内存
	fread(content, file_size, 2,fp); // 内容包含中文会出现乱码

	// 输出数据
	printf("%s", content);

	// 释放内存
	if (!content) {
		free(content);
		content = NULL;
	}

	// 关闭
	fclose(fp);

	return 0;
}