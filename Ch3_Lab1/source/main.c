#include<stdio.h>
#include<stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d",&n);
	getchar();
	printf("�аݭn�_�ƩM(o),����(e),�٬O��ƩM(i)?�п�ܡG");
	scanf_s("%c", &AddChoice);

	switch (AddChoice)
	{
	case'o':
		Sum = Odd(n);
		break;

	case'e':
		Sum = Even(n);
		break;

	case'i':
		Sum = TotalSum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}

	printf("�`�M��%d\n", Sum);
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
	return Odd(U)+Even(U);
}