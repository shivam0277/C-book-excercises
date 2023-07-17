//write a function any(s1,s2) which returns the first location in a string  where any character
//from the string s2 occurs, or -1 if s1 has no characters from s2
//dont use strpbrk from the standard library 
#include <stdio.h>

int any(const char *s1, const char *s2) {
    // Iterate over each character in s1
    for (int i = 0; s1[i] != '\0'; i++) {
        // Iterate over each character in s2
        for (int j = 0; s2[j] != '\0'; j++) {
            // Check if the characters match
            if (s1[i] == s2[j]) {
                return i; // Return the index of the match in s1
            }
        }
    }
    return -1; // No match found, return -1
}

int main() {
    const char *s1 = "Hello, World!";
    const char *s2 = "aeiou";

    // Call the any function and store the result
    int result = any(s1, s2);
    printf("%d\n", result);  // Output: 1

    return 0;
}
