#include <stdio.h>

struct box_value
{
    float length, hight, width;
};

typedef struct box_value box;

void calculate_volume_surface_area(box *ptr)
{
    float volume = ptr->hight * ptr->length * ptr->width; // To find a volume
    float surface_area = 2 * (ptr->hight * ptr->length + ptr->hight * ptr->width + ptr->length * ptr->width);

    printf("Box volume is : %f ", volume);
    printf("Box surface area is : %f", surface_area);
}

int main()
{

    box e1;
    printf("Enter's Box parameters : "); // input parameters
    scanf("%f", &e1.length);
    scanf("%f", &e1.hight);
    scanf("%f", &e1.width);

    box *ptr = &e1;

    calculate_volume_surface_area(ptr);

    return 0;
}