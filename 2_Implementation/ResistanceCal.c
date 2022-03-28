#include<stdio.h>
#include<math.h>
void ColorCode()
{
    printf("**Color codes for all Resistances available**\n");
    printf("1.Black=0\n");
    printf("2.Brown=1\n");
    printf("3.Red=2\n");
    printf("4.Orange=3\n");
    printf("5.Yellow=4\n");
    printf("6.Green=5\n");
    printf("7.Blue=6\n");
    printf("8.Violet=7\n");
    printf("9.Gray=8\n");
    printf("10.White=9\n");
    printf("11.Gold=-1\n");
    printf("12.Silver=-2\n");

}
void Tolerance()
{
    printf("**Last Color Tolerances are as follows**\n");
    printf("1.Gold=0.05\n");
    printf("2.Silver=0.10\n");
    printf("3.No Color=0.20\n");
}
int main()
{ printf("**Check your Resistor from Left to Right**\n");
  
    ColorCode();
    Tolerance();
    int color_1;
    int color_2;
    int color_3;
    float color_4;
    printf("Enter your First color\n");
    scanf("%d",&color_1);
    printf("Enter your Second color\n");
    scanf("%d",&color_2);
    printf("Enter your Third color\n");
    scanf("%d",&color_3);
    printf("Enter your Fourth color\n");
    scanf("%f",&color_4);
    double mul=0;
    mul=pow(10,color_3);
    double temp;
    temp=(color_1*10)+color_2;
    double finalResult1=0;
    double finalResult2=0;
    double finalResult3=0;
    finalResult1=(temp*mul)/1000;
    printf("%0.2f\n",finalResult1);
    double code=finalResult1*color_4;
    finalResult2=finalResult1+code;
    finalResult3=finalResult1-code;

    printf("Resistance Range will be from %0.2f to %0.2f kohm\n",finalResult3,finalResult2);
    printf("***The final value of Resistance you want to calculate***");
    return 0;

}
