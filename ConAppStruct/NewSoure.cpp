#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "HFootbol.h"
#include "Footbol.h"

#define MAX 50

void main()
{
	srand(time(NULL));
	int nz;
	do
	{
		printf("Vvedite nomer zadaniya:");
		scanf("%d", &nz);
		if (nz == 1)
		{
			/*Определить лучшего форварда, и вывести сведения о футболистах,
			сыгравших менее 5-ти игр.*/
			system("cls");
			struct Footbol footbols[3];
			footbols[0].Age = 25 + rand() % 15;
			strcpy(footbols[0].lname, "Joker");
			//footbols[0].amplua= Vratar;
			footbols[0].count_game = 1 + rand() % 4;
			footbols[0].count_gol = 1 + rand() % 9;

			footbols[1].Age = 25 + rand() % 15;
			strcpy(footbols[1].lname, "Borat");
			//footbols[1].amplua = Napadayushiy;
			footbols[1].count_game = 1 + rand() % 4;
			footbols[1].count_gol = 1 + rand() % 9;

			footbols[2].Age = 25 + rand() % 15;
			strcpy(footbols[1].lname, "Ronaldo");
			//footbols[2].amplua = Napadayushiy;
			footbols[2].count_game = 1 + rand() % 4;
			footbols[2].count_gol = 1 + rand() % 9;

			footbols[3].Age = 25 + rand() % 15;
			strcpy(footbols[1].lname, "Pele");
			//footbols[3].amplua = Napadayushiy;
			footbols[3].count_game = 1 + rand() % 4;
			footbols[3].count_gol = 1 + rand() % 9;

			footbol(footbols, 4);
		}

		else if (nz == 2)
		{
			/*Определить средний бал оценок по всем предметам,
			и вывести сведения о студентах, средний балл которых больше 4.*/
			struct student
			{
				char lname[MAX];
				int group;
				int fizik;
				int inform;
				int history;
				int sr;
			};
			struct student students[4];
			for (int i = 0; i < 4; i++)
			{
				gets_s(students[i].lname);
				students[i].group = rand() % 2;
				students[i].fizik = 2 + rand() % 8;
				students[i].history = 2 + rand() % 8;
				students[i].inform = 2 + rand() % 8;
			}

			for (int i = 0; i < 4; i++)
			{
				students[i].sr = (students[i].fizik + students[i].history + students[i].inform) / 3;
			}

			for (int i = 0; i < 4; i++)
			{
				if (students[i].sr >= 4)
					printf("%s ego sr bal = %d\n", students[i].lname, students[i].sr);
			}
		}

	} while (nz == 999);
}