// myProg.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int Num[3] = { 2,5,10 };
	int CurNum[3] = { 0 };
	int current = 0;
	int test = 0;


	for (int i = 0; i < 3; i++) printf("Start = %d\n", Num[i]);

	for (int i = 0; i < 3; i++)
	{
		if (Num[i] % 2 == 0)current++;
	}

	printf("Numbers = %d\n", current);


	if (current > 0 && current < 3)
	{
		if (current == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				if (Num[i] % 2 == 0)Num[i] += 1;
			}
		}
		else for (int i = 0; i < 3; i++)
		{
			if (Num[i] % 2 != 0) Num[i] *= 2;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			Num[i] = Num[i] * Num[i];
		}
	}
}