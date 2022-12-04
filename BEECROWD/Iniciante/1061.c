#include <stdio.h>

int main(void) {
  int SDay = 0, SHour = 0, SMin = 0, SSeg = 0,
        EDay = 0, EHour = 0, EMin = 0, ESeg = 0;
  int TDay = 0, THour = 0, TMin = 0, TSeg = 0;

  scanf("%d", &SDay);
  scanf("%d%d%d", &SHour, &SMin, &SSeg);

  scanf("%d", &EDay);
  scanf("%d%d%d", &EHour, &EMin, &ESeg);

  THour = (SHour > EHour) ? (EHour + 24) - SHour : EHour - SHour;
  TMin = (SMin > EMin) ? (EMin + 60) - SMin : EMin - SMin;
  TSeg = (SSeg > ESeg) ? (ESeg + 60) - SSeg : ESeg - SSeg;

  if (SDay != EDay && SHour > EHour) {
    TDay = (EDay - SDay) - 1;
  }
  else {
    TDay = EDay - SDay;
  }

  if (SHour < EHour && SMin > EMin) {
    THour--;
  }

  printf("%d dia(s)\n", TDay);
  printf("%d hora(s)\n", THour);
  printf("%d minuto(s)\n", TMin);
  printf("%d segundo(s)\n", TSeg);

  return 0;
}
