//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str[] = { "��ǰ���¹�a\n","���ǵ���˪b\n","��ͷ������c\n","��ͷ˼����d" };
//
//	FILE* fp = fopen("E:/it/c/cexample/c.txt", "w");
//
//	if (fp == NULL) {
//		perror("fopen");
//		return 0;
//	}
//
//	// д
//	// 16 / 4 = 4 �ܹ���ַ��16���ֽڣ�ÿ���ַ�����ַռ4���ֽڣ��õ�4��
//	int n = sizeof(str) / sizeof(str[0]);
//	for (int i = 0; i < n; i++) {
//
//		fputs(str[i], fp);
//	}
//
//	// �ر�
//	fclose(fp);
//	return 0;
//}