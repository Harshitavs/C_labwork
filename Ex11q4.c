
#include <stdio.h>
#include <string.h>

// Define a union with 6 string fields
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {
    union Address addr;

    // Store and display one field at a time (others will be overwritten)
    strcpy(addr.name, "Harshita Mathur");
    printf("Name: %s\n", addr.name);

    strcpy(addr.home_address, "Residential Compound 1 , Punjab");
    printf("Home Address: %s\n", addr.home_address);

    strcpy(addr.hostel_address, " Panacea Hostel Block B");
    printf("Hostel Address: %s\n", addr.hostel_address);

    strcpy(addr.city, "Dehradun");
    printf("City: %s\n", addr.city);

    strcpy(addr.state, "UK");
    printf("State: %s\n", addr.state);

    strcpy(addr.zip, "248001");
    printf("ZIP Code: %s\n", addr.zip);

    // Only the last copied field (zip) remains valid
    return 0;
}

