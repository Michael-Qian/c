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
//	Hero h[] = {
//		{"小米", 100,20},
//		{"小黑", 0,80},
//		{"小和", 50,50}};
//
//	// 打开文件
//	FILE* fp = fopen("E:/it/c/cexample/e.txt", "w");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 写
//	int n = sizeof(h) / sizeof(h[0]);	// 块数
//
//	for (int i = 0; i < n; i++) {
//		fprintf(fp, "姓名:%s 攻击力:%d 防御力:%d\n", h[i].name, h[i].attk, h[i].deff);
//	}
//
//	// 关闭文件
//	fclose(fp);
//	return 0;
//}