#include <stdio.h>

int main(void) {
  int SHour = 0, SMin = 0,
      EHour = 0, EMin = 0;
  int TotalHours = 0, TotalMins = 0;

  scanf("%d%d%d%d", &SHour, &SMin, &EHour, &EMin);

  if (SHour == EHour && SMin == EMin) {
    TotalHours = 24, TotalMins = 0;
  }
  else if (SHour == EHour && SMin < EMin) {
    TotalHours = 0, TotalMins = EMin - SMin;
  }
  else if (SHour == EHour && SMin > EMin) {
    TotalHours = 23, TotalMins = (60 + EMin) - SMin;
  }
  else if (SMin == EMin && SHour < EHour) {
    TotalHours = (EHour - SHour), TotalMins = 0;
  }
  else if (SMin == EMin && SHour > EHour) {
    TotalHours = (EHour + 24) - SHour, TotalMins = 0;
  }
  else if (SHour < EHour && SMin < EMin) {
    TotalHours = (EHour - SHour), TotalMins = (EMin - SMin);
  }
  else if (SHour > EHour && SMin > EMin) {
    TotalHours = (24 + EHour) - SHour, TotalMins = (60 + EMin) - SMin; 
  }
  else if (SHour < EHour && SMin > EMin) {
    TotalHours = EHour - SHour, TotalMins = (60 + EMin) - SMin;
  }
  else {
    TotalHours = (24 + EHour) - SHour, TotalMins = EMin - SMin;
  }

  if (SHour == (EHour - 1) && TotalMins > 0) {
    TotalHours--;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", TotalHours, TotalMins);

  return 0;
}
