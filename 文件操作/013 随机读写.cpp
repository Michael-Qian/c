#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	���ļ��е�����һ���Զ�ȡ���ڴ���
*/
int main()
{
	// ��
	FILE* fp = fopen("E:/it/c/cexample/h.txt", "r");
	if (!fp) {
		perror("open");
		return -1;
	}

	// ʹ��fseek���ļ�ָ�붨λ���ļ�β��
	fseek(fp, 0, SEEK_END);

	// ʹ��ftell�õ��ļ���ƫ�������ļ����ֽ���
	long file_size = ftell(fp);

	// ʹ��rewind��λ�ļ�ָ��
	rewind(fp);

	// �����ļ���С�����ڴ�ռ�
	char* content = (char *)calloc(1,file_size+1); // +1Ŀ�ģ��ڴ�ĩβ���"\0"����ȡ��������û��"\0"

	// һ�ν�����д���ڴ�
	fread(content, file_size, 2,fp); // ���ݰ������Ļ��������

	// �������
	printf("%s", content);

	// �ͷ��ڴ�
	if (!content) {
		free(content);
		content = NULL;
	}

	// �ر�
	fclose(fp);

	return 0;
}