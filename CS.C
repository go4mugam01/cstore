#include <stdio.h>
#include<conio.h>
#include<ctype.h>

float oprice[10]={87.97,109.42,179.97,673.99,299.97,194.97,65.99,189.97,332.99,299.99};
float odisc[10]={15.0,12.0,8.5,5.5,9.5,33.3,4.5,7.5,12.5,8.4};
float oamt[10]={74.77,96.29,164.67,636.92,271.47,130.04,63.02,175.72,291.37,274.79};
char items[10]={'A','B','C','D','E','F','G','H','I','J'};

int number[10];
float total[10];
float stot;

void pay()
{
    printf("Created some version error in generatin the whole total.");
}

char reset()
{
   
    char input;
    clrscr();
    printf( "\t\t Dave's Discount Computers\n" );
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n"," "," Computer Part","                 Price", "   Disc %"," Number", "Amount"," Total");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","A"," 6GB PC6150 DDR3 800MHz Memory","  87.97","    15.0","     0","    74.77","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","B"," Quad Core Processor - 3.00GHz"," 109.42","    12.0","     0","    96.29","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","C"," Cordless Desktop Keyb & Mouse"," 179.97","     8.5","     0","   164.67","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","D"," Asus P6T LGA 1366 Motherboard"," 673.99","     5.5","     0","   636.92","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","E"," 28in Widescreen LCD Monitor","   299.97","     9.5","     0","   271.47","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","F"," Radeon HD 5770 Video Card 2GB"," 194.97","    33.3","     0","   130.04","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","G"," Sound Blaster Xtreme Audio","     65.99","     4.5","     0","    63.02","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","H"," Western Digital 2TB My Book","   189.97","     7.5","     0","   175.72","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","I"," Cisco 16-port10/100 VPN Routr"," 332.99","    12.5","     0","   291.37","  0.00");
    printf("%-1s%-15s%-6s%-6s%-6s%-6s%-6s\n","J"," HP Color LaserJet CP1215","      299.99","     8.4","     0","   274.79","  0.00");
 
    printf("\nSubTotal this order =	$0.00\n");
    printf("PST                   =	$0.00\n");
    printf("GST	                  =	$0.00\n");
    printf("TOTAL	              =	$0.00\n");

    printf( "SELECT (A-J), O-Override, R-Reset, -Correct, P-Pay, X-Exit ==>" );
    input=getchar();
	if(isupper(input))
	{
		return input;
	}
	else
	{
		input=toupper(input);
		return input;
	}
	
}


void override()
{
	float disc;
	char input;
	float amt;
	label:
    printf("\nItem to Override (A-J) ==>");
	scanf("%c", &input);
	printf("New Discount value for %c ==>", input);
	scanf("%.2f", &disc);	
	
	if(disc>=0.00 && disc<= 99.00)
	{
    switch (input) 
	{
	case 'A':
	
	amt=oamt[0]*disc/100;
	   total[0]=number[0]*amt;
	   
	    
	    break;
	case 'B':
	
	amt=oamt[1]*disc/100;
	 total[1]=number[1]*amt;
	    
	    
	    break;
	case 'C':
	
	amt=oamt[2]*disc/100;
	total[2]=number[2]*amt;

	
	    break;
	case 'D':
	amt=oamt[3]*disc/100;
	total[3]=number[3]*amt;
	
	    break;
	case 'E':
	amt=oamt[4]*disc/100;
	total[4]=number[4]*amt;
	
	
	    break;
	case 'F':
	amt=oamt[5]*disc/100;
	total[5]=number[5]*amt;
	    break;
	case 'G':
	amt=oamt[6]*disc/100;
	total[6]=number[6]*amt;
	
	    break;
	case 'H':
	amt=oamt[7]*disc/100;
total[7]=number[7]*amt;

	    break;
	case 'I':
	amt=oamt[8]*disc/100;
	total[8]=number[8]*amt;
	
	    break;
	case 'J':
	amt=oamt[9]*disc/100;
	total[9]= number[9]*amt; 
	break;
	case 'O':
	   override();
	    break;
    case 'R':
	
	        reset();
			break;
	case 'P':
			pay();
			break;
	case 'X': 
	    exit();
        break;
		  
    default:            
	    printf("\a Invalid input. Try again!");
         break;   
			
 }

	clrscr();
    printf( "\t\t Dave's Discount Computers\n" );
    printf("     Computer Part                    Price    Disc(%)  Number    Amount  Total\n");
    printf("A   6GB PC6150 DDR3 800MHz Memory     87.97     15.0     %d      74.77   %.2f\n",number[0],total[0]);
    printf("B   Quad Core Processor - 3.00GHz    109.42     12.0     %d      96.29   %.2f\n",number[1],total[1]);
    printf("C   Cordless Desktop Keyb & Mouse    179.97      8.5     %d     164.67   %.2f\n",number[2],total[2]);
    printf("D   Asus P6T LGA 1366 Motherboard    673.99      5.5     %d     636.92   %.2f\n",number[3],total[3]);
    printf("E   28in Widescreen LCD Monitor      299.97      9.5     %d     271.47   %.2f\n",number[4],total[4]);
    printf("F   Radeon HD 5770 Video Card 2GB    194.97     33.3     %d     130.04   %.2f\n",number[5],total[5]);
    printf("G   Sound Blaster Xtreme Audio        65.99      4.5     %d      63.02   %.2f\n",number[6],total[6]);
    printf("H   Western Digital 2TB My Book      189.97      7.5     %d     175.72   %.2f\n",number[7],total[7]);
    printf("I   Cisco 16-port10/100 VPN Routr    332.99     12.5     %d     291.37   %.2f\n",number[8],total[8]);
    printf("J   HP Color LaserJet CP1215         299.99      8.4     %d     274.79   %.2f\n",number[9],total[9]);
	
 stot=total[0]+total[1]+total[2]+total[3]+total[4]+total[5]+total[6]+total[7]+total[8]+total[9];
    printf("\nSubTotal this order =	%.2f\n",stot);
    printf("PST                   =	$0.00\n");
    printf("GST	                  =	$0.00\n");
    printf("TOTAL	              =	$0.00\n");

    printf( "SELECT (A-J), O-Override, R-Reset, -Correct, P-Pay, X-Exit ==>" );
	
	}
else{
	printf("The Discount price should be in a range 0-99");
}	
	
}

