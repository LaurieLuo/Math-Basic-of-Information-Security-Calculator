//
// Created by Laurie Luo on 10/15/22.
//
#include <cstdio>
void BezoutsIdentity(long long a, long long b) {
    int j = 0;
    long long Rj[200], Rjp1[200], Qj[200], Rjp2[200], Sj[200], Tj[200];
    printf("\t-----------------------------------------------------\n");
    printf("\tj  \t   Rj \t Rj+1 \t Qj+1 \t Rj+2 \t   Sj \t   Tj \n");
    printf("\t-----------------------------------------------------\n");
    Rj[j] = a, Rjp1[j] = b, Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j], Sj[j] = 1, Tj[j] = 0;
    printf("\t%d \t%5lld \t%5lld \t%5lld \t%5lld \t%5lld \t%5lld \n", j, Rj[j], Rjp1[j], Qj[j], Rjp2[j], Sj[j], Tj[j]);
    j++;
    Rj[j] = Rjp1[j-1], Rjp1[j] = Rjp2[j-1], Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j], Sj[j] = 0, Tj[j] = 1;
    printf("\t%d \t%5lld \t%5lld \t%5lld \t%5lld \t%5lld \t%5lld \n", j, Rj[j], Rjp1[j], Qj[j], Rjp2[j], Sj[j], Tj[j]);
    while(Rjp2[j++] != 0) {
        Rj[j] = Rjp1[j-1], Rjp1[j] = Rjp2[j-1], Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j],
        Sj[j] = Sj[j-2]-Qj[j-2]*Sj[j-1], Tj[j] = Tj[j-2]-Qj[j-2]*Tj[j-1];
        printf("\t%d \t%5lld \t%5lld \t%5lld \t%5lld \t%5lld \t%5lld \n", j, Rj[j], Rjp1[j], Qj[j], Rjp2[j], Sj[j], Tj[j]);
    }
    Sj[j] = Sj[j-2]-Qj[j-2]*Sj[j-1], Tj[j] = Tj[j-2]-Qj[j-2]*Tj[j-1];
    printf("\t%d \t      \t      \t      \t      \t%5lld \t%5lld \n", j, Sj[j], Tj[j]);
    printf("\t-----------------------------------------------------\n");
    printf("\t (%lld)*%lld + (%lld)*%lld = gcd(%lld, %lld) = %lld\n", Sj[j], a, Tj[j], b, a, b, Rjp1[j-1]);
}