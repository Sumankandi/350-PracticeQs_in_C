#include <stdio.h>

int main() {
    int attendance = 85;   // in percentage
    int internalMarks = 40;
    int isBlacklisted = 0; // 0 = false, 1 = true

    // Check using AND (&&)
    if (attendance >= 75 && internalMarks >= 35) {
        printf("AND: Eligible because attendance >=75 AND internal marks >=35\n");
    }

    // Check using OR (||)
    if (attendance >= 75 || internalMarks >= 35) {
        printf("OR: Allowed because either attendance >=75 OR internal marks >=35\n");
    }

    // Check using NOT (!)
    if (!isBlacklisted) {
        printf("NOT: You are NOT blacklisted, so you can appear for the exam\n");
    }

    return 0;
}
