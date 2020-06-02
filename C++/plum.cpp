#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
  cout << "  No. of customer\t  Demand perday\n\n";

  for(int x=0 ; x<=30 ; x++)
  {
    int a = 1 + rand()%100;//for nc
    int b = 1 + rand()&100;//for 1st p
    int c = 1 + rand()%100;
    int d = 1 + rand()%100;
    int A, B, C;//demand 1st, 2nd, 3rd customer

    if (a <= 15)
    {
      cout << "\t0\t\t\t0\n";//0 customer and 0 demand
    }
    else if (a > 15 && a <= 55)
    {
      cout << "\t1\t\t\t";//1 customer
      if (b <= 40)
      {
        cout << "1\n";
      }
      else if (b > 40 && b <= 70)
      {
        cout << "2\n";
      }
      else if (b > 70 && b <= 90)
      {
        cout << "3\n";
      }
      else
      {
        cout << "4\n";
      }
    }
    else if (a > 55 && a <= 80)//2 customer
    {
      cout << "\t2\t\t\t";
      if (b <= 40)
      {
        A = 1;//1st demand is 1
        if (c <= 40)
        {
          B = 1;//2nd demand is 1
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
        }
        else
        {
          B = 4;
        }
      }
      else if (b > 40 && b <= 70)
      {
        A = 2;
        if (c <= 40)
        {
          B = 1;
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
        }
        else
        {
          B = 4;
        }
      }
      else if (b > 70 && b <= 90)
      {
        A = 3;
        if (c <= 40)
        {
          B = 1;
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
        }
        else
        {
          B = 4;
        }     }
      else
      {
        A = 4;
        if (c <= 40)
        {
          B = 1;
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
        }
        else
        {
          B = 4;
        }
      }
      cout << A+B << endl;
    }
    else
    {
      cout << "\t3\t\t\t";
      if (b <= 40)
      {
        A = 1;
        if (c <= 40)
        {
          B = 1;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else
        {
          B = 4;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
      }
      else if (b > 40 && b <= 70)
      {
        A = 2;
        if (c <= 40)
        {
          B = 1;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else
        {
          B = 4;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
      }
      else if (b > 70 && b <= 90)
      {
        A = 3;
        if (c <= 40)
        {
          B = 1;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else
        {
          B = 4;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
      }
      else
      {
        A = 4;//1st demand is 4
        if (c <= 40)
        {
          B = 1;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 40 && c <= 70)
        {
          B = 2;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else if (c > 70 && c <= 90)
        {
          B = 3;
          if (d <= 40)
          {
            C = 1;
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
        else
        {
          B = 4;//2nd demand is 4
          if (d <= 40)
          {
            C = 1;//3rd demand is 1
          }
          else if (d > 40 && d <= 70)
          {
            C = 2;
          }
          else if (d > 70 && d <= 90)
          {
            C = 3;
          }
          else
          {
            C = 4;
          }
        }
      }
      cout << A+B+C << endl;
    }
  }
}
