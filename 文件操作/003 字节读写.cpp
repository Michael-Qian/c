//#include <stdio.h>
//#include <string.h>
//
///*
//	��һ���ļ������ݶ�������д����һ���ļ���
//*/
//int main()
//{
//	// �������ļ�ָ��
//	FILE* fp1,*fp2;
//
//	fp1 = fopen("E:/it/c/cexample/a.txt", "r");
//	fp2 = fopen("E:/it/c/cexample/b.txt", "w");
//	
//	if (fp1 == NULL || fp2 == NULL) {
//		perror("fopen");
//		return 0;
//	}
//
//	// һ�߶���һ��д
//	char c=0;
//	while (1) {
//		// ��
//		c = fgetc(fp1);
//		if (c == EOF) {
//			break;
//		}
//
//		// д
//		fputc(c, fp2);
//	}
//
//	// �ر��ļ�
//	fclose(fp1);
//	fclose(fp2);
//	return 0;
//
//}