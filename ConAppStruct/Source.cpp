#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include <iostream>

enum city { Almaty, Astana };

#define MAX50 50
#define MAX12 12

struct address
{
	city city;
	char region[MAX50];
	char streetName[MAX50];
	int house;
	int app;
	int zip;
};

struct student
{
	char fName[MAX50];
	char lName[MAX50];
	char dateOfBerth[MAX12];
	int Age;
	struct address address;
};

void sl(int age)
{
	if (age < 18)
		printf("(Призывник)");
}

void PrintStudentInfo(struct student * student)
{
	printf("Информация о студенте: ");
	sl(student->Age);
	printf("\n");

	printf("--> %s %s \n", student->fName, student->lName);
}

void PrintStudentInfo(struct student student)
{
	printf("Информация о студенте: ");
	sl(student.Age);
	printf("\n");
	printf("--> %s %s \n", student.fName, student.lName);
}

void PrintStudentInfo(struct student * students, int count)
{
	printf("Список поступающих: \n");
	for (int i = 0; i < count; i++)
	{
		//PrintStudentInfo(&students[i]);
		PrintStudentInfo(students[i]);
		/*printf("--> #%d. %s %s \n",
		i, students[i].fName, students[i].lName);*/
	}
	printf("\n---------------------------------- \n");
	printf("ИТОГО: %d поступающих \n", count);
}




void main2()
{
	setlocale(LC_ALL, "Rus");

	struct student students[2];
	
	int count = 0;
	int index;

	printf("Введите имя студента\n");

	while (count < 2
		&& gets_s(students[count].fName) != NULL
		&& students[count].fName[0] != '\0')
	{
		printf("Введите фамилию студента\n");
		gets_s(students[count].lName);

		printf("Введение возраст\n");
		scanf("%d", &students[count].Age);

		while (getchar() != '\n')
			continue;

		count++;

		if (count < 2)
			printf("Введите имя студента\n");
	}

	printf("\n\n---------------------------------- \n\n");
	if (count > 0)
		PrintStudentInfo(students, count);
	else
		printf("Увы и ах!\n");

	system("pause");

	//struct student yevgeniy {
	//		"Yevgeniy",
	//		"Gertsen",
	//		"11.01.1988",
	//		25,
	//		NULL,
	//		Almaty
	//};

	//struct student ivan;
	//ivan.Age = 23;
	//ivan.city = Astana;
	////ivan.fName = " ";
	////char dob[12] = "11.01.1988";
	////ivan.dateOfBerth = "11.01.1988";

	/*printf("Student #1 %c %s - %d \n",
		yevgeniy.fName[0], yevgeniy.lName, yevgeniy.Age);*/

}