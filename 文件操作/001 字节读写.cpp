//#include <iostream>
//
///*
//	��һ���ļ����ֽ�д������
//*/
//int main()
//{
//	// ���ļ�
//	char buffer[128];
//	FILE* fp = fopen("E:/it/c/cexample/b.txt", "w");
//	if (fp == NULL) {
//		perror("file open error!");
//		return 0;	
//	}
//
//	// �����ַ���
//	printf("�������ַ�����");
//	fgets(buffer, sizeof(buffer), stdin);
//	printf("strlen = %d", strlen(buffer)); // "hello world"=12 11�ַ�+1���з�
//	//buffer[strlen(buffer) - 1] = 0;	// ȥ������
//
//	// д���ļ�
//	int i = 0;
//	while (buffer[i] != 0x0A) {	// �����ڻ��з�
//		fputc(buffer[i], fp);
//		i++;
//	}
//
//	// �ر��ļ�
//	fclose(fp);
//	return 0;
//}
