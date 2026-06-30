#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char city[50];
    float temperature;
    int humidity;
    float windSpeed;
    char condition[30];
} Weather;

void displayWeather(Weather w) {
    printf("\n========================================\n");
    printf("         WEATHER DASHBOARD\n");
    printf("========================================\n");
    printf("City        : %s\n", w.city);
    printf("Temperature : %.1f °C\n", w.temperature);
    printf("Humidity    : %d%%\n", w.humidity);
    printf("Wind Speed  : %.1f km/h\n", w.windSpeed);
    printf("Condition   : %s\n", w.condition);
    printf("========================================\n");
}

void saveHistory(Weather w) {
    FILE *fp = fopen("history.txt", "a");

    if (fp == NULL) {
        printf("Unable to save history.\n");
        return;
    }

    fprintf(fp,
            "%s | %.1f C | %d%% | %.1f km/h | %s\n",
            w.city,
            w.temperature,
            w.humidity,
            w.windSpeed,
            w.condition);

    fclose(fp);
}

void showHistory() {
    FILE *fp = fopen("history.txt", "r");

    if (fp == NULL) {
        printf("\nNo history found.\n");
        return;
    }

    char line[200];

    printf("\n========= WEATHER HISTORY =========\n");

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
}

Weather getWeather(char city[]) {

    Weather w;

    strcpy(w.city, city);

    if(strcmp(city,"Mumbai")==0){
        w.temperature = 30.5;
        w.humidity = 78;
        w.windSpeed = 14.2;
        strcpy(w.condition,"Clear Sky");
    }
    else if(strcmp(city,"Delhi")==0){
        w.temperature = 37.1;
        w.humidity = 52;
        w.windSpeed = 10.4;
        strcpy(w.condition,"Sunny");
    }
    else if(strcmp(city,"Bangalore")==0){
        w.temperature = 24.8;
        w.humidity = 69;
        w.windSpeed = 9.8;
        strcpy(w.condition,"Cloudy");
    }
    else{
        w.temperature = 28.0;
        w.humidity = 60;
        w.windSpeed = 8.5;
        strcpy(w.condition,"Data Not Available");
    }

    return w;
}

int main() {

    int choice;
    char city[50];
    Weather weather;

    while(1){

        printf("\n========== WEATHER DASHBOARD ==========\n");
        printf("1. Current Weather\n");
        printf("2. View Search History\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:

                printf("Enter City Name: ");
                scanf("%s",city);

                weather = getWeather(city);

                displayWeather(weather);

                saveHistory(weather);

                break;

            case 2:

                showHistory();

                break;

            case 3:

                printf("\nThank you for using Weather Dashboard.\n");
                exit(0);

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}