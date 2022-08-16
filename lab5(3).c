//Write a function to take input length, width and height of cuboid as parameter and return the value of the volume of the cuboid.
#include <stdio.h>

 double volume(int length, int width, int height);

 int main(void)
 {
     int l,w,h;
     double output;
     printf("Input the length: ");
      scanf("%d",&l);
      printf("Input the width: ");
      scanf("%d",&w);
      printf("Input the height: ");
      scanf("%d",&h);
      output = volume(l,w,h);
      printf("The volume is %.2f\n",output);
      return 0;
  }

  double volume(int length, int width, int height)
  {
      double answer;
             answer = length * width * height;
      return answer;
        }
