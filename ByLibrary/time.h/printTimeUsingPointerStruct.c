#include <time.h>
//**
Broken-down time is stored in the structure tm, which is defined in <time.h> as follows:
           struct tm {
               int tm_sec;    /* Seconds (0-60) */
               int tm_min;    /* Minutes (0-59) */
               int tm_hour;   /* Hours (0-23) */
               int tm_mday;   /* Day of the month (1-31) */
               int tm_mon;    /* Month (0-11) */
               int tm_year;   /* Year - 1900 */
               int tm_wday;   /* Day of the week (0-6, Sunday = 0) */
               int tm_yday;   /* Day in the year (0-365, 1 Jan = 0) */
               int tm_isdst;  /* Daylight saving time */
           };

**/
int main()
{
	time_t now;
	// structure that is a pointer variable
	struct tm *right_now;

	time(&now);
	// Filling the pointer structure right_now
	right_now = localtime(&now);

	// tm_mon counts from 0, therefore we need to add +1
	printf("Today is %d/%d at %d:%02d\n",
			right_now->tm_mon +1,
			right_now->tm_mday,
			right_now->tm_hour,
			right_now->tm_min );

	return(0);
}


/**
The ctime(), gmtime() and localtime() functions all take an argument
       of data type time_t
       
mktime : Convert tm structure to time_t (function )
localtime: Convert time_t to tm as local time (function )
gmtime: Convert time_t to tm as UTC time (function )
**/