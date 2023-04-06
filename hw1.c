#include <stdio.h>
#include <limits.h>

void ranges() {
 printf("signed char\n");
  printf("min val =%d\n", SCHAR_MIN);
  printf("max val =%d\n", SCHAR_MAX);
  printf("\n");
//make sure formatting is right
  printf("unsigned char\n");
  printf("min val =%d\n",0);
  printf("max val =%d\n",UCHAR_MAX);
  printf("\n");
//make sure formatting is right (%d or %c)
  printf("signed short\n");
  printf("min val =%hi\n",SHRT_MIN);
  printf("max val =%hi\n",SHRT_MAX);
  printf("\n");


  printf("unsigned short\n");
  printf("min val =%d\n",0);
  printf("max val =%hu\n",USHRT_MAX);
  printf("\n");
  


  printf("signed int\n");
  printf("min val =%i\n",INT_MIN);
  printf("max val =%i\n",INT_MAX);
  printf("\n");


  printf("unsigned int\n");
  printf("min val =%d\n",0);
  printf("max val =%u\n",UINT_MAX);
  printf("\n");
  


  printf("signed long\n");
  printf("min val =%li\n",LONG_MIN);
  printf("max val =%li\n",LONG_MAX);
  printf("\n");
    


  printf("unsigned long\n");
  printf("min val =%d\n",0);
  printf("max val =%lu\n",ULONG_MAX);
  printf("\n");

  printf("signed long long\n");
  printf("min val =%lli\n",LLONG_MIN);
  printf("max val =%lli\n",LLONG_MAX);
  printf("\n");
  

  printf("unsigned long long\n");
  printf("min val =%d\n",0);
  printf("max val =%llu\n",ULLONG_MAX);
  printf("\n");

	
}

int funProd1(int n) {
	// implement funProd1 using a for loop
	int product = 1;
	int i = 1;
	for(i=1; i <=n; ++i)
	{
	    if(i%3==0 ||i%7==0)
	    {
	    product =product*i;
	    
	    }
	}
	
	return product;
}

int funProd2(int n) {
    // implement funProd2 using a while loop
    int i = 1;
    int product = 1;
    while(i <=n)
    {
        if(i%3==0 ||i%7==0)
	    {
	    product =product*i;
	    
	    }
        i +=1;
    }
    return product;
}

int funProd3(int n) {
	// implement funProd3 using a do-while loop
	int i = 1;
    int product = 1;
    do{
        if(i%3==0 ||i%7==0)
	    {
	    product =product*i;
	    
	    }
        i +=1;
    }while(i<=n);
    
    return product;
	
}

int funProd4(int n) {
	// implement funProd4 using recursion 
    int product = 1;
    
    if(n==1) {
        //base case; stops recursion
	        return 1;
	    }else {
	        //I can get it to do 1*3
            if (n%3==0 || n%7==0){
                return n*funProd4(n-1);
                }
            else {
                return funProd4(n-1)
            ;
        }
	    
	}
}
	
void div_nums() {
	// implement mul_nums
	//inputs for two numbers
	//enter first number:
	//enter second num:
	//(first num)/second num =(answer; done in float point)
	//ause printt f to display the message;
	//allocate memory for two null-terminated strings  of 
	//length up to 9 characters using char number1[10] and 
	//char number2[10], then use function fgets to read 
	// the input into the strings,
	//then declare two integers num2 and num2 using int num1, num2
	//then use atoi to find more info to use atoi
	//finally make sure divided number is a float-point
	char number1[10];
	char number2[10];
	printf("Enter the first number: ");
	fgets(number1, sizeof(number1),stdin);
	int num1 = atoi(number1);
	
	printf("Enter the second number: ");
	fgets(number2, sizeof(number2),stdin);
	int num2 = atoi(number2);
	float num3 = (float)num1 / (float)num2;
	
	printf("%d / %d = %f",num1,num2, num3);
}

int main() {
	// do not modify this function
	int n = 10;
	printf("=== ranges ===\n");
	ranges();
	printf("=== funProd ===\n");
	printf("funProd1(%d) = %d\n", n, funProd1(n));
	printf("funProd2(%d) = %d\n", n, funProd2(n));
	printf("funProd3(%d) = %d\n", n, funProd3(n));
	printf("funProd4(%d) = %d\n", n, funProd4(n));
	printf("=== div_nums ===\n");
	div_nums();
	return 0;
}
