#include<stdio.h>
int tab()
{
	for(int i=0; i<6; i++)
		printf("\t");
}

int delay()
{
	int t=999555550;
	
	for (int j=0;j<t;j++)
		continue;
}


int score()
{
	int i,sum1=0,sum2=0;
	int team1[10]={8,17,6,15,9,11,19,17,8,17};
	int team2[10]={6,7,4,9,8,11,9,15,17,8};
	
	for(i=0; i<10; i++)
	{
		sum1=sum1+team1[i];
		sum2=sum2+team2[i];	
	}
	
	tab();
	printf("\t\t----------------------------\n");
	tab();
	printf("\t\t|	  SCOREBOARD	    |\n");
	tab();
	printf("\t\t----------------------------\n");
	tab();
	printf("\t\t|  India    |  %d runs     |\n",sum1);
	tab();
	printf("\t\t|  Pakistan |  %d runs      |\n",sum2);
	tab();
	printf("\t\t-----------------------------");
	
	if (sum1>sum2)
	{	 
		printf("\n\n");
		tab();
		printf("\t\t     India won the match\n");
	}
	else
	{	 
		printf("\n\n");
		tab();
		printf("\t\t     Paksitan won the match\n");
	}
	
	for (int j=0;j<=5;j++)
		delay();
}


int disp(int z[100], int oon)
{
	int y[]={0,1,2,3,4,6};
	int sum;
	
	for (int i=0;i<6;i++)
	{	
		sum=sum+(z[i]*y[i]);
	}
	
	printf("\n");
	tab();
	delay();
	printf("The player scored %d runs in this match \n\n",sum);
	delay();
	delay();
	tab();
	printf("\t--------------------------\n");
	tab();
	printf("\t|   RUN    |  OCCURENCES |\n");
	tab();
	printf("\t--------------------------\n");
	
	for (int i=0;i<6;i++)
	{	
		tab();
		printf("\t|    %d     |     %d       |\n",y[i],z[i]);
	}
	
	tab();
	printf("\t--------------------------");
		
	if (oon==1)
	{
		printf("\n\n");
		tab();
		printf("\t    The player got out\n");
	}
	else
	{
		printf("\n\n");
		tab();
		printf("\t    The player was not out\n");
	} 	
}    


int players()
{
	int n,opt;
	char ateam[][15]={"Rohit Sharma","Shubman Gill","Virat Kohli","Surya Kumar","Hardik Pandya"};
	char bteam[][15]={"Babar Azam","Rizwan","Zaman","Nawaz","Wasim"};
	
	int a[]={2,1,2,0,1,1}; /*each player's occurence of each run is stored */
	int b[]={1,1,1,1,0,1};
	int c[]={5,5,3,1,4,4};
	int d[]={5,6,1,1,1,2};
	int e[]={1,1,0,0,3,1};
	int f[]={2,1,1,0,0,0};
	int g[]={3,4,0,1,1,1};
	int h[]={7,7,2,1,3,1};
	int i[]={4,3,1,1,1,2};
	int j[]={4,2,0,2,1,1};
	
	label:
	for (int k=0;k<20;k++)
	{
	printf("\n\n\t\tKnow the score of each individual player : ");
	for (int j=0;j<=3;j++)
		delay();
	printf("\n\n\t\tINDIA :\n\n\t\t1.Rohit Sharma \n\t\t2.Shubman Gill \n\t\t3.Virat Kohli\n\t\t4.Surya Kumar\n\t\t5.Hardik Pandya\n");
	printf("\n\t\tPAKISTAN:\n\n\t\t6.Babar Azam\n\t\t7.Rizwan\n\t\t8.Zaman\n\t\t9.Nawaz\n\t\t10.Wasim\n");
	delay();
	printf("\n\t\tEnter the player number to know his scores : ");
	scanf("%d",&n);
		
	if (n==1)
		disp(a,1);
	else if (n==2)
		disp(b,1);
	else if (n==3)
		disp(c,0);
	else if (n==4)
		disp(d,1);
	else if (n==5)
		disp(e,0);
	else if (n==6)
		disp(f,1);
	else if (n==7)
		disp(g,1);
	else if (n==8)
		disp(h,0);
	else if (n==9)
		disp(i,1);
	else
		disp(j,0);
		
	for (int j=0;j<=3;j++)
		delay();
		
	printf("\n\n\n\t\tDo you want to see score of next player 1.yes / 2. no ? ");
	delay();
	scanf("%d",&opt);
		
	if (opt==1)
		goto label;
	else
	{
		printf("\n\n");
		tab();
		printf("\tThank you\n\n\n\n\n");
		break;
	}
	}
}

int main()
{
	for (int j=0;j<=8;j++)
		delay();
	printf("\n\n");
	tab();
	printf("\t\tCRICKET SCORE ANALYSIS OF A MATCH"); 
	
	for (int j=0;j<=5;j++)
		delay();
		
	printf("\n\n");
	tab();
	printf("\t\t\tINDIA VS PAKISTAN\n\n");
	
	for (int j=0;j<=5;j++)
		delay();
		
	score();
	
	for (int j=0;j<=5;j++)
		delay();
		
	players();
}
