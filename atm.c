#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
void home();
void wrong();
void menu();
void withdraw();
void balance();
void change_pin();
void statement();
void money();
void main()
{   
    int pin,pswd,i,wdraw,amount=100000;       //password of the card 
    pswd = 1000;
    
	home();             //home screen calling 
    printf("\n\n\n\n\n\n\n\n\n\n");         //taking prompt towards down 
    printf("ENTER PIN : ");
    scanf("%d",&pin);
    printf("\n\n\n\n\t\t\t\tLoading ");
    for (i=0;i<=5;i++)
    {
    	printf(".");
    	sleep(1);
	}
    
    if (pin==pswd)        //chacking password
    {
    	int options;

        printf("\nPress Any Key ");
        getch();
        balance:
        system("cls");
        menu();
        printf("Enter Option : ");
        retry:        
        scanf("%d",&options);
        if (options<=4 && options>0)
        {
        	printf("\nPlease Wait ");
        	for (i=0;i<=5;i++)
        	{
        		printf(".");
        		sleep(1);
			}
        	system("cls");
        	if(options==1)
        	{
        		
        		withdraw();
        		insbal:
        		printf("\n");
        		printf("\t\tEnter Amount (In the multiple of 100): ");
        		scanf("%d",&wdraw);
        		system("cls");
        		printf("\n");
        		printf("Please wait");
        		sleep(1);
        		system("cls");
        		printf("\nCollecting the Cast");
        		sleep(1);
        		system("cls");
        		printf("\nCash collected");
        		sleep(1);
        		system("cls");
        		printf("\nReady To Catch It");
        		sleep(1);
        		system("cls");
        		multiple:
        		if(wdraw>=100 && wdraw%100 == 0 )
        		{
        			if (amount>=wdraw)
        			{
        				for(i=1;i<=wdraw/100;i++)
        				{
        					printf("\n\n\n");
        					money();
        					printf("\n\n\n");
        					sleep(1);
						}
						sleep(5);
        				system("cls");
        				amount = amount - wdraw;
        				printf("Remaining Amount  : %d",amount);
        				goto balance;
        					
					}
					else
					{
						printf("\n\n\n\t\t\tinsufficient balance ");
						sleep(2);
						system("cls");
						goto insbal;
					}
        		
							
				       			
				}
				else
				{
					
					system("cls");
					withdraw();
					printf("\nEnter in the multiple of 100 : ");
					scanf("%d",&wdraw);
					goto multiple;
				}
        		
        		
        		
			}
        	if(options==2)
        	{
        		balance();
        		printf("\b\b\b\t\t\t\t\t%d",amount);
        		sleep(5);
        		goto balance;
			}
			if(options==3)
			{
				int current_pin,new_pin;
				change_pin();
				printf("Enter current pin");
				scanf("%d",&current_pin);
				if(current_pin == pswd)
				{
					system("cls");
					printf("Enter new pin");
					scanf("%d",&new_pin);
					printf("Please wait ...");
					sleep(5);
					printf("Successfull changed");
					goto balance;
					
				}
				else
				{
					printf("Wronge PIN");
					goto balance;
				}
				
				
			}
			if(options==4)
			{
				statement();
				printf("Not yet\n");
				sleep(1);
				printf("Programmer MoM's Calling\n");
				sleep(1);
				printf("Next Time he work on it.\n");
				sleep(5);
				goto balance;
			}
        	
		}
        
        else
        {
        	printf("Wronge input\n");
 	    	printf("Enter Option again between (1~4) : ");
 	    	goto retry;
		}
            	
    
        
    }
    else
    {
        system("cls");
        wrong();
    }
    getch();
}

