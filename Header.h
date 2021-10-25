
// define Note data structure 
// include day, month, year
// and char array of note
struct Reminder {
    char name[50];
    int day;
    int month;
    char description[512];
};


// define global array
// days in each month of a year
int days_in_month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


// define name of the months array
char* months[] = { " ","January","February","March","April",
                "May","June","July","August","September",
                "October","November","December" };

struct Reminder* reminders = NULL;