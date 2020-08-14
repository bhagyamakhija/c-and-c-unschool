#define MSDOS
#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define MAX_NO 91
#ifdef MSDOS
#include<conio.h>
#endif // MSDOS

//Function prototype
int LeapYear(int Year);
int getZeller(int Month,int Year);
void printchar(char CH);
void textbackground(int color);
int getKey();
void SetColor(int value);

int main()
{
    char char1='-';
    system("Color E4");
    printf("\n\t\t\tThis is a calendar application!");

    int Year=0,Month=0;
    char control;

    char Value[7];
    char cyear[]="YEAR";
    char cmonth[]="MONTH";

 while(true){
        printf("\n\nEnter YEAR or MONTH to view Calendar!\n");
        scanf("\n%s",&Value);

        //nested if else for printing year or month calender
//**********************************************************************************************************
    if((strcmp(Value,cyear))==0){


//******************************************printing calendar of complete year
         while(true){
        //Loop continues until a valid value is input and
        //it reaches break statement

        system("cls");
        SetColor(225);
        printf("\n\t\t\tEnter year:");
        scanf("%d",&Year);
        if(Year<0){
            printf("\nInvalid Year value");
            continue;
        }
        if(Year<1500||Year>4500){
            printf("Invalid Year Value");
            continue;
        }
        break;
    }


do{
     printf("\n\n\t\tYEAR-%d",Year);

    system("cls");
    system("Color 3F");
    for(int month=1;month<=12;month++){

       int MonthDay[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char *MonthName[]={"January","February","March","April","May","June","July","August","September",
    "October","November","December"};
    char *MonthNameShort[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};

      int Zeller=getZeller(month,Year);  //Function call

    printf("\n\n\t\t\t");

    SetColor(241);
    printf("  %s %d  ",MonthName[month-1],Year);

    SetColor(63);
    printf("\n");
    if(LeapYear(Year)==0){
        MonthDay[1]=29;
    }
    else{
        MonthDay[1]=28;
    }
    printchar(char1);
    printf("\t");
    SetColor(52);
    printf("SUN");
    SetColor(63);
    printf("    MON    TUE    WED    THU    FRI    SAT");

    printchar(char1);

    int j;
    for(int i=1;i<=Zeller;i++)
        printf("\t-");
        j=Zeller;

        for(int i=1;i<=MonthDay[month-1];i++){
            if(j++%7==0){

                printf("\n\t");
                printf("%2d",i);

            }
            else{
                printf("     %2d",i);
            }
        }

        printchar(char1);

    }
        printf("\n\n\t\t(*) Use Left,Right,Up,Down,Enter,Esc keys");
        control=getch();

 bool Proceed=false;
#ifdef MSDOS
    Proceed=_kbhit();
#else
    Proceed=true;
#endif // MSDOS

    if(Proceed){
#ifdef MSDOS
        control=_getch();
#else
        cin.get(control);
        cin.get();
#endif

        switch(control){

        case -32:
            continue;
            break;
        case 'p':
        case 'P':
        case 72:
        case 75:
           Year -=1;
          break;

        case 'n':
        case 'N':
        case 13:
        case 77:
            Year +=1;
            break;

        default:
            printf("Wrong Input!");
            continue;
            break;

        };
    }
}while(control!=27);
        break;

    }

//**********************************************************************************************************
    else if((strcmp(Value,cmonth))==0){

//***********************************************printing calendar of specific month

   while(true){
        //Loop continues until a valid value is input and
        //it reaches break statement

        printf("\n\tEnter month and year in mm-yyyy format.");
        scanf("%d-%d",&Month,&Year);
        if(Year<0){
            printf("\nInvalid Year value");
            continue;
        }
        if(Year<1500||Year>4500){
            printf("Invalid Year Value");
            continue;
        }
        if(Month<1||Month>12){
            printf("\nInvalid Month Value");
            continue;
        }
        break;
    }


  do{

    int MonthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char *MonthName[]={"January","February","March","April","May","June","July","August","September",
    "October","November","December"};
    char *MonthNameShort[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};

     system("Color 3F");
     int Zeller=getZeller(Month,Year);  //Function call
    system("cls");
    printf("\n\n\t\t\t");

    SetColor(241);
    printf("  %s %d  ",MonthName[Month-1],Year);

    SetColor(63);
    printf("\n");
    if(LeapYear(Year)==0){
        MonthDay[1]=29;
    }
    else{
        MonthDay[1]=28;
    }
    printchar(char1);
    printf("\t");
    SetColor(52);
    printf("SUN");
    SetColor(63);
    printf("    MON    TUE    WED    THU    FRI    SAT");

    printchar(char1);

    int j;
    for(int i=1;i<=Zeller;i++)
        printf("\t-");
        j=Zeller;

        for(int i=1;i<=MonthDay[Month-1];i++){
            if(j++%7==0){

                printf("\n\t");
                printf("%2d",i);

            }
            else{
                printf("     %2d",i);
            }
        }

        printchar(char1);

        printf("\n\n\t\t(*) Use Left,Right,Up,Down,Enter arrow keys");
        control=getch();

         bool Proceed=false;
#ifdef MSDOS
    Proceed=_kbhit();
#else
    Proceed=true;
#endif // MSDOS

    if(Proceed){
#ifdef MSDOS
        control=_getch();
#else
        cin.get(control);
        cin.get();
#endif
        switch(control){

        case -32:
            continue;
            break;
        case 'p':
        case 'P':
        case 72:
        case 75:
            Month--;
            if(Month<1)
            {
                Month+=12;
                Year -=1;
            }
          break;
        case 'n':
        case 'N':
        case 13:
        case 77:
            Month++;
            if(Month>12){
                Month -=12;
                Year +=1;
            }
            break;
        default:
            printf("Wrong Input!");
            continue;
            break;

        };
    }
  }while(control!=27);

        break;
    }
//**********************************************************************************************************

//***********************if value entered is wrong
    else{
        printf("Invalid value");
        continue;
    }

 }

    return 0;

}

//**********************************************************************************************************
//Leap year testing function

int LeapYear(int Year){    //Function Declaration
  if(Year<0){
    return -1;
  }
  else if(Year%4==0){
    if(Year%100==0){
        if(Year%400==0){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return 0;
    }
  }
  else{
    return -1;
  }
}


//Zellers algorithm function

int getZeller(int Month,int Year){
   int Day=1,ZMonth,ZYear,Zeller;
   if(Month<3){
    ZMonth=Month+10;
   }
   else{
    ZMonth=Month-2;
   }
   if(ZMonth>10){
    ZYear=Year-1;
   }
   else{
    ZYear=Year;
   }

   Zeller=((int)((13*ZMonth-1)/5)+Day+ZYear%100+(int)((ZYear%100)/4)-
           2*(int)(ZYear%100)+(int)(ZYear/400)+77)%7;
           return Zeller;
}

//printchar function for boundary

void printchar(char c){
int i;
printf("\n\t");
for(i=1;i<=50;i++)
    printf("%c",c);
printf("\n");
}

//colouredtext
void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}


