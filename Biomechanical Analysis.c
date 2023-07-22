//For Joint Angle Analysis

#include <stdio.h>
#include <math.h>

// Function to calculate joint angle
double calculateJointAngle(double length1, double length2, double x, double y)
{
    // Calculate the angle using inverse tangent function
    double angle = atan2(y, x);

    // Convert the angle to degrees
    angle = angle * (180.0 / M_PI);

    // Adjust the angle based on the lengths of the segments
    angle = angle - acos((length1 * length1 + length2 * length2 - (x * x + y * y)) / (2 * length1 * length2));

    return angle;
}

int main()
{
    // Define the lengths of the segments
    double segment1 = 3.0;
    double segment2 = 4.0;

    // Define the coordinates of the end effector (x, y)
    double x = 2.5;
    double y = 1.5;

    // Calculate the joint angle
    double jointAngle = calculateJointAngle(segment1, segment2, x, y);

    // Print the result
    printf("Joint Angle: %.2f degrees\n", jointAngle);

    return 0;
}
