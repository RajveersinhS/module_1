#include <stdio.h>

struct complex {
    float real;
    float imag;
};

void readComplex(struct complex *c) {
    printf("Enter real and imaginary parts respectively: ");
    scanf("%f %f", &c->real, &c->imag);
}

void writeComplex(struct complex c) {
    if(c.imag < 0)
        printf("Output Complex number: %.2f%.2fi\n", c.real, c.imag);
    else
        printf("Output Complex number: %.2f+%.2fi\n", c.real, c.imag);
}

struct complex addComplex(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

struct complex multiplyComplex(struct complex a, struct complex b) {
    struct complex c;
    c.real = (a.real * b.real) - (a.imag * b.imag);
    c.imag = (a.real * b.imag) + (a.imag * b.real);
    return c;
}

int main() {
    struct complex num1, num2, sum, product;

    readComplex(&num1);
    printf("Enter 1st complex number:\n");
    writeComplex(num1);

    readComplex(&num2);
    printf("Enter 2nd complex number:\n");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("Sum of the two complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the two complex numbers: ");
    writeComplex(product);

    return 0;
}