#DEFINE WINDOWS 1
 
void console_clear_screen() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}


void process(char in)
{   
char input=in;

    int n;
	
	
	
	label:
    printf("Enter the number of items in ");
	putchar(input);
	printf("==>");
	scanf("%d",&n);
	
 switch (input) {
	case 'A':
	
	total[0]=n*oamt[0];
	 number[0]=n;
	    
	    break;
	case 'B':
	
	total[1]=n*oamt[1];
	number[1]=n; 
	    break;
	case 'C':
	total[2]=n*oamt[2];
	 number[2]=n;
	    break;
	case 'D':
	total[3]=n*oamt[3];
	number[3]=n;
	    break;
	case 'E':
	total[4]=n*oamt[4];
	number[4]=n;
	    break;
	case 'F':
	total[5]=n*oamt[5];
	number[5]=n;
	    break;
	case 'G':
	total[6]=n*oamt[6];
	number[6]=n;
	    break;
	case 'H':
	total[7]=n*oamt[7];
	number[7]=n;
	    break;
	case 'I':
	total[8]=n*oamt[8];
	number[8]=n;
	    break;
	case 'J':

	total[9]=n*oamt[9];
	number[9]=n;   
	break;
	case 'O':
	   override();
	    break;
    case 'R':
	
	        reset();
			break;
	case 'P':
			pay();
			break;
	case 'X': 
	    exit();
        break;
		  
    default:            
	    printf("\a Invalid input. Try again!");
         break;   
			
 }

	clrscr();
    printf( "\t\t Dave's Discount Computers\n" );
    printf("     Computer Part                    Price    Disc(%)  Number    Amount  Total\n");
    printf("A   6GB PC6150 DDR3 800MHz Memory     87.97     15.0     %d      74.77   %.2f\n",number[0],total[0]);
    printf("B   Quad Core Processor - 3.00GHz    109.42     12.0     %d      96.29   %.2f\n",number[1],total[1]);
    printf("C   Cordless Desktop Keyb & Mouse    179.97      8.5     %d     164.67   %.2f\n",number[2],total[2]);
    printf("D   Asus P6T LGA 1366 Motherboard    673.99      5.5     %d     636.92   %.2f\n",number[3],total[3]);
    printf("E   28in Widescreen LCD Monitor      299.97      9.5     %d     271.47   %.2f\n",number[4],total[4]);
    printf("F   Radeon HD 5770 Video Card 2GB    194.97     33.3     %d     130.04   %.2f\n",number[5],total[5]);
    printf("G   Sound Blaster Xtreme Audio        65.99      4.5     %d      63.02   %.2f\n",number[6],total[6]);
    printf("H   Western Digital 2TB My Book      189.97      7.5     %d     175.72   %.2f\n",number[7],total[7]);
    printf("I   Cisco 16-port10/100 VPN Routr    332.99     12.5     %d     291.37   %.2f\n",number[8],total[8]);
    printf("J   HP Color LaserJet CP1215         299.99      8.4     %d     274.79   %.2f\n",number[9],total[9]);
	
 stot=total[0]+total[1]+total[2]+total[3]+total[4]+total[5]+total[6]+total[7]+total[8]+total[9];
    printf("\nSubTotal this order =	%.2f\n",stot);
    printf("PST                   =	$0.00\n");
    printf("GST	                  =	$0.00\n");
    printf("TOTAL	              =	$0.00\n");

    printf( "SELECT (A-J), O-Override, R-Reset, -Correct, P-Pay, X-Exit ==>" );
	input=getchar();
	if(isupper(input))
	{
		goto label;
	}
	else
	{
		input=toupper(input);
		goto label;
	}
		
	
}


void main()
{
    char ch;
	float price;
    char input=reset();
	check:
    switch (input) {
	case 'A':
	    
	    process(input);
	    break;
	case 'B':
	   
	    process(input);
	    break;
	case 'C':
	
	    process(input);
	    break;
	case 'D':
	
	    process(input);
	    break;
	case 'E':
	
	    process(input);
	    break;
	case 'F':
	
	    process(input);
	    break;
	case 'G':
	
	    process(input);
	    break;
	case 'H':
	
	    process(input);
	    break;
	case 'I':
	
	    process(input);
	    break;
	case 'J':
        
	    
	    process(input);
	    break;
	case 'O':

	   override();
	    break;
    case 'R':
	
	        input=reset();
			goto check;
			//break;
	case 'P':
			pay();
			break;
	case 'X': 
	    exit();
        break;
		  
    default:            
	    printf("\a");
            input=reset();
			goto check;
			//break;
    }
    getch();

}