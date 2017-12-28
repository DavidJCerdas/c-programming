#include <stdio.h>

int main()
{
// This is an structure, is like a db of specific data
	struct record {
		int account;
		float balance;
	};

// Here you declare the structure my_back that uses the previous struct record created
    struct record my_back;

// here you assign values to the elements of the structure. 
    my_back.account = 123456;
    my_back.balance = 6543.21;

// Now print the values of the structure
printf("In the account %d , I have %.2f \n", my_back.account, my_back.balance);

	return(0);
}
