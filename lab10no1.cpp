#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	int score;
} Student;

void addStudent(Student *record, const char *name, int score);

int main() {
	Student stuRecord[20]; int numStudent, i;
	addStudent(&stuRecord[0], "Sandking", 65);
	addStudent(&stuRecord[1], "Anti-mage", 72);
	addStudent(&stuRecord[2], "Sniper", 40);
	addStudent(&stuRecord[3], "Tiny", 93); 
	addStudent(&stuRecord[4], "Axe", 60);
	numStudent = 5;
	for(i = 0; i < numStudent; i++) {
		printf("%d:\tevaluation for: %s;\n", i+1, stuRecord[i].name);
		int sRs = stuRecord[i].score;
		if (sRs>=80) printf("very good");
		else if (sRs>=60) printf("good");
		else printf("keep trying");
		printf("\n");
	}
	return 0;
}

void addStudent(Student *record, const char *name, int score) {
	strcpy(record->name, name); 
	record->score = score;
}

