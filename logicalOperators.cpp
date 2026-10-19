#include <iostream>

int main()
{
    // LESSON: C++ logical operators
    // Logical operators combine or reverse conditions and produce a bool:
    // true or false. Use them in if statements and other expressions.
    // && = AND: both conditions must be true.
    // || = OR:  at least one condition must be true (including both).
    // !  = NOT: reverses true and false.

    // Print bool values as true/false instead of 1/0.
    std::cout << std::boolalpha;

    // 1. AND (&&): check whether a temperature is inside a range.
    int temperature = 22;
    bool comfortable = (temperature >= 18 && temperature <= 26);
    std::cout << "Comfortable temperature: " << comfortable << '\n'; // true

    if (temperature >= 18 && temperature <= 26)
    {
        std::cout << "It is between 18 and 26 degrees, inclusive.\n";
    }
    // Do not write 18 <= temperature <= 26 in C++.
    // Compare the temperature twice and join the comparisons with &&.

    // 2. OR (||): either condition is enough to make the result true.
    bool isSaturday = false;
    bool isSunday = true;
    bool isWeekend = (isSaturday || isSunday);
    std::cout << "Weekend: " << isWeekend << '\n'; // true

    // 3. NOT (!): reverse a condition.
    bool isRaining = false;
    std::cout << "Not raining: " << !isRaining << '\n'; // true

    if (!isRaining)
    {
        std::cout << "You can leave your umbrella at home.\n";
    }
    // !isRaining means the same thing as isRaining == false.
    // != is different: it compares two values for inequality (age != 18).

    // 4. Truth table: A and B stand for any two bool conditions.
    // A      B      A && B   A || B   !A
    // false  false  false    false    true
    // false  true   false    true     true
    // true   false  false    true     false
    // true   true   true     true     false

    // 5. Combining operators: ! is evaluated before &&, then ||.
    // Parentheses make your intended grouping easier to read.
    int age = 20;
    bool hasTicket = true;
    bool hasInvitation = false;
    bool canEnter = (age >= 18) && (hasTicket || hasInvitation);
    std::cout << "Can enter: " << canEnter << '\n'; // true
    // Here, the person must be at least 18 AND have a ticket OR invitation.
    // The parentheses keep the ticket/invitation choice together.

    // 6. Short-circuit evaluation: built-in && and || work left to right.
    // && skips the right condition when the left condition is false.
    // || skips the right condition when the left condition is true.
    int divisor = 0;
    // Because divisor != 0 is false, the division is never evaluated.
    bool quotientAboveTwo = (divisor != 0) && (10 / divisor > 2);
    std::cout << "Quotient above two: " << quotientAboveTwo << '\n'; // false
    // Order matters: put the safety check BEFORE the division.

    // Common mistake: & and | are bitwise operators, not && and ||.
    // Use && and || for these logical conditions and short-circuit behavior.

    // PRACTICE: predict each result, then uncomment the lines to check.
    // std::cout << (true && false) << '\n';
    // std::cout << (false || true) << '\n';
    // std::cout << !true << '\n';
    // std::cout << ((age < 18) || !hasTicket) << '\n';
    // Answers, in order: false, true, false, false.
    // Try changing temperature to 30, isSunday to false, and age to 16.

    return 0;
}
