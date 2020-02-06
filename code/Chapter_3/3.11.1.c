#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <windows.h>
#define KEY_DOWN(vk_c)(GetAsyncKeyState(vk_c)&0x8000)
#define ADDN 10000

void Add(int *A, unsigned int *B, float *C, double *D);
void Subtract(int *A_, unsigned int *B_, float *C_, double *D_);

int main(void)
{
    int A = 0;
    unsigned int B = 0;
    float C = 0;
    double D = 0;
    int A_ = 0;
    unsigned int B_ = 0;
    float C_ = 0;
    double D_ = 0;

    while (1)
    {
        Add(&A, &B, &C, &D);
        Subtract(&A_, &B_, &C_, &D_);
        puts("按下空格键暂停");
        if (KEY_DOWN(VK_SPACE))
            system("pause");
        system("cls");
    }

    system("pause");
    return 0;
}

void Add(int * A, unsigned int * B, float * C, double * D)
{
    puts("----------------- Add -----------------");
    printf("int A = %d\n", (*A) += ADDN);
    printf("unsigned int B = %d\n", (*B) += ADDN);
    printf("float C = %f\n", (*C) += ADDN);
    printf("double D = %f\n", (*D) += ADDN);
}

void Subtract(int * A_, unsigned int * B_, float * C_, double * D_)
{
    puts("--------------- Subtract ---------------");
    printf("int A_ = %d\n", (*A_) -= ADDN);
    printf("unsigned int B_ = %d\n", (*B_) -= ADDN);
    printf("float C_ = %f\n", (*C_) -= ADDN);
    printf("double D_ = %f\n", (*D_) -= ADDN);
}