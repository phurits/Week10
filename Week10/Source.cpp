#include<iostream>
using namespace std;
void multiply(int a,int b);

int main()
{
	int a = 0, b = 0,c=0;
	cout << "Input Number From _ to _ to create Multiplication Table\n";
	do {
		cin >> a >> b;
		if (a > b)
		{
			c = a;
			a = b;
			b = c;
		}
		if (a > 0 && b > 0)
		{
			multiply(a, b);
			break;
		}
		else
		{
			cout << "TRY AGAIN" << endl;
		}
	} while (true);
	
}


void multiply(int a,int b)
{
	int i = 0, j = 0;
	for (i = a; i <= b; i++)
	{
		printf("Multiplication Table: %d\n", i);
		for (j = 1; j <= 12; j++)
		{
			printf(" %dX%d = %d\n", i, j, i * j);
		}
	}
}