//#include <stdio.h>
//
///*
//	����˳���дʹ��ͬһ���ļ�ָ��
//*/
//int main()
//{
//
//	// �� -> д - �ر�
//	FILE* fp = fopen("E:/it/c/cexample/f.txt", "w");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	fputs("hello world", fp);
//	fclose(fp);
//	
//	// �� -> �� -> �ر�
//	FILE* fp1 = fopen("E:/it/c/cexample/f.txt", "r");
//	if (!fp1) {
//		perror("fopen");
//		return 0;
//	}
//
//	char buffer[20];
//	fgets(buffer, sizeof(buffer), fp1);
//	printf("%s", buffer);
//	fclose(fp1);
//
//	return 0;
//}