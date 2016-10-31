#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define PI 3.14159265
void arithmetic();
void power();
void logarithm();
void inverse();
void trigonometric();
void factorial();
void permutations();
void combinations();
void exponent();
void invtrig();
void hyperbolic();
void invhyper();
void coordinate();
int a,b,c,fac=1,i,faca=1,facb=1,facc=1,j,k,z,choice;
float d,e,f,g,h;
char ans;
int main()
{
    do
    {
      system("cls");
      system("COLOR E1");
      printf("\n\n\n\n\n\n\n\t\t\t\t{( N A M A S K A R )}");
      printf("\n\t\t\t\t---------------------");
      printf("\n\n\n\n\n\n\n\n\n\n\t\t\t WELCOME TO DREAM UNIVERSAL CALCULATOR\n");
      for(i=0;i<11;i++)
      {
          int a=1,b=1;
	      printf("      .");
	      for(a=1;a<=32766;a++)
	      for(b=28500;b<=32766;b++)
	      {}
      }
      system("cls");
      system("COLOR  B4");
      printf("\n\t\t\t   DREAM UNIVERSAL CALCULATOR ");
	  printf("\n\t\t\t  ----------------------------");
	  printf("\n\n MENU");
	  printf("\n ----");
	  printf("\n\n 1.Arithmetic");
	  printf("\t\t\t 2.Power");
	  printf("\t\t\t 3.Logarithm");
	  printf("\n\n 4.Inverse");
	  printf("\t\t\t 5.Factorial");
	  printf("\t\t\t 6.Permutation");
	  printf("\n\n 7.Combination");
      printf("\t\t\t 8.Exponent");
	  printf("\t\t\t 9.Trigonometric");
	  printf("\n 10.Inverse Trig.");
	  printf("\t\t 11.Hyperbolic");
	  printf("\t\t\t12.Inverse Hyper");
	  printf("\n 13.Coordinate conversions");
	  printf("\t 14.Exit");

	  printf("\n\n Enter your choice(1-14):");
	  scanf("%d",&choice);
	  printf("\n\t\t Thinking");
	  for(i=0;i<5;i++)
      {
          int a=1,b=1;
	      printf(" .");
	      for(a=1;a<=32766;a++)
	      for(b=28500;b<=32766;b++)
	      {}
      }

       switch(choice)
	{
	    case 1:system("cls");
	           printf("\n\t\t\t\t ARITHMETIC");
	           printf("\n\t\t\t\t------------\n\n");
	           system("COLOR E4");
	           arithmetic();
		       break;

	    case 2:system("cls");
	           printf("\n\t\t\t\t POWER");
	           printf("\n\t\t\t\t-------\n\n");
	           system("COLOR E4");
	           power();
		       break;

	    case 3:system("cls");
	           printf("\n\t\t\t\t LOGARITHM");
	           printf("\n\t\t\t\t-----------\n\n");
	           system("COLOR E4");
	           logarithm();
               break;

	    case 4:system("cls");
	           printf("\n\t\t\t\t INVERSE");
	           printf("\n\t\t\t\t---------\n\n");
	           system("COLOR E4");
	           inverse();
		       break;

	    case 5:system("cls");
	           printf("\n\t\t\t\t FACTORIAL");
	           printf("\n\t\t\t\t-----------\n\n");
	           system("COLOR E4");
	           factorial();
		       break;

	    case 6:system("cls");
	           printf("\n\t\t\t\t PERMUTATION");
	           printf("\n\t\t\t\t-------------\n\n");
	           system("COLOR E4");
	           permutations();
		       break;

	    case 7:system("cls");
	           printf("\n\t\t\t\t COMBINATION");
	           printf("\n\t\t\t\t------------\n\n");
	           system("COLOR E4");
	           combinations();
		       break;

	    case 8:system("cls");
	           printf("\n\t\t\t\t EXPONENT");
	           printf("\n\t\t\t\t----------\n\n");
	           system("COLOR E4");
	           exponent();
		       break;

	    case 9:system("cls");
	           printf("\n\t\t\t\t TRIGONOMETRIC");
	           printf("\n\t\t\t\t---------------\n\n");
	           system("COLOR E4");
	           trigonometric();
		       break;

	    case 10:system("cls");
	            printf("\n\t\t\t\t INVERSE TRIGONOMETRIC");
	            printf("\n\t\t\t\t-----------------------\n\n");
	            system("COLOR E4");
	            invtrig();
		        break;

	    case 11:system("cls");
	            printf("\n\t\t\t\t HYPERBOLIC");
	            printf("\n\t\t\t\t------------\n\n");
	            system("COLOR E4");
	            hyperbolic();
		        break;

	    case 12:system("cls");
	            printf("\n\t\t\t\t INVERSE HYPERBOLIC");
	            printf("\n\t\t\t\t--------------------\n\n");
	            system("COLOR E4");
	            invhyper();
		        break;

        case 13:system("cls");
	            printf("\n\t\t\t\t COORDINATE CONVERSIONS");
	            printf("\n\t\t\t\t------------------------\n\n");
	            system("COLOR E4");
	            coordinate();
	            break;

        case 14:exit(0);

	    default:printf("\n\n\n\t\t YOU HAVE ENTERD A WRONG CHOICE!!!");
		        break;
       }

      for(i=0;i<5;i++)
      {
        int a=1,b=1;
        printf("\n      .\n");
	    for(a=1;a<=32766;a++)
	    for(b=28500;b<=32766;b++)
	    {}
      }

	  printf("\n\n\t\t WANT TO CHECK AGAIN???(Y/N)");
	  ans=getch();
	  getch();
    }
    while(ans=='y'||ans=='Y');
}
  void arithmetic()
  {
      printf("\n 1.Addition");
      printf("\t\t\t 2.Subtraction");
      printf("\t\t\t 3.Multiply");
      printf("\n\n 4.Division");
      printf("\n\n Enter your choice(1-4):");
      scanf("%d",&choice);
      switch(choice)
      {
	  case 1:printf("\n\n Enter two numbers: ");
	       scanf("%f%f",&d,&e);
	       f=d+e;
	       printf("\n Sum of the numbers is:%f",f);
	       break;

	  case 2:printf("\n\n Enter two numbers: ");
	       scanf("%f%f",&d,&e);
	       f=d-e;
	       printf("\n Subtraction of the numbers is:%f",f);
	       break;

	case 3:printf("\n\n Enter two numbers: ");
	       scanf("%f%f",&d,&e);
	       f=d*e;
	       printf("\n Multiplication of the numbers is:%f",f);
	       break;

	case 4:printf("\n\n Enter two numbers: ");
	       scanf("%f%f",&d,&e);
	       f=d/e;
	       printf("\n Division of the numbers is:%f",f);
	       break;

	default:printf("\n Wrong choice!!");
      }
  }

  void power()
  {
      printf("\n 1.Square");
      printf("\t\t\t 2.Square root");
      printf("\t\t\t 3.Cube");
      printf("\n\n 4.Cube root");
      printf("\t\t\t 5.Power");
      printf("\n\n Enter your choice(1-5):");
      scanf("%d",&choice);
      switch(choice)
      {
	case 1:printf("\n\n Enter a number:");
	       scanf("%d",&a);
	       c=pow(a,2);
	       printf("\n Square of the number is:%d",c);
	       break;

	case 2:printf("\n\n Enter a number:");
	       scanf("%f",&d);
	       e=sqrt(d);
	       printf("\n Square root of the number is:%f",e);
	       break;

	case 3:printf("\n\n Enter a number:");
	       scanf("%d",&a);
	       c=pow(a,3);
	       printf("\n Cube of the number is:%d",c);
	       break;

	case 4:printf("\n\n Enter a number:");
	       scanf("%f",&d);
	       e=cbrt(d);
	       printf("\n Cube of the number is:%f",e);
	       break;

	case 5:printf("\n\n Enter the base:");
		scanf("%d",&a);
		printf("\n Enter the power:");
		scanf("%d",&b);
		c=pow(a,b);
		printf("\n The result is:%d",c);
		break;

	default:printf("\n\n Wrong choice!!");
      }
  }

  void factorial()
  {
      printf("\n Enter a number:");
      scanf("%d",&a);
      for(i=1;i<=a;i++)
      fac=fac*i;
      printf("\n Factorial of %d is:%d",a,fac);
  }

  void permutations()
  {
      printf("\n Enter values of n and r:");
      scanf("%d%d",&a,&b);
      for(i=1;i<=a;i++)
      faca=faca*i;
      for(j=1;j<=a-b;j++)
      facb=facb*j;
      printf("\n Number of permutations:%d",faca/facb);
  }

  void combinations()
  {
      printf("\n Enter values of n and r:");
      scanf("%d%d",&a,&b);
      for(i=1;i<=a;i++)
      faca=faca*i;
      for(j=1;j<=a-b;j++)
      facb=facb*j;
      for(k=1;k<=b;k++)
      facc=facc*k;
      printf("\n Number of combinations:%d",(faca)/(facb*facc));
  }

  void trigonometric()
  {
    printf("\n 1.Sin");
    printf("\t\t\t 2.Cos");
    printf("\t\t\t 3.Tan");
    printf("\n 4.Cosec");
    printf("\t\t 5.Sec");
    printf("\t\t\t 6.Cot");
    printf("\n\n Enter your choice(1-6):");
    scanf("%d",&choice);
    switch(choice)
    {
	case 1:printf("\n Enter angle:");
	       scanf("%f",&d);
	       e=sin(d*PI/180);
	       printf("\n Sin %f:%f",d,e);
	       break;

	case 2:printf("\n Enter angle:");
	       scanf("%f",&d);
	       e=cos(d*PI/180);
	       printf("\n Cos %f:%f",d,e);
	       break;

	case 3:printf("\n Enter angle:");
	       scanf("%f",&d);
	       e=tan(d*PI/180);
	       printf("\n Tan %f:%f",d,e);
	       break;

	case 4:printf("\n Enter angle:");
	       scanf("%f",&d);
	       e=1/sin(d*PI/180);
	       printf("\n Cosec %f:%f",d,e);
	       break;

	case 5:printf("\n Enter angle:");
	       scanf("%f",&d);
	       e=1/cos(d*PI/180);
	       printf("\n Sec %f:%f",d,e);
	       break;

	case 6:printf("\n Enter angle:");
	       scanf("%f",&d);
	       e=1/tan(d*PI/180);
	       printf("\n Cot %f:%f",d,e);
	       break;

	default:printf("\n\n Wrong choice!!");
    }
  }

  void inverse()
  {
      printf("\n Enter a number:");
      scanf("%f",&d);
      e=1/d;
      printf("\n Inverse of the number is:%f",e);
  }

  void exponent()
  {
      printf("\n Enter the power of the exponent:");
      scanf("%d",&a);
      e=exp(a);
      printf("\n The result is:%f",e);
  }

