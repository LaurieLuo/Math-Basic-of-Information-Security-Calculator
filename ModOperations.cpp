//
// Created by Laurie Luo on 10/15/22.
//
#include <cstdio>
#include <iostream>
void FastMod(long long base, long long index, long long m) {
    long long a = base, b = index;
    while(index) {
        if(index >= 2) {
            base = base * base % m;
            index -= 2;
        }
        else if(index == 1) {
            base %= m;
            index--;
        }
    }
    std::cout << a <<"^" << b << " (mod " << m <<") === " << base << " (mod " << m << ")" << '\n';
}
void Mod(long long a, long long m) {
    std::cout << a << " % " << m << " = " <<  a % m << '\n';
}
void InverseOfMod(long long a, long long p) {
    int j = 0;
    long long Rj[200], Rjp1[200], Qj[200], Rjp2[200], Sj[200];
    Rj[j] = a, Rjp1[j] = p, Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j], Sj[j] = 1;
    j++;
    Rj[j] = Rjp1[j-1], Rjp1[j] = Rjp2[j-1], Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j], Sj[j] = 0;
    while(Rjp2[j++] != 0) {
        Rj[j] = Rjp1[j-1], Rjp1[j] = Rjp2[j-1], Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j],
        Sj[j] = Sj[j-2]-Qj[j-2]*Sj[j-1];
    }
    Sj[j] = Sj[j-2]-Qj[j-2]*Sj[j-1];
    printf("The inverse of %lld(mod %lld): %lld*%lld === 1(mod %lld)\n", a, p, a, Sj[j], p);
}
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a%b);
}
long long lcm(long long a, long long b) {
    return a/gcd(a, b)*b;
}
void GCD(long long a, long long b) {
    printf("GCD(%lld, %lld) = %lld", a, b, gcd(a, b));
}
void LCM(long long a, long long b) {
    printf("LCM(%lld, %lld) = %lld", a, b, lcm(a, b));
}