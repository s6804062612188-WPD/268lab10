//continuation from: https://github.com/s6804062612188-WPD/268lab9/blob/main/lab93no3.cpp
//removed stringCmp and opts for strcmp from string.h
#include <stdio.h>
#include <string.h>

typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[24];
	char nameSurname[24];
	account stdACC;
} hoststd;

int checkLogin(char *login, char *passwd, hoststd db[]); 

int main() {
	hoststd cs[5];
	for (int i=0; i<5; i=i+1) {
		char temp[64];
		sprintf(temp, "66-040626-2686-%d", i);	strcpy(cs[i].stdID, temp);
		sprintf(temp, "MR.%c", 'A'+i);	strcpy(cs[i].nameSurname, temp);
		sprintf(temp, "user%d", i+1);	strcpy(cs[i].stdACC.loginname, temp);
		sprintf(temp, "passwd%d", i+1);	strcpy(cs[i].stdACC.password, temp);
	}	//{66-040626-2686-0,MR.A,{user1, passwd1}},
	
//	printf("the database:\n");
//	for (int i=0; i<5; i=i+1) {
//		printf("record #%d\nID:\t%s\nName:\t%s\nloginname:\t%s\npassword:\t%s\n",i+1,cs[i].stdID, cs[i].nameSurname, cs[i].stdACC.loginname, cs[i].stdACC.password);
//	}
	
	char user[64], pass[64];
	printf("Enter your username:\n");	scanf("%s", user);
	printf("Enter your password:\n");	scanf("%s", pass);
	
	checkLogin(user, pass, cs);
}

int checkLogin(char *login, char *passwd, hoststd db[]) {
	for (int i=0; i<5; i=i+1) {
		if ( strcmp( login, db[i].stdACC.loginname ) ==0 ) {
			
			if ( strcmp( passwd, db[i].stdACC.password ) ==0 ) {
				printf("Welcome\n");	return 0;
			} else break;
			
		}
	}
	printf("Incorrect login or password\n");	return 0;
}
