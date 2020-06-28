//#include <stdio.h>
//
//// 定义一个结构
//typedef struct {
//	char name[16];
//	int attk;
//	int deff;
//} Hero;
//
//int main()
//{
//
//	// 打开文件
//	FILE* fp = fopen("E:/it/c/cexample/e.txt", "r");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// 读取到结构体实例中
//	Hero h[3];
//	int n = sizeof(h) / sizeof(h[0]);	// 块数
//
//	for (int i = 0; i < n; i++) {
//		fscanf(fp, "姓名:%s 攻击力:%d 防御力:%d\n", &h[i].name, &h[i].attk,&h[i].deff); // 注意：不要漏写取地址符
//	}
//
//	// 打印
//	for (int i = 0; i < n; i++) {
//		printf("姓名:%s 攻击力:%d 防御力:%d\n", h[i].name, h[i].attk, h[i].deff);
//	}
//
//	// 关闭文件
//	fclose(fp);
//	return 0;
//}