void home()
{
    printf("\033[1;32m\n");
    

  
    printf("\033[0m");
    printf("\033[1;31m");    
    printf("  _      ____   ____ _______ ______ _____              ____          _   _ _  __ \n");
    printf(" | |    / __ \\ / __ \\__   __|  ____|  __ \\     /\\     |  _ \\   /\\   | \\ | | |/ / \n");
    printf(" | |   | |  | | |  | | | |  | |__  | |__) |   /  \\    | |_) | /  \\  |  \\| | ' /  \n");
    printf(" | |   | |  | | |  | | | |  |  __| |  _  /   / /\\ \\   |  _ < / /\\ \\ | . ` |  <   \n");
    printf(" | |___| |__| | |__| | | |  | |____| | \\ \\  / ____ \\  | |_) / ____ \\| |\\  | . \\  \n");
    printf(" |______\\____/ \\____/  |_|  |______|_|  \\_\\/_/    \\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n");                                                                                                                                                             
    printf("____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ \n");
    printf("|____|____|____|____|____|____|____|____|____|____|____|____|____|____|____|____|____|\n");
    printf("\033[0m");
    printf("\033[1;31m");
    printf("\t\t\t\tWelcome");                                                                                                                                                                   
    printf("\033[0m");                                                                                                                                  
}   
void wrong()
{   
    printf("\033[1;31m");
    printf("        ___           	               \n");
    printf("       / \\ \\                          \n");
    printf("      / / \\ \\ 	            __          __  _____     ____    _   _    _____     _____    _____   _   _  \n");
    printf("     / / _ \\ \\              \\ \\        / / |  __ \\   / __ \\  | \\ | |  / ____|   |  __ \\  |_   _| | \\ | | \n");
    printf("    / / | | \\ \\              \\ \\  /\\  / /  | |__) | | |  | | |  \\| | | |  __    | |__) |   | |   |  \\| | \n");
    printf("   / /  | |  \\ \\              \\ \\/  \\/ /   |  _  /  | |  | | | . ` | | | |_ |   |  ___/    | |   | . ` | \n");
    printf("  / /   |_|   \\ \\              \\  /\\  /    | | \\ \\  | |__| | | |\\  | | |__| |   | |       _| |_  | |\\  | \n");
    printf(" / /____(_)____\\_\\              \\/  \\/     |_|  \\_\\  \\____/  |_| \\_|  \\_____|   |_|      |_____| |_| \\_| \n");
    printf("|_________|_______|  	                \n");
    printf("\033[0m");    
    printf("\n");                                                                                                                                                        
}

void menu()
{
	printf("\033[1;32m\n");
	printf("  __      __          __  _   _     _           _                                ___                                                       _   \n "); 
	printf("/_ |     \\ \\        / / (_) | |   | |         | |                              |__ \\          /\\                                         | |  \n "); 
	printf(" | |      \\ \\  /\\  / /   _  | |_  | |__     __| |  _ __    __ _  __      __       ) |        /  \\     _ __ ___     ___    _   _   _ __   | |_ \n "); 
	printf(" | |       \\ \\/  \\/ /   | | | __| | '_ \\   / _` | | '__|  / _` | \\ \\ /\\ / /      / /        / /\\ \\   | '_ ` _ \\   / _ \\  | | | | | '_ \\  | __|\n "); 
	printf(" | |  _     \\  /\\  /    | | | |_  | | | | | (_| | | |    | (_| |  \\ V  V /      / /_   _   / ____ \\  | | | | | | | (_) | | |_| | | | | | | |_ \n "); 
	printf(" |_| (_)     \\/  \\/     |_|  \\__| |_| |_|  \\__,_| |_|     \\__,_|   \\_/\\_/      |____| (_) /_/    \\_\\ |_| |_| |_|  \\___/   \\__,_| |_| |_|  \\__|\n "); 
	printf("\n");
	printf("\n");
	printf("  ____         _____ _                                      _____    _____   _   _     _  _          _____   _             _                                       _     \n ");
	printf(" |___ \\       / ____| |                                    |  __ \\  |_   _| | \\ | |   | || |        / ____| | |           | |                                     | |    \n ");
	printf("   __) |     | |    | |__   __ _   _ __     __ _    ___    | |__) |   | |   |  \\| |   | || |_      | (___   | |_    __ _  | |_    ___   _ __ ___     ___   _ __   | |_   \n ");
	printf("  |__ <      | |    | '_ \\ / _` | | '_ \\   / _` |  / _ \\   |  ___/    | |   | . ` |   |__   _|      \\___ \\  | __|  / _` | | __|  / _ \\ | '_ ` _ \\   / _ \\ | '_ \\  | __|  \n ");
	printf("  ___) |  _  | |____| | | | (_| | | | | | | (_| | |  __/   | |       _| |_  | |\\  |      | |    _   ____) | | |_  | (_| | | |_  |  __/ | | | | | | |  __/ | | | | | |_   \n ");
	printf(" |____/  (_)  \\_____|_| |_|\\__,_| |_| |_|  \\__, |  \\___|   |_|      |_____| |_| \\_|      |_|   (_) |_____/   \\__|  \\__,_|  \\__|  \\___| |_| |_| |_|  \\___| |_| |_|  \\__|  \n ");
	printf("                                            __/ |                                                                                                                        \n ");
	printf("                                           |___/                                                                                                                         \n ");
	printf("\n");
	printf("\033[0m");
}

void withdraw()
{
	printf("\033[1;32m\n");
	printf("\t\t\t __          __  _   _     _           _                            \n ");
	printf("\t\t\t \\ \\        / / (_) | |   | |         | |                           \n ");
	printf("\t\t\t  \\ \\  /\\  / /   _  | |_  | |__     __| |  _ __    __ _  __      __ \n ");
	printf("\t\t\t   \\ \\/  \\/ /   | | | __| | '_ \\   / _` | | '__|  / _` | \\ \\ /\\ / / \n ");
	printf("\t\t\t    \\  /\\  /    | | | |_  | | | | | (_| | | |    | (_| |  \\ V  V /  \n ");
	printf("\t\t\t     \\/  \\/     |_|  \\__| |_| |_|  \\__,_| |_|     \\__,_|   \\_/\\_/   \n ");
	printf("\t\t\t                                                                    \n ");
	printf("\n");
	printf("\033[0m");
}

void balance()
{
	printf("\033[1;32m\n");
	printf("\t\t\t                                                 _    \n");
	printf("\t\t\t     /\\                                         | |   \n");
	printf("\t\t\t    /  \\     _ __ ___     ___    _   _   _ __   | |_  \n");
	printf("\t\t\t   / /\\ \\   | '_ ` _ \\   / _ \\  | | | | | '_ \\  | __| \n");
	printf("\t\t\t  / ____ \\  | | | | | | | (_) | | |_| | | | | | | |_  \n");
	printf("\t\t\t /_/    \\_\\ |_| |_| |_|  \\___/   \\__,_| |_| |_|  \\__| \n");
	printf("\n");
	printf("\033[0m");
	
}

void change_pin()
{
	printf("\033[1;32m\n");
	printf("\t\t\t   _____   _                                       _____    _____   _   _  \n");
	printf("\t\t\t  / ____| | |                                     |  __ \\  |_   _| | \\ | | \n");
	printf("\t\t\t | |      | |__     __ _   _ __     __ _    ___   | |__) |   | |   |  \\| | \n");
	printf("\t\t\t | |      | '_ \\   / _` | | '_ \\   / _` |  / _ \\  |  ___/    | |   | . ` | \n");
	printf("\t\t\t | |____  | | | | | (_| | | | | | | (_| | |  __/  | |       _| |_  | |\\  | \n");
	printf("\t\t\t  \\_____| |_| |_|  \\__,_| |_| |_|  \\__, |  \\___|  |_|      |_____| |_| \\_| \n");
	printf("\t\t\t                                    __/ |                                  \n");
	printf("\t\t\t                                   |___/                                   \n"); 
	printf("\n");
	printf("\033[0m");
	
}

void statement()
{
	printf("\033[1;32m\n");
	printf("\t\t\t   _____   _             _                                       _    \n");
	printf("\t\t\t  / ____| | |           | |                                     | |   \n");
	printf("\t\t\t | (___   | |_    __ _  | |_    ___   _ __ ___     ___   _ __   | |_  \n");
	printf("\t\t\t  \\___ \\  | __|  / _` | | __|  / _ \\ | '_ ` _ \\   / _ \\ | '_ \\  | __| \n");
	printf("\t\t\t  ____) | | |_  | (_| | | |_  |  __/ | | | | | | |  __/ | | | | | |_  \n");
	printf("\t\t\t |_____/   \\__|  \\__,_|  \\__|  \\___| |_| |_| |_|  \\___| |_| |_|  \\__| \n");
	printf("\n");
	printf("\033[0m");
}
 
void money()
{
	printf("\033[1;32m\n");
	
	printf("\t\t\t ||====================================================================|| \n");
	printf("\t\t\t ||//$\\\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\//$\\\\|| \n");
	printf("\t\t\t ||(100)==================| LOOTERA RESERVE NOTE |================(100)|| \n");
	printf("\t\t\t ||\\$//        ~         '------========--------'                 \\\\$//|| \n");
	printf("\t\t\t ||<< /        /$\\              // ____ \\                          \\ >>|| \n");
	printf("\t\t\t ||>>|  12    //L\\\\            // ///..) \\\\         L38036133B   12 |<<|| \n");
	printf("\t\t\t ||<<|        \\ //           || <||  >\\  ||                         |>>|| \n");
	printf("\t\t\t ||>>|         \\$/            ||  $$ --/  ||        One Hundred     |<<|| \n");
	printf("\t\t\t ||<<|      L38036133B        *\\\\  |\\_/  //* series                 |>>|| \n");
	printf("\t\t\t ||>>|  12                     *\\\\/___\\_//*   1989                  |<<|| \n");
	printf("\t\t\t ||<<\\      Treasurer    _______/Franklin\\________     Secretary 12 />>|| \n");
	printf("\t\t\t ||//$\\                  ~|LOOTERA BANK OF INDIA |~                /$\\\\|| \n");
	printf("\t\t\t ||(100)===================  ONE HUNDRED DOLLARS =================(100)|| \n");
	printf("\t\t\t ||\\$//\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\//\\\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\\$/|| \n");
	printf("\t\t\t ||====================================================================|| \n");
	printf("\n");
	printf("\033[1;32m\n");
}



                                                                       
                                                                                

