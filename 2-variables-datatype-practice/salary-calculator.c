#include <stdio.h>

#define TOTAL_WEEKS_IN_MONTH 4

int main() {
  int salaryPerHour, workedHoursPerWeek, totalSalary;

  printf("%s", "Enter you per hour salary: ");
  scanf("%d", &salaryPerHour);

  printf("%s", "Enter total worked hours in week: ");
  scanf("%d", &workedHoursPerWeek);

  totalSalary = (workedHoursPerWeek * TOTAL_WEEKS_IN_MONTH) * salaryPerHour;

  printf("%s $%d\n", "Your total per month salary is:", totalSalary);

  return 0;
}