void logarithm()
{
    printf("\n 1.Base 10");
    printf("\t\t\t 2.Base e");
    printf("\n\n Enter your choice(1-2):");
    scanf("%d",&choice);
    switch(choice)
    {
	case 1:printf("\n Enter a number:");
	       scanf("%f",&d);
	       e=log10(d);
	       printf("\n Logarithm of the number is:%f",e);
	       break;

	case 2:printf("\n Enter a number:");
	       scanf("%f",&d);
	       e=log(d);
	       printf("\n Logarithm of the number is:%f",e);
	       break;

	default:printf("\n\n Wrong choice!!");


    }
}

void invtrig()
{
    printf("\n 1.Sin");
    printf("\t\t 2.Cos");
    printf("\t\t 3.Tan");
    printf("\n Enter your choice(1-3):");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=asin(d)*180/PI;
	      printf("\n Sin inverse of the number is:%f",e);
	      break;

       case 2:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=acos(d)*180/PI;
	      printf("\n Cos inverse of the number is:%f",e);
	      break;

       case 3:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=atan(d)*180/PI;
	      printf("\n Tan inverse of the number is:%f",e);
	      break;

       default:printf("\n Wrong choice!!");
    }
}

void hyperbolic()
{
    printf("\n 1.Sin");
    printf("\t\t 2.Cos");
    printf("\t\t 3.Tan");
    printf("\n Enter your choice(1-3):");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=sinh(d);
	      printf("\n Hperbolic sin of the number is:%f",e);
	      break;

       case 2:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=cosh(d);
	      printf("\n Hyperbolic cos of the number is:%f",e);
	      break;

       case 3:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=tanh(d);
	      printf("\n Hyperbolic tan of the number is:%f",e);
	      break;

       default:printf("\n Wrong choice!!");
    }
}

