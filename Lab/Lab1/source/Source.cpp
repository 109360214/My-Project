#include<stdio.h>
#include<stdlib.h>
int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main()
{
	int n, sum;
	char Addchoice;
	printf("1+2+...+n=? �п�Jn");
	scanf_s("%d", &n);
	printf("�аݭn���_�ƩM(O)�A���ƩM(E)�٬O��ƩM(I)?�п��");
	scanf_s(" %c", &Addchoice);
	
	switch (Addchoice)
	{
	case 'O':
		sum = Odd(n);
			break;
	case 'E':
		sum = Even(n);
		break;
	case 'I':
		sum = TotalSum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d", sum);
	system("pause");
	return 0;
}


int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	if (i % 2 == 1) 
		total = total + i;
		return total;
		
	
}

int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	if (i % 2 == 0) 
		total = total + i;
	return total;
}

int TotalSum(int U)
{
	return Even(U) + Odd(U);
}
	
