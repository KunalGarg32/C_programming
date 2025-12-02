#include<stdio.h>
void main()
{
   int vehicle_number;
    int entry_hour, entry_minutes, exit_hour, exit_minute;
    int totaldurationhours;
    int totalamount;
    printf("Enter vehicle number :");
    scanf("%d", &vehicle_number);
    printf("Enter entry time (HH MM) :");
    scanf("%d %d", &entry_hour, &entry_minutes);
    printf("Enter exit time (HH MM) :");
    scanf("%d %d", &exit_hour, &exit_minute);
    int totalentryminutes = (entry_hour * 60) + entry_minutes;
    int totalexitminutes = (exit_hour * 60) + exit_minute;

    int totaldurationminutes = totalexitminutes - totalentryminutes;
     totaldurationhours = totaldurationminutes / 60;

    if(totaldurationhours <= 2)
    {
        totalamount = totaldurationhours * 5; 
    }
    else
    {
        totalamount = (2 * 5) + (totaldurationhours - 2) * 3;
    }
    printf("\n----PARKING RECEIPT----\n");
    printf("Vehicle Number : %d\n", vehicle_number);
    printf("Entry Time : %d hours %d minutes\n",totaldurationhours);
    printf("Total Amount : $%d\n",totalamount);
} 
