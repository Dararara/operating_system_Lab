//�ύ��һ������ʱ�䳬��100�������ҵ
#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0;
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}

	sleep(120);//��Ϣ120��

	return 0;
}