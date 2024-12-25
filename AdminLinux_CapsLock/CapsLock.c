#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Path to the Caps Lock brightness control file
    const char *file_path = "/sys/class/leds/input1::capslock/brightness";
    int fd;                     // File descriptor for the brightness file
    char value;                 // User input for brightness (0 or 1)

    // Check if the brightness file exists
    if (access(file_path, F_OK) != 0) {
        printf("Error: Brightness file not found at %s\n", file_path);
        return 1;
    }

    // Get user input for brightness
    printf("Enter brightness value (0 to turn off, 1 to turn on): ");
    scanf(" %c", &value); // Reading a single character (either '0' or '1')

    // Open the file for writing
    fd = open(file_path, O_WRONLY);
    if (fd < 0) {
        perror("Error opening brightness file for writing");
        return 1;
    }

    // Write the user input to the file
    if (write(fd, &value, 1) != 1) {
        perror("Error writing to brightness file");
        close(fd);
        return 1;
    }
    close(fd);

    // Reopen the file for reading to confirm the new brightness value
    fd = open(file_path, O_RDONLY);
    if (fd < 0) {
        perror("Error opening brightness file for reading");
        return 1;
    }

    // Read and display the current brightness value
    if (read(fd, &value, 1) != 1) {
        perror("Error reading from brightness file");
        close(fd);
        return 1;
    }
    close(fd);
    printf("Current brightness value: %c\n", value);

    return 0;
}
