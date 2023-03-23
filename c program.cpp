1)
#include<stdio.h>
int main(){
    int arr[]={6,12,18,24};
    int x=0;
    x=arr[1]+(arr[1]=2);
    printf("%d",x);
    return 0;
}

//Output : 14

2)
#include<stdio.h>

void main(){
    int i=3,val;
    val=sizeof f(i)+ +f(i=1)+ +f(i-1);
    printf("%d %d",val,i);
}
int f(int num){
    return num*5;
}

//Output : 9 1

3)
#include<stdio.h>

float avg(float,float,float);
void main(){
    float p=1,q=2,r=-2,a;
    a=avg(p,(q=4,r=-12,q),r);
    printf("%f",a);  
}
float avg(float x,float y,float z){
    return (x+y+z)/3;
}
// Output : -2.333333

4)
void main()
{
int const * p=5;
printf("%d",++(*p));
}

//Output : p is a constant so it creates an error.

5)
main()
{
int c[ ]={2.8,3.4,4,6.7,5};
int j,*p=c,*q=c;
for(j=0;j<5;j++) {
printf(" %d ",*c);
++q; }
for(j=0;j<5;j++){
printf(" %d ",*p);
++p; }
}
// Output : 2  2  2  2  2  2  3  4  6  5 

6)
main()
{
char string[]="Hello World";
display(string);
}
void display(char *string)
{
printf("%s",string);
}
// Output : Hello World

7)
  #include <stdio.h>

void main(){
	int n,i,j,k;
	printf("Enter n:");
	scanf("%d",&n);
	for (i = 1; i <= n; i++){
		for (k = 0; k <n-i;k++){
				printf(" ");
			}
		for (j = 1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

//Input : Enter n : 5
//Output : 
    1
   12
  123
 1234
12345

8)
#include <stdio.h>

void main(){	
	int i, first = -1;
    int arr[] = { 1, 2, 3, 6, 2 };
    int n = sizeof(arr) / sizeof(int);
    int x = 6;
    for (i = 0; i < n; i++) {
        if (x != arr[i]){
            continue;
    	}
        if (x == arr[i]){
        	first = i;
        	break;
    	}	
    }
    printf("%d",first);
}

//Output : 3

9)
#include "string.h"
typedef struct stu1{
    char name1[6];
    char name2[6];
    double marks;
}STU1;
void main(){
    STU1 s1={"rohit","kumar",87.43},*p1;
    char *p;
    p1=&s1;
    p=memchr(p1,'u',sizeof(STU1));
    printf("%s",p);  
}

//Output : umar

10)
#define square(x) x*x
main()
{
int i;
i = 64/square(4);
printf("%d",i);
}


//Output : 64
              
				
				
				
				
				
				
				
				
				
1) #include <stdio.h>

    int main() {
    int n1, n2, n3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);

    printf("The maximum between %d, %d and %d is: %d", n1, n2, n3, max);

    return 0;
}

				
2) #include <stdio.h>

    int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? printf("%c is an alphabet.", c) : printf("%c is not an alphabet.", c);

    return 0;
}

3) #include <stdio.h>

   int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }

    printf("The sum of all odd numbers from 1 to %d is %d.", n, sum);

    return 0;
}

				
4) #include <stdio.h>
   #include <string.h>

   #define ASCII_SIZE 256

   int main() {
    char str[100];
    int freq[ASCII_SIZE] = {0};
    int max_freq = -1;
    char max_char;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < strlen(str); i++) {
        if (freq[str[i]] > max_freq) {
            max_freq = freq[str[i]];
            max_char = str[i];
        }
    }

    printf("The maximum occurring character in the string is '%c' with frequency %d.", max_char, max_freq);

    return 0;
}

				
5) The Output is:
   201020

6) The Output is:
   1011

7) #include <stdio.h>

   int main() {
    int a = 1;

    while (a <= 100) {
        printf("%d", a * a);
        a++;
    }

    return 0;
}

8) The Output is: 
   1200, 1200, 1200

9) The Output is:
   error, as braces are missing around the initializers in line 5, 'amp' is undeclared, and a variable ptr is set but not used.

10) #include <stdio.h>
    #include <string.h>

    void sort_names(char names[][50], int n, int ascending) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ascending && strcmp(names[i], names[j]) > 0) || (!ascending && strcmp(names[i], names[j]) < 0)) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[10][50];
    int n;

    printf("Enter the number of names (up to 10): ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    int choice;
    printf("Enter 1 to sort names in ascending order, 0 for descending order: ");
    scanf("%d", &choice);

    sort_names(names, n, choice);

    printf("The sorted names are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				  





























