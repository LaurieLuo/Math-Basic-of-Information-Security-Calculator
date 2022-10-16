//
// Created by Laurie Luo on 10/16/22.
//

#ifndef MATH_BASIC_OF_INFORMATION_SECURITY_CALCULATOR_HEADER_H
#define MATH_BASIC_OF_INFORMATION_SECURITY_CALCULATOR_HEADER_H
void usage();
void logic(int argc, char *argv[]);

void FastMod(long long base, long long index, long long m);
void Mod(long long a, long long m);
void InverseOfMod(long long a, long long p);
long long gcd(long long a, long long b);
long long lcm(long long a, long long b);
void GCD(long long a, long long b);
void LCM(long long a, long long b);
long long ModRespeatSquare(long long Base, long long Power, long long Mod);

int LegendreSymbolWithGauss(long long a, long long p);
void LegendreSymbol(long long a, long long p);
void BubbleSort(long a[], int f, int n);
void QuadraticResidueModP(long p);
void BezoutsIdentity(long long a, long long b);
#endif //MATH_BASIC_OF_INFORMATION_SECURITY_CALCULATOR_HEADER_H
