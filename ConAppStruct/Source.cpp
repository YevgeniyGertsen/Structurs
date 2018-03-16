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
		printf("(���������)");
}

void PrintStudentInfo(struct student * student)
{
	printf("���������� � ��������: ");
	sl(student->Age);
	printf("\n");

	printf("--> %s %s \n", student->fName, student->lName);
}

void PrintStudentInfo(struct student student)
{
	printf("���������� � ��������: ");
	sl(student.Age);
	printf("\n");
	printf("--> %s %s \n", student.fName, student.lName);
}

void PrintStudentInfo(struct student * students, int count)
{
	printf("������ �����������: \n");
	for (int i = 0; i < count; i++)
	{
		//PrintStudentInfo(&students[i]);
		PrintStudentInfo(students[i]);
		/*printf("--> #%d. %s %s \n",
		i, students[i].fName, students[i].lName);*/
	}
	printf("\n---------------------------------- \n");
	printf("�����: %d ����������� \n", count);
}




void main2()
{
	setlocale(LC_ALL, "Rus");

	struct student students[2];
	
	int count = 0;
	int index;

	printf("������� ��� ��������\n");

	while (count < 2
		&& gets_s(students[count].fName) != NULL
		&& students[count].fName[0] != '\0')
	{
		printf("������� ������� ��������\n");
		gets_s(students[count].lName);

		printf("�������� �������\n");
		scanf("%d", &students[count].Age);

		while (getchar() != '\n')
			continue;

		count++;

		if (count < 2)
			printf("������� ��� ��������\n");
	}

	printf("\n\n---------------------------------- \n\n");
	if (count > 0)
		PrintStudentInfo(students, count);
	else
		printf("��� � ��!\n");

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