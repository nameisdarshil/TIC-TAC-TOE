#include<stdio.h>
main()
{
	char a[9]={'_','_','_','_','_','_','_','_','_'};
	int t=1;
	int i,pos;
	printf("\nPlayer 1: 'X' \nPlayer 2: 'O'");
	
	while(t!=9)
	{
			printf("\nEnter position player %d :",i);
			scanf("%d",&pos);
		
		if(t%2!=0)
		{	
			a[pos-1]='X';
		}
		else
		{
			a[pos-1]='O';
		}
		
		printf("\n%c | %c | %c",a[0],a[1],a[2]);
		printf("\n%c | %c | %c",a[3],a[4],a[5]);
		printf("\n%c | %c | %c",a[6],a[7],a[8]);
		
		if(a[0]==a[1] && a[0]==a[2])
		{
			if(a[0]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[0]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		
		if(a[3]==a[4] && a[3]==a[5])
		{
			if(a[3]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[3]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		
		if(a[6]==a[7] && a[6]==a[8])
		{
			if(a[6]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[6]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		
		if(a[0]==a[3] && a[0]==a[6])
		{
			if(a[0]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[0]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		
		if(a[1]==a[4] && a[1]==a[7])
		{
			if(a[1]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[1]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		
		if(a[2]==a[5] && a[2]==a[8])
		{
			if(a[2]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[2]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		
		if(a[0]==a[4] && a[0]==a[8])
		{
			if(a[0]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[0]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		
		if(a[2]==a[4] && a[2]==a[6])
		{
			if(a[2]=='X')
			{
				printf("\nWinner is player 1");
				t=10;
				break;
			}
			else if(a[2]=='O')
			{
				printf("\nWinner is player 2");
				t=10;
				break;
			}	
		}
		t++;
		}
	}
