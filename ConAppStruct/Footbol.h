#define MAX 50

enum amplua {
	Vratar,
	Napadayushiy
};

struct Footbol {
	char lname[MAX];
	amplua amplua;
	int Age;
	int count_game;
	int count_gol;
};
