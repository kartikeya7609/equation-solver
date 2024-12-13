#include <stdio.h>
#include <math.h>
float main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double k =(-b+sqrt(b*b-4*a*c))/(2*a);
    double y =(-b-sqrt(b*b-4*a*c))/(2*a);
    double z = b*b-4*a*c;
    if (z>0){
        printf("the roots are %lf and %lf ",k,y);

    }
    else if(z==0){
        printf("the roots are equal i.e %lf",k);
    }
    else if(z<0){
        double h = -b/2*a;
        double f = sqrt(-(b*b-4*a*c))/2*a;
        printf("the rooots are imaginary and they are %lf+i%lf and %lf-i%lf",h,f,h,f);

    }
    return 0;
}

