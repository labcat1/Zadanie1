#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    float b;
    float c;
    float ans1;
    printf("Input A:");
    scanf("%f", &a);
    printf("\rInput B:");
    scanf("%f", &b);
    printf("\rInput C:");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("\rUnsolvable") ;
        }
        else
        {
            ans1 = -c/b;
            printf("\rLinear equation, x = %f",ans1);
        }
    }
    else
    {
        float D;
        D = b*b - 4*a*c;
        if (D >= 0)
        {
            float t;
            t = -b/(2*a);
            if (D == 0)
            {
                printf("\rSquare equation, x = %f", t);
            }
            else
            {
                float rD;
                float ans2;
                rD = sqrt(D)/(2*a);
                ans1 = t+rD;
                ans2 = t-rD;
                printf("\rSquare equation, x1 = %f, x2 = %f", ans1, ans2);
            }
        }
        else
            printf("\rSquare equation, no roots");
    }
}