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
//
//	// ���ļ�
//	FILE* fp = fopen("E:/it/c/cexample/d.txt", "r");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// ��
//	Hero h[3];
//	int n = sizeof(h) / sizeof(h[0]);	// ����
//	fread(h, sizeof(h), n, fp);
//
//	for (int i = 0; i < n; i++) {
//		printf("name = %s,deff = %d, attk = %d\n", h[i].name, h[i].deff, h[i].attk);
//	}
//
//	// �ر��ļ�
//	fclose(fp);
//	return 0;
//}