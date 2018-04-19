#include<stdio.h>
#include<stdlib.h>

double HornerEvaluate (double , double * , unsigned int );

int main()
{
	
	double x=-3;
	double COP[5]={1,0,5,-2,-32};//{1,3,-5,1,-25};//{1,0,3,9,2};//{1,0,5,-2,-32};//{1,5,3,-7,45};
	unsigned int DegreeOfPolynomial=4;

	double result= HornerEvaluate (x, COP, DegreeOfPolynomial);

	printf("THE RESULT IS : %lf\n",result);




	return 0;
}

double HornerEvaluate (double x, double * CoefficientsOfPolynomial, unsigned int DegreeOfPolynomial)
{
    /*
        We want to evaluate the polynomial in x, of coefficients CoefficientsOfPolynomial, using Horner's method.
        The result is stored in dbResult.
    */
    double dbResult = 0.0;
    int i;
    for(i = DegreeOfPolynomial; i >= 0; i--)
    {

    	printf("%lf\tX \t^\t %d\n",CoefficientsOfPolynomial[i],i);
        dbResult = dbResult * x + CoefficientsOfPolynomial[i];
    }
    return dbResult;
}




