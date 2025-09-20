#include<stdio.h>

int main(){
	int salary;
	int totalHoursWorked=0;
	int ratePerHour=0;
	printf("Salary of an hourly employee\n");
	printf("Total hours worked? ",totalHoursWorked );
	scanf("%d",&totalHoursWorked);
	printf("Rate per hour?",ratePerHour);
	scanf("%d",&ratePerHour);
	    salary = totalHoursWorked * ratePerHour;
	printf("salary : %d = %d * %d",salary, totalHoursWorked, ratePerHour);
		return 0;
}
