#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int h0 = 40, h1, hmax, t1, t2, t, range, v0 = 20, v0, v0x, theta = 0, N = 90;
    FILE * fileout1;
    fileout1 = fopen(range, rangevals);

    for(int i = 0; i < N; i = i + 10)
    {
        theta += 10;
        v0y = v0 * sin(theta);
        v0x = v0 * cos(theta);
        t1 = v0y / 9.8;
        h1 = 0.5 * 9.8 * pow(t1, 2);
        hmax = h0 + h1;
        t2 = pow( (2 * hmax / 9.8), 0.5 );
        t = t1 + t2;
        range = v0x + v0y;
        fprintf(fileout1, "%12.6lf %12.6lf\n", theta, range);
    }

    }
    fclose(fileout1);
}
