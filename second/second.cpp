#include <iostream>
#include <time.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;
//dynamic memory

//void bar((void) (*fn(void *)), double *vp1)
//{
//	cout << "bar 1" << endl;	
//	fn(vp1);
//	cout << "bar 2" << endl;
//}
 

void foo(void *vp)
{	
	double *dp = (double *)vp;
	cout << "In foo" << endl;
	*dp *= 2;
}

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main(int argc, char *argv[])
{
	
	int size = 10;
	int *arr = new int[size];
	double *d1 = new double(2.71);

	cout << *d1 << endl;
	
	//call function with calling subfunction
	//bar(foo,d1);
	
	
	
	//get random number
	srand(time(NULL));
	int r = rand();
		
	cout << r << endl;
	
	//qsort
	int x[] = {4,5,2,3,1,0,9,8,6,7};

    	qsort (x, sizeof(x)/sizeof(*x), sizeof(*x), comp);
	cout << sizeof(x) << endl;
	cout << sizeof(*x) << endl;

    for (int i = 0 ; i < 10 ; i++)
        cout << x[i] << endl;


	delete d1;
	delete [] arr;
	return 0;
}
