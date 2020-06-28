//#include <stdio.h>
//
//// 定义一个结构
//typedef struct {
//	char name[16];
//	int deff;
//	int attk;
//} Hero;
//
//int main()
//{
//
//	// 打开文件
//	FILE* fp = fopen("E:/it/c/cexample/d.txt", "r");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 读
//	Hero h[3];
//	int n = sizeof(h) / sizeof(h[0]);	// 块数
//	fread(h, sizeof(h), n, fp);
//
//	for (int i = 0; i < n; i++) {
//		printf("name = %s,deff = %d, attk = %d\n", h[i].name, h[i].deff, h[i].attk);
//	}
//
//	// 关闭文件
//	fclose(fp);
//	return 0;
//}