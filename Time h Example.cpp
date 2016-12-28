/* 23prg02.c: asctime() ve localtime() fonksiyonlarýnýn kullanýmý */

#include <stdio.h>
#include <time.h>

int main()
{
  time_t t;
  struct tm *date;

  time (&t);
  date = localtime (&t);

  printf(" tarih ve saat: %s",asctime(date));

 return 0;
}
