//write functions to calculate area of a square,a circle  & rectangle.
#include<stdio.h>
#include<math.h>

float Area_Square(float side);
float Area_Circle(float radius);
float Area_Rectangle(float length, float breadth);
int main(){
    float length = 5.0;
    float breadth = 3.0;
    printf("Area of Rectangle : %f\n",Area_Rectangle(length,breadth));
    return 0;
}
float Area_Square(float side){
    return side*side;
}
float Area_Circle(float radius){
    return 3.14*radius*radius;
}
float Area_Rectangle(float length, float breadth){
    return length*breadth;
}
