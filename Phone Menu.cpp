#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void mainmenu();
void startup();
void calls();
void calculator();
void fonts();
void shutdown();
int line;
main()
{
	int password;
		system ("CLS");
		printf("\n\n\n\n\t\t\tPlease enter your password  : ");
		scanf("%d", &password);	
		
		if (password!=1234)
		{
				do 
			{
			system ("CLS");
			printf("\n\n\n\n\t\t\tPlease enter your password again : ");
			scanf("%d", &password);	
			}while (password!=1234);
			startup();
		}
		else if (password==1234){
			startup();
		}
		
	return 0;
}

void startup()
{
	system("CLS");

	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
	printf("\n\t\t\t    [1] DIGI\n\t\t\t    [2] MAXIS\n\t\t\t    [3] CELCOM\n\t\t\t    Select your network: ");
	scanf("%d",&line); system("CLS");
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
	printf("\n\n\t\t\t\tNetwork Selected\n");Sleep(500);mainmenu();
	
}

void mainmenu()
{
	time_t t;
    time(&t);
	int choices;
	if(line==1){
	system("CLS");
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t  DIGI 3G                            %s\n\n\n",ctime(&t));//jam ni ikut masa sebenar, tapi x gerak//
	printf("\n\t\t\t\t[1] Calls\n\t\t\t\t[2] Calculator\n\t\t\t\t[3] Fonts\n\t\t\t\t[0] Shutdown\n\n\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t\t\t\tSelect: "); scanf(" %d", &choices);
	switch(choices)
	{
		case 1: calls();break;
		case 2: calculator();break;
		case 3: fonts();break;
		case 0: shutdown();break;
		default: mainmenu();break;
	}}
	else if(line==2){
	system("CLS");
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t  MAXIS 3G                           %s\n\n\n",ctime(&t));//jam ni ikut masa sebenar, tapi x gerak//
	printf("\n\t\t\t\t[1] Calls\n\t\t\t\t[2] Calculator\n\t\t\t\t[3] Fonts\n\t\t\t\t[0] Shutdown\n\n\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t\t\t\tSelect: "); scanf(" %d", &choices);
	switch(choices)
	{
		case 1: calls();break;
		case 2: calculator();break;
		case 3: fonts();break;
		case 0: shutdown();break;
		default: mainmenu();break;
	}}
	else if(line==3){
	system("CLS");
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t  CELCOM 3G                          %s\n\n\n",ctime(&t));//jam ni ikut masa sebenar, tapi x gerak//
	printf("\n\t\t\t\t[1] Calls\n\t\t\t\t[2] Calculator\n\t\t\t\t[3] Fonts\n\t\t\t\t[0] Shutdown\n\n\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t\t\t\tSelect: "); scanf(" %d", &choices);
	switch(choices)
	{
		case 1: calls();break;
		case 2: calculator();break;
		case 3: fonts();break;
		case 0: shutdown();break;
		default: mainmenu();break;
	}}
	else{
	system("CLS");
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\tNo Service                           %s\n\n\n",ctime(&t));//jam ni ikut masa sebenar, tapi x gerak//
	printf("\n\t\t\t\t[1] Calls\n\t\t\t\t[2] Calculator\n\t\t\t\t[3] Fonts\n\t\t\t\t[0] Shutdown\n\n\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t\t\t\tSelect: "); scanf(" %d", &choices);
	switch(choices)
	{
		case 1: calls();break;
		case 2: calculator();break;
		case 3: fonts();break;
		case 0: shutdown();break;
		default: mainmenu();break;
	}}
}

void calls()
{
	system("CLS");
	int choices;
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
	printf("\n\t\t\t\t[1] Call\n\t\t\t\t[0] Main Menu\n\n\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t\t\t\tSelect: "); scanf(" %d", &choices);
	switch(choices)
	{
		case 1:
			system("CLS");
			int call;
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\t[1] Aziz\n\t\t\t\t[2] Haiqal\n\t\t\t\t[3] Chong\n\t\t\t\t[0] Back\n\n");
			printf("\t\t\t\t Call >>> "); scanf("%d",&call);if(call==1) {system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCalling Aziz");printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". \n\t\t\t");Sleep(300); system("Pause"); system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCall ended");printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". ");Sleep(300); system("CLS");}
			else if(call==2) {system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCalling Haiqal");printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". \n\t\t\t");Sleep(300); system("Pause"); system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCall ended");printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". ");Sleep(300); system("CLS");}
			else if(call==3) {system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCalling Chong");printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". \n\t\t\t");Sleep(300); system("Pause"); system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCall ended");printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". ");Sleep(300); system("CLS");}
			else { system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCalling +60%d",call);printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". \n\t\t\t");Sleep(300); system("Pause"); system("CLS");
			printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
			printf("\t\t\t\tCall ended");printf(". ");Sleep(300);printf(". ");Sleep(300);printf(". ");Sleep(300); system("CLS");}
			calls();break;
		case 0: mainmenu();break;
		default: calls();break;
	}
}

void calculator()
{
	system("CLS");
	float num1,num2,total;
	char operation;
	int choose;
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t  OPERATOR ([+]Add   [-]Subtract   [*]Multiply   [/]Divide)\n");
	printf("\n\t\t\tEnter first number  : ");
	scanf("%f",&num1);
	printf("\t\t\tEnter second number : ");
	scanf("%f",&num2);
	printf("\t\t\tChoose OPERATOR   : ");
	scanf(" %c",&operation);
	switch(operation)
	{
		case '+': total=num1+num2;operation='+';break;
		case '-': total=num1-num2;operation='-';break;
		case '*': total=num1*num2;operation='*';break;
		case '/': total=num1/num2;operation='/';break;
		default: calculator();
	}
	printf("\n\t\t\t\t%.2f %c %.2f = %.2f\n",num1,operation,num2,total);
	printf("\t\t\tPress 1 to calculate new numbers\n\t\t\tPress 0 to back to Main Menu >>>");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1: calculator();break;
		case 0: mainmenu();break;
		default: calculator();break;
	}
	
}

void fonts()
{
	int choices;
	system("CLS");
	printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t\t\t\t[1] Crimson\n\t\t\t\t[2] Aqua\n\t\t\t\t[3] Eggplant\n\t\t\t\t[0] Main Menu\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("\t\t\t\tSelect: "); scanf(" %d", &choices);
	switch(choices)
	{
		case 1: system("Color 0C");fonts();break;
		case 2: system("Color 0B");fonts();break;
		case 3: system("Color 05");fonts();break;
		case 0: mainmenu();break;
		default: fonts();break;
	}
}

void shutdown()
{
	
	system("CLS");
	printf("\n\n\n\n\t\t\t\tShutting down");Sleep(300);
	printf("\n\n\n\n\t\t\t\tBYE");Sleep(200);
	printf("\n\n\n\n\t\t\t\t\t\tBYE");Sleep(200);
	printf("\n\n\n\n\t\t\t\t\t\t\t\tBITCH");Sleep(200);
	printf(" .");Sleep(300);printf(" .");Sleep(300);printf(" .");Sleep(300);system("CLS");
	printf("\n\n\n\n\t\t\t\tTHANK YOU !\n\n\n\n\n");//ni buang nanti//
}



