#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
int start;
do
{
    start = get_int("Please enter a start size: ");
}
while (start < 9);

    // TODO: Prompt for end size
int end;
do
{
    end = get_int("Please enter a end size: ");
}
    while(end < start);

    // TODO: Calculate number of years until we reach threshold
int year = 0;

while(start < end)
{
    start =+ start/12;
    year++;
}
    // TODO: Print number of years
    printf("Years: %i\n", year);
}
