#include <iostream>

using std::cout;
using std::endl;


void mystrcpy(const char *src, char *dst)
{
	while (*dst++ = *src++);
}


//homework void div(int x, int y, int *rezult, int *reminder);
//compare 2 strings


const int capasity = 10;

int main(int argc, char *argv[])
{
	int a1[10];
	double a2[10];
	char a3[256];
	int *p1; 
	p1 = a1;




	a3[0]= 'H';
	a3[1]= 'e';
a3[2]= 'l';
a3[3]= 'l';
a3[4]= 'o';
a3[5]= '\0';
mystrcpy("hello",a3);

cout << a3 << endl;


	double *p2 = a2 + capasity - 1;

	int iv = 376;
	int *ip = &iv;
	int &ir = iv;
	
	ir = 483;
	cout << ir << endl;

	for (int i=0; i<capasity; i++, p1++, p2--)
	{
		*p1 = i+1;
		*p2 = (double)*p1;
		cout << p1 << endl;	
	}

	p1 = a1;
	(*p1) = 10;

	int sum1 = 0;
	double sum2 = 0.5;
	for (int i=0; i<capasity; i++)
	{
		sum1+=p1[i];
		sum2+=a2[i];
	}	

	cout << "sum1 = " << sum1 << ", sum2 =  " << sum2 << endl;

}
