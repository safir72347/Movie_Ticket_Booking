#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int login(char *arr4,char *arr5,char *arr6,char *arr7)
{
int n1,n2;
char user[100],pass[100];
clrscr();
printf("\n***********************************************************");
printf("\n*        ========                 ==      ==      ==      *");
printf("\n*        ========  ||==    ||  ==    ==     ==   ==       *");
printf("\n*          ||||    || ==   || ==      ==     ====         *");
printf("\n*          ||||    ||  ==  || ==      ==     ====         *");
printf("\n*        ========  ||   == ||  ==    ==     ==   ==       *");
printf("\n*        ========  ||    ==||     ==      ==      ==      *");
printf("\n***********************************************************");
printf("\n\n\tLog in to continue\n\n");
printf("\n\tEnter your username:");
scanf("%s",&user);
printf("\n\tEnter your password:");
scanf("%s",&pass);
n1=strcmp(arr6,user);
n2=strcmp(arr7,pass);
if(n1==n2)
{
return 1;
}
else
{
return 0;
}
}
void main()
{
int ch1,i,r,m,t,ch5,time1,ch4,ch3;
char name[100],surname[100],username[100],password[100],ch,time[10],movie[20];
clrscr();
printf("\n***********************************************************");
printf("\n*        ========                 ==      ==      ==      *");
printf("\n*        ========  ||==    ||  ==    ==     ==   ==       *");
printf("\n*          ||||    || ==   || ==      ==     ====         *");
printf("\n*          ||||    ||  ==  || ==      ==     ====         *");
printf("\n*        ========  ||   == ||  ==    ==     ==   ==       *");
printf("\n*        ========  ||    ==||     ==      ==      ==      *");
printf("\n***********************************************************");
printf("\n\n\tWelcome to Inox!\n");
printf("\n\n\tPress enter to continue:");
getch();
clrscr();
printf("\n***********************************************************");
printf("\n*        ========                 ==      ==      ==      *");
printf("\n*        ========  ||==    ||  ==    ==     ==   ==       *");
printf("\n*          ||||    || ==   || ==      ==     ====         *");
printf("\n*          ||||    ||  ==  || ==      ==     ====         *");
printf("\n*        ========  ||   == ||  ==    ==     ==   ==       *");
printf("\n*        ========  ||    ==||     ==      ==      ==      *");
printf("\n***********************************************************");
printf("\n\n\tSign up\n\n");
printf("\nEnter your name:");
scanf("%s",&name);
printf("\nEnter your surname:");
scanf("%s",&surname);
printf("\nEnter a username:");
scanf("%s",&username);
printf("\nEnter your password:");
scanf("%s",&password);

r=login(name,surname,username,password);
if(r==1)
{
printf("\nLogin successful!");
clrscr();
printf("\n***********************************************************");
printf("\n*        ========                 ==      ==      ==      *");
printf("\n*        ========  ||==    ||  ==    ==     ==   ==       *");
printf("\n*          ||||    || ==   || ==      ==     ====         *");
printf("\n*          ||||    ||  ==  || ==      ==     ====         *");
printf("\n*        ========  ||   == ||  ==    ==     ==   ==       *");
printf("\n*        ========  ||    ==||     ==      ==      ==      *");
printf("\n***********************************************************");

printf("\n\t1.Tiger Zinda hai");
printf("\n\t2.Golmaal Again");
printf("\n\t3.Thor Ragnarok");
printf("\n\t4.Kingsman");
printf("\n\t5.Secret Superstar");
printf("\n\n\tEnter movie number:");
scanf("%d",&
ch3);
m=ch3;
printf("\n\tMovie selected\n");
printf("\n\t1. 8 am");
printf("\n\t2. 12 am");
printf("\n\t3. 4 pm");
printf("\n\t4. 8 pm");
printf("\nChoose the timing:");
scanf("%d",&ch4);
t=ch4;

printf("\n\tTime selected\n");
getch();
clrscr();
printf("\n***********************************************************");
printf("\n*        ========                 ==      ==      ==      *");
printf("\n*        ========  ||==    ||  ==    ==     ==   ==       *");
printf("\n*          ||||    || ==   || ==      ==     ====         *");
printf("\n*          ||||    ||  ==  || ==      ==     ====         *");
printf("\n*        ========  ||   == ||  ==    ==     ==   ==       *");
printf("\n*        ========  ||    ==||     ==      ==      ==      *");
printf("\n***********************************************************");

printf("\n\n\tTicket!");
printf("\n\tUsername: %s",username);
printf("\n\t-------------------------------");
printf("\n\tMovie :");
if(m==1)
printf("Tiger Zinda Hai");
else if(m==2)
printf("Golmaal Again");
else if(m==3)
printf("Thor Ragnarok");
else if(m==4)
printf("Kingsman");
else if(m==5)
printf("Secret Superstar");

printf("\n\t-------------------------------");
printf("\n\tTime :");
if(t==1)
printf("8 am");
else if(t==2)
printf("12 pm");
else if(t==3)
printf("4 pm");
else if(t==4)
printf("8 pm");
}

else
{
printf("\nUsername or password is incorrect!");
}
getch();
}