#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
  float tc = 0, ch = 0, atc = 0;
  int q = 25, co = 0, cs = 0, oo = 0, oa, nc = 0, np = 0, rq = 0;
  //printf("    Quanlity\t Day\t Number of customer\tNumber of purchase item\t   Remaining of item\t Holding cost\t  Ordering cost\t  Shortage cost\t  Total cost\t\n\n\n\n ");
  printf("Quantity| Day| Number of customers| Number of purchase items| Number of remaining items| Holding cost| Ordering cost| Shortage cost| Total cost|\n");
  printf("________|____|____________________|_________________________|__________________________|_____________|______________|______________|___________|\n");
  for (int n = 1; n <= 30; ++n)
  {
    if (n == oa)
    {
      q += 25;
      oo = 0;
    }
    nc = 3;
    np = 6;
    rq = q - np;
    if (rq > 0)
    {
      ch = rq * 0.5;
    }
    if (rq <= 10 and oo == 0)
    {
      co = 45;
      oa = n + 2;
      oo = 1;
    }
    if (rq < 0)
    {
      cs = abs(rq) * 0.5;
    }
    tc = ch + co + cs;
    atc += tc;
    //printf("%2d\t\t %2d\t\t %2d\t\t %2d\t\t %2d\t\t %4.1f\t\t %2d\t\t %2d\t\t %2.2f\t\t\n  ",q,n,nc,np,rq,ch,co,cs,tc);
    printf("%8d| %3d| %19d|  %23d|  %24d|  %11f|  %12d|  %12d|  %9f|\n",q,n,nc,np,rq,ch,co,cs,tc);
    printf("________|____|____________________|_________________________|__________________________|_____________|______________|______________|___________|\n");
  
    q = rq;
    tc = 0;
    co = 0;
    ch = 0;
    cs = 0;
  }
  atc = atc / 30;
  printf("\n\n\t\tatc = %2.2f\n", atc);
  return 0;
}