void invhyper()
{
    printf("\n 1.Sin");
    printf("\t\t 2.Cos");
    printf("\t\t 3.Tan");
    printf("\n Enter your choice(1-3):");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=asinh(d);
	      printf("\n Inverse hperbolic sin of the number is:%f",e);
	      break;

       case 2:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=acosh(d);
	      printf("\n Inverse hyperbolic cos of the number is:%f",e);
	      break;

       case 3:printf("\n Enter the value:");
	      scanf("%f",&d);
	      e=atanh(d);
	      printf("\n Inverse hyperbolic tan of the number is:%f",e);
	      break;

       default:printf("\n Wrong choice!!");
    }
}

void coordinate()
{
    printf("\n 1.Rectangular to Polar");
    printf("\t\t 2.Polar to Rectangular");
    printf("\n\n Enter your choice(1-2):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\n Enter real and imaginary part:");
               scanf("%f%f",&d,&e);
               f=sqrt(pow(d,2)+pow(e,2));
               g=atan(e/d)*180/PI;
               printf("\n Polar representation:%f(%f)",f,g);
               break;

        case 2: printf("\n Enter R and angle:");
                scanf("%f%f",&f,&g);
                g*=PI/180;
                d=f*cos(g);
                e=f*sin(g);
                printf("\n Rectangular representation:%f+j%f",d,e);
                break;

        default:printf("\n Wrong Choice!!!");
    }

}
