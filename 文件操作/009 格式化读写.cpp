//#include <stdio.h>
//
//// ����һ���ṹ
//typedef struct {
//	char name[16];
//	int attk;
//	int deff;
//} Hero;
//
//int main()
//{
//
//	// ���ļ�
//	FILE* fp = fopen("E:/it/c/cexample/e.txt", "r");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// ��ȡ���ṹ��ʵ����
//	Hero h[3];
//	int n = sizeof(h) / sizeof(h[0]);	// ����
//
//	for (int i = 0; i < n; i++) {
//		fscanf(fp, "����:%s ������:%d ������:%d\n", &h[i].name, &h[i].attk,&h[i].deff); // ע�⣺��Ҫ©дȡ��ַ��
//	}
//
//	// ��ӡ
//	for (int i = 0; i < n; i++) {
//		printf("����:%s ������:%d ������:%d\n", h[i].name, h[i].attk, h[i].deff);
//	}
//
//	// �ر��ļ�
//	fclose(fp);
//	return 0;
//}