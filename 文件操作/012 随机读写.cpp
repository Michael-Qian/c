//#include <stdio.h>
//
///*
//	��λ�ļ���
//	ָ�붨λ�����ݵ��ײ�
//*/
//int main()
//{
//
//	// ���ļ�����д
//	FILE* fp = fopen("E:/it/c/cexample/g.txt", "w+");
//	if (!fp) {
//		perror("fopen");
//		return 0;
//	}
//
//	// д
//	fputs("hello world", fp);
//
//	// ��λ�ļ���
//	rewind(fp);
//
//	// ��
//	char buffer[20];
//	fgets(buffer, sizeof(buffer), fp);
//	printf("%s", buffer);
//	
//	return 0;
//}