#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Footbol.h"


void footbol(struct Footbol * team, int player)
{
	struct Footbol best;
	int Max = 0;
	for (int i = 0; i < player; i++)
	{
		if (team[i].count_gol > Max)
		{
			Max = team[i].count_gol;
			best = team[i];
		}
	}
	printf("Best forvard %s, kol-vo golov %d\n",best.lname,best.count_gol);
}