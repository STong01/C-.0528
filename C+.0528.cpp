#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
//ʵ��һ�����������������ַ����е�k���ַ��� 
void left_remove(char *p, int n, int len)
{
	int i;
	for (i = 0; i <= n-1; i++)
	{
		int j = 0;
		char tmp = p[0];
		for (j = 0; j < len; j++)
		{
			p[j] = p[j + 1];
		}
		p[len - 1] = tmp;
	}
}
int main(){
	char arr[] = "ABCD";
	int n;
	int len = strlen(arr);
	printf("��Ҫ��ת���ַ�����%s\n", arr);		
	printf("��Ҫ��ת��λ��:");
	scanf("%d", &n);
	//while (n < 1 || n > len - 1)//����������ת�ַ������ٽ�ֵ�жϣ��Ƿ񳬹��ַ�������
	//{
	//	if (n == len)//��ת�ַ���Ϊ�ַ�������ʱ����ת����ַ�������תǰ���ַ���һ�£����Կ�ֱ�����
	//	{
	//		printf("%s", arr);
	//		system("pause");
	//		return 0;
	//	}
	//	else
	//	{
	//		printf("�����������������\n");
	//		scanf("%d", &n);
	//	}
	//}
	left_remove(arr, n, len);//�������������ת�ַ��Ĺ���
	printf("��ת���ַ���: %s\n", arr);
	system("pause");
	return 0;
}
#endif

#if 1
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
int find_round(char * src, char * find){
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) ? 1 : 0;
}
int main(){
	char src[] = { 20 };
	char find[] = { 20 };
	printf("��������ת���ַ�����");
	scanf("%s", &src);
	printf("���������ַ�����");
	scanf("%s", &find);
	printf("%d\n", find_round(src, find));
	system("pause");
	return 0;
}
#endif