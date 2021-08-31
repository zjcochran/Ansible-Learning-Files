#include <stdio.h>

#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(int argc, char*argv[])
{
        FILE *fp;

        int temp = 0;
        fp = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
        fscanf(fp, "%d", &temp);
        printf(ANSI_COLOR_YELLOW ">> CPU Temp: %.2f°C\n" ANSI_COLOR_RESET, temp / 1000.0);
        fclose(fp);

        return 0;
}