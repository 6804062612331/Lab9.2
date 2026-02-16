#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)){
		//if Password is valid
		printf("Accepted\n");
	}
	else
		printf("Reject\n");
	}
int checkValidPass(char *ps) {
	int accepted=0;
	int checkfornum=0,checkforupper=0,length;
	length = strlen(ps);
	for(int i=0;i<strlen(ps);i++){
		if(isdigit(ps[i])){
			checkfornum += 1;
		}
		if(isupper(ps[i])){
			checkforupper += 1;
		}
	}
	if((!isdigit(ps[0]))&&(length>=5&&length<=8)&&checkfornum>1&&checkforupper>1){
		accepted = 1;
	}
	
	
	return accepted;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "Apas1"))
		return 1;
	else
		return 0;
}
