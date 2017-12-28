#include <stdio.h>
#include <math.h>

int main()
{
        int a;
        float aroot;

        printf("Type an integer: ");
        scanf("%d",&a);
        // abs convert negative numbers into possitive ones
        aroot = sqrt(abs(a));
        printf("The square root of %d is %f\n",abs(a),aroot);

        return(0);
}