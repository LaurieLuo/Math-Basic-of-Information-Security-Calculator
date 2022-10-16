//
// Created by Laurie Luo on 10/15/22.
//
#include <cstdio>
void usage() {
    printf("Usage:\n");
    printf("\tBasic modulo algorithms:\n");
    printf("\t\t1. Calculate x of a^b === x (mod m) (快速幂)----------------------------------- ./math fm a b m\n");
    printf("\t\t2. Calculate a mod b (模运算)-------------------------------------------------- ./math mod a b\n");
    printf("\t\t3. Calculate the Bezouts Identity of a and b (贝祖等式) ----------------------- ./math bz a b\n");
    printf("\t\t4. Calculate the inverse of a (mod p) (求a模p的逆)----------------------------- ./math inv a p\n");
    printf("\t\t5. Calculate GCD(a, b) (最大公因数)-------------------------------------------- ./math gcd a b\n");
    printf("\t\t6. Calculate GCD(a, b) (最小公倍数)-------------------------------------------- ./math lcm a b\n");
    printf("\t\t7. Calculate mod respeat square of a^b === x(mod m) (模重复平方法) ------------ ./math mrs a b m\n");
    printf("\t\t8. Judge if n is prime ------------------------------------------------------ ./math prm n\n");
    printf("\tQuadratic Residue algorithms:\n");
    printf("\t\t1. Calculate the Legendre Symbol of a and p (勒让德符号)----------------------- ./math ls a p\n");
    printf("\t\t2. Calculate the quadratic residue of mod p (模p的所有平方剩余和平方非剩余)------- ./math qr p\n");
}