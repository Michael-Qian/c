//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	// ��
//	const char* path = "E:/it/c/cexample/c.txt";
//	FILE* fp = fopen(path, "r");
//
//	if (fp == NULL) {
//		perror("fopen");
//		return 0;
//	}
//
//	// ��ȡ
//	//while (1) {
//	//	char buffer[125];
//	//	char* n;
//	//	n = fgets(buffer, sizeof(buffer), fp);
//
//	//	if (n == NULL) {
//	//		break;
//	//	}
//
//	//	printf("%s", buffer);
//	//}
//
//	// ��ȡ-�Ż�
//	// ��ȡʱ��������
//	char buffer[125];
//	while (fgets(buffer, sizeof(buffer), fp)) {
//
//		printf("%s", buffer);
//	}
//
//	// �ر�
//	fclose(fp);
//
//	return 0;
//}