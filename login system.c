#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char password[20];
	char username[30];
	printf("____sign in____\t\n");
	printf("\nEnter your username:");
	scanf("%s",username);
	for(int i=0;i<3;i++){
	    printf("\n Hello %s Enter your password:\n",username);
		scanf("%s",&password);
    if (strcmp(username,"Mercy")==0)
	{
	if (strcmp(password,"mercy3234")==0)
	{
	printf("=================================================\n");
	printf("welcome________logged in successful_________\n"); 
    printf("=================================================\n");
	break;
	}
	else
	{
		printf("==================================\n");
		printf("wrong password\n");
		printf("==================================\n");
	}
	}
	else
	{
		printf("==================================\n");
		printf("invalid details\n");
		printf("==================================\n");
		break;
	}
	}
	getch ();
return 0;
}
