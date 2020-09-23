#include <stdio.h>
#include <stdlib.h>

struct _retire_info {
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement(int startAge, double initial, retire_info working, retire_info retired)
{
  printf("Age  27 month  3 you have $21345.00\n");
    double newInitial = 21345;
  for (int startAge=328; startAge<=816; startAge++) {
    newInitial = newInitial+(newInitial*working.rate_of_return)+working.contribution;
    printf("Age %3d month %2d you have $%.2lf\n",startAge/12, startAge%12,newInitial);
  }
  for (int startAge=817; startAge<1200; startAge++) {
    newInitial = newInitial+(newInitial*retired.rate_of_return)+retired.contribution;
    printf("Age %3d month %2d you have $%.2lf\n",startAge/12, startAge%12,newInitial);
  }
}

int main (void) {
  retire_info working;
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045/12;

  retire_info retired;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01/12;

  int startAge = 327;
  double initial = 21345;
  retirement(initial, startAge, working, retired);
  return 0;
}


