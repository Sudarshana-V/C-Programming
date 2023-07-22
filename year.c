#include<stdio.h>
void main()
{
  int date,month,year;
    scanf("%d/%d/%d",&date,&month,&year);
    int days=date;
    int a=month;
     switch(a)
     {
        case 01:
             days=date;
            break;
        case 02:
             days=31+date;
            break;
        case 03:
            days=59+date;
            break;
        case 04:
            days=90+date;
            break;
        case 05:
            days=120+date;
            break;
        case 06:
           days=151+date;
           break;
        case 7:
            days=181+date;
            break;
        case 8:
            days=212+date;
            break;
        case 9:
            days=243+date;
            break;
        case 10:
            days=273+date;
            break;
        case 11:
             days=304+date;
            break;
        case 12:
             days=334+date;
            break;
        default:
            break;
        }
          if(year%4==0 && month>2)
            days=days+1;
    printf("COMPLETED DAYS : %d DAYS",days);
}
