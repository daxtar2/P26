#include<stdio.h>

//void exchange(int n_a, int n_b);
void exchange (int* number_a, int* number_b);
int main()
{
	int a = 2, b = 3;
	exchange(&a,&b);
	printf("a = %d,b = %d\n", a, b);
	return 0;
}
void exchange (int* number_a, int* number_b)
{  
	int temp;
 temp = * number_a;
* number_a = * number_b;
*number_b = temp;

}
//void exchange(int n_a, int n_b)
//{
//	int* p_a = &n_a;
//	int* p_b = &n_b;
//	printf("n_a = %d,n_b = %d\n", *p_b, *p_a);
//}
