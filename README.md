# Digital-ThermoStat# Temperature Control Simulation

This program simulates a temperature control system. It generates a random current temperature within a given range and allows the user to enter a desired temperature. The program continuously adjusts the current temperature based on the desired temperature and provides feedback on the status of the heating and cooling systems.

## Features

- Random temperature generation: The program generates a random current temperature within a defined range.

- User interaction: The user can enter the desired temperature.

- Control logic: The program adjusts the current temperature based on the desired temperature using a control logic function.

- Visual display: The program displays the current and desired temperatures, along with the status of the heating and cooling systems.

## Getting Started

### Prerequisites
- C compiler (e.g., GCC)
- For the code execution, I worked with Codeblocks.
### Instructions
1. Clone the repository or download the source code files.
2. Compile the code using the C compiler. For example, using GCC.
3. Run the executable.
4. Follow the prompts to enter the desired temperature.
5. The program will continuously adjust the current temperature and display the results until the desired temperature is reached or the program is terminated.
6. This Programs can also be terminated if you enter the desired temperature value which equals to the current temperature.
7. You can run the loop continuously by changing the while loop condition to `1` (It runs until you close the terminal).

## Customization

- Temperature Range: You can modify the `min_temp` and `max_temp` variables in the code to change the range of possible temperatures.

- Control Logic: If you need to customize the control logic for adjusting the temperature, you can modify the `control_temperature` function.

- Display: You can modify the visual display by changing the printf statements in the code.

## Compatibility
- This program is written in C and should be compatible with most C compilers.
- The program uses the `conio.h` library for Windows-specific functionality, such as clearing the screen. If you are using a different operating system, you may need to modify the code to use alternative methods for clearing the screen.
- For Mac or Linux User have to use `unistd.h` library and `system("clear")` to clear the Screen.
