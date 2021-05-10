#include<ctype.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct Time {
    int hour,minute;
};

int main()
{
    int n,i,j,timeDiff,hourDiff,minuteDiff;

    struct Time city1,city2;

    printf("Enter time of the first city\n");
    printf("Hour: ");
    scanf("%d",&city1.hour);
    printf("Minute: ");
    scanf("%d",&city1.minute);

    printf("Enter time of the second city\n");
    printf("Hour: ");
    scanf("%d",&city2.hour);
    printf("Minute: ");
    scanf("%d",&city2.minute);

    timeDiff = abs((city1.hour*60 + city1.minute) - (city2.hour*60 + city2.minute));

    hourDiff = timeDiff/60;
    minuteDiff = timeDiff%60;

    printf("\nTime Difference: %d hours %d minutes\n", hourDiff, minuteDiff);

    return 0;
}
