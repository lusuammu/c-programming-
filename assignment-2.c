1.# include <stdio.h>

void main()
{
    int a, b, c, big ;

    printf("Enter three numbers : ") ;

    scanf("%d %d %d", &a, &b, &c) ;

    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;

    printf("\nThe biggest number is : %d", big) ;
}
: 2.include <stdio.h>

int main()
{
    char ch;
    
    /*
     * Input character from user
     */
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    /*
     * If (ch>'a' and ch<'z') or (ch>'A' and ch<'Z') then
     *     print alphabet
     * else
     *     print not alphabet
     */
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");

    return 0;
}
3.#include<stdio.h>
 
int main()
{
  int i, number, Sum = 0;
 
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  
  printf("\n Odd Numbers between 0 and %d are : ", number);
  for(i = 1; i <= number; i++)
  {
  	if ( i%2 != 0 ) 
  	{
  		printf("%d  ", i);
        Sum = Sum + i;
  	}
  }
  printf("\n \n The Sum of Odd Numbers from 1 to %d  = %d", number, Sum);

  return 0;
}
 4.#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n The Maximum Occurring Character in a Given String = %c ", result);
	
  	return 0;
}
5. #include <stdio.h>

int tmp = 20;

main( )

{

printf("%d ",tmp); // 20 will be printed here as "tmp" is a global variable.

func( );

printf("%d ",tmp); // 20 will be printed because global "tmp" variable is still unchanged.

}

func( )

{

static int tmp = 10; // static "tmp" has local scope.

printf("%d ",tmp); // 10 will be printed here.

}
6.#include<studio.h>
main() {
    int a = 10;      
    if ((fork ( ) == 0))      
    a++;      
    printf ("%dn", a ); 
}

Output:10
[1:03 PM, 3/24/2023] +91 93619 88007: 8.#include<stdio.h>

int main()
{
    int arr[]={2, 3, 4, 1, 6};
    printf("%u, %u, %u\n", arr, &arr[0], &arr);
    return 0;
}

Output 1200,1200,1200
 9.#include<stdio.h>
void fun(int **p);

int main()
{
    int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 8, 7, 8, 9, 0};
    int *ptr;
    ptr = &a[0][0];
    fun(&ptr);
    return 0;
}
void fun(int **p)
{
    printf("%d\n", **p);
}

Output: 1
 10.#llowing is the C program to sort names in alphabetical order −

#include<stdio.h>
#include<string.h>
main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter number of names :
");
   scanf("%d",&n);
   printf("Enter names in any order:
");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("
The sorted order of names are:
");
   for(i=0;i<n;i++){
      printf("%s
",str[i]);
   }
}
