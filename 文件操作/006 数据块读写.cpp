//#include <stdio.h>
//
//// ����һ���ṹ
//typedef struct {
//	char name[16];
//	int deff;
//	int attk;
//} Hero;
//
//int main()
//{
//	Hero h[] = {
//		{"С��", 100,20},
//		{"С��", 0,80},
//		{"С��", 50,50}};
//
//	// ���ļ�
//	FILE* fp = fopen("E:/it/c/cexample/d.txt", "w");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// д
//	int n = sizeof(h) / sizeof(h[0]);	// ����
//	fwrite(h, sizeof(h), n, fp);
//
//	// �ر��ļ�
//	fclose(fp);
//	return 0;
//}