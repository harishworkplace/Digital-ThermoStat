#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> // for Windows
//For Mac or Linux --- #include <unistd.h>

char ch=248;//ASCII value for ° Symbol
// Temperature Simulation
float generate_temperature(float min_temp, float max_temp) {
    return ((float)rand() / RAND_MAX) * (max_temp - min_temp) + min_temp;
}

// Control Logic
void control_temperature(float* current_temp, float *desired_temp) {
    float temperature_difference = *desired_temp - *current_temp;
    float next_temp=0;

    if (temperature_difference > 0.5) {
        // Increase current temperature
        *current_temp += 0.5;
    } else if (temperature_difference < -0.5) {
        // Decrease current temperature
        *current_temp -= 0.5;
    }
    else{
            //Equals the Current temperature to Desired Temperature
        *current_temp+=temperature_difference;
        printf("      Temperature Control\n");
        printf("----------------------------\n");
        printf("Current Temperature: %.2f%cC\n", *current_temp,ch);
        printf("Desired Temperature: %.2f%cC\n", *desired_temp,ch);
        printf("----------------------------\n");
        printf("Heating System: %s\n", *current_temp < *desired_temp ? "ON" : "OFF");
        printf("Cooling System: %s\n", *current_temp > *desired_temp ? "ON" : "OFF");
        printf("----------------------------\n");
        printf("If you want change the Desired Temperature\n");
        printf("Enter the new Desired temperature: ");//To update the new Desired Temperature
        scanf("%f",&next_temp);
        *desired_temp=next_temp;
        system("cls");//clear screen in windows
    }
}

int main() {
    float min_temp = 0.0;
    float max_temp = 75.0;
    float desired_temp;
    float current_temp;
    int heating = 0;
    int cooling = 0;

    srand(time(NULL));

    // Generate random current temperature
    current_temp = generate_temperature(min_temp, max_temp);

    // Clear the screen
    system("cls"); // for Windows

    // Visual Display
    printf("      Temperature Control\n");
    printf("----------------------------\n");
    printf("Current Temperature: %.2f%cC\n", current_temp,ch);
    printf("----------------------------\n");

    // User Interaction
    printf("Enter the desired temperature: ");
    scanf("%f", &desired_temp);
    if(desired_temp >=75){
        printf("High temperature");
    }
    else if(desired_temp <=0){
        printf("Too cold");
    }
    else{
            //To terminate the loop at the desired temperature I used that we can change it to any button click function
            //We can also run loop Continuously by placing 1 in the while loop condition
    while (current_temp!=desired_temp) {

        // Clear the screen
        system("cls"); // for Windows
        //for Mac or Linux --- system("clear")

        // Control Logic
        control_temperature(&current_temp, &desired_temp);

        // Visual Display
        printf("      Temperature Control\n");
        printf("----------------------------\n");
        printf("Current Temperature: %.2f%cC\n", current_temp,ch);
        printf("Desired Temperature: %.2f%cC\n", desired_temp,ch);
        printf("----------------------------\n");

        // Feedback and Display
        printf("Heating System: %s\n", current_temp < desired_temp ? "ON" : "OFF");
        printf("Cooling System: %s\n", current_temp > desired_temp ? "ON" : "OFF");

        // Wait for some time (in seconds)
        sleep(2);
    }
    return 0;
}
}



