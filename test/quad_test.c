#include<ctest.h>
#include<quadratic.h>
CTEST(quadr_suite,no_root)
{
	double a=0;
	double b=0;
	double c=0;
	double d=0;
	double x1=0;
	double x2=0;
	int roots=quadratic_equation(a,b,c,&x1,&x2,&d);
	int ex_roots=-2;
	ASSERT_EQUAL(ex_roots,roots);
}

CTEST(quadr_suite,no_real_root)
{
	double a=4;
	double b=0;
	double c=3;
	double x1=0;
	double x2=0;
	double d=0;
	int roots=quadratic_equation(a,b,c,&x1,&x2,&d);
	int ex_roots=-1;
	double ex_d=-48;
	ASSERT_DBL_NEAR(ex_d,d);
	ASSERT_EQUAL(ex_roots,roots);
}

CTEST(quadr_suite,one_root)
{
	double a=1;
	double b=-2;
	double c=1;
	double x1=0;
	double x2=0;
	double d=0;
	int roots=quadratic_equation(a,b,c,&x1,&x2,&d);
	int ex_roots=1;
	double ex_d=0;
	double ex_x1=1;
	ASSERT_EQUAL(ex_roots,roots);
	ASSERT_DBL_NEAR(ex_d,d);
	ASSERT_DBL_NEAR(ex_x1,x1);
}
CTEST(quadr_suite,all_roots)
{
	double a=2;
	double b=-4;
	double c=1;
	double d=0;
	double x1=0;
	double x2=0;
	int roots=quadratic_equation(a,b,c,&x1,&x2,&d);
	int ex_roots=2;
	double ex_d=8;
	double ex_x1=0.292893;
	double ex_x2=1.707107;
	ASSERT_EQUAL(ex_roots,roots);
	ASSERT_DBL_NEAR(ex_d,d);
	ASSERT_DBL_NEAR(ex_x1,x1);
	ASSERT_DBL_NEAR(ex_x2,x2);
}  
