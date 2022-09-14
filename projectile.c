#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    double h0 = 20, h1, hmax, t1, t2, t, range, v0 = 20, v0y, v0x, theta = 0, N = 90;
    FILE * fileout1;
    fileout1 = fopen("sim", "w+");

    for(int i = 0; i < N; i = i + 1)
    {
        v0y = v0 * sin(theta * M_PI / 180);
        v0x = v0 * cos(theta * M_PI / 180);
        t1 = v0y / 9.8;
        h1 = 0.5 * 9.8 * pow(t1, 2);
        hmax = h0 + h1;
        t2 = pow( (2 * hmax / 9.8), 0.5 );
        t = t1 + t2;
        range = v0x * t;
        fprintf(fileout1, "%12.6lf %12.6lf\n", theta, range);
        theta += 1;
    }

    fclose(fileout1);
}
