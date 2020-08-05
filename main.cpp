#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<math.h>
#include<time.h>
using namespace std;

int main()
{
    //strlen retrieves length of the string
    char name[]="HELLO";
    int length1,length2;
     length1=strlen(name);
     length2=strlen("HELLO WORLD!");
     printf(" length of %s is %d\n length of HELLO WORLD! is %d\n",name,length1,length2);

    //strcat appends source to destination
    char dest[]="This is an ";
    char src[]="example.";

    strcat(dest,src);
    printf("Appended string: %s\n",dest);

    //strrchr gives remaining string or char after a certain char
    char Name[]="unschool";
    char ch='s';
    char* value;
    value=strrchr(Name,ch);
    printf("%s",value);

    //strcmp for comparing two strings
    char string1[]="abcd";
    char string2[]="abcd";
    int res=strcmp(string1,string2);
    if(res==0){
        printf("\nStrings are equal!");
    }
    else{
        printf("\nStrings are not equal!");
    }

    //strrev reverses a given string
    char s1[50]="1234567890";
    char *p;
    p=strrev(s1);
    printf("\nAfter reversing %s.",p);

    //strlwr and strupr
    printf("\n to lowercase: %s ",strlwr(string1));
    printf("\n to uppercase: %s",strupr(string1));

    //pow and sqrt
    int num;
    printf("\nEnter a number:");
    scanf("%d",&num);
    printf("\n square root of %d is %f",num,sqrt(num));
    printf("\n square of %d is %f",num,pow(num,2));

    //ceil
    printf("\n%f",ceil(2.5));

    //random number generator
    int i,n;
    n=5;
    srand(time(0));
    for(i=0;i<n;i++){
        printf("\n %d\n",rand()%50);
    }

      return 0;
}
