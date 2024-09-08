#include <stdio.h>
#include <math.h>

#define PI 3.14

double calculateDistance(int x1, int x2, int y1, int y2){
    // Calculate the difference in Point X 
    int pointX = x2 - x1;
    //Printing the difference for Point X
    printf("Point X difference: %d\n", pointX);

    //Calculating the difference in Point Y
    int pointY = y2 - y1;
    //Printing the difference for Point Y
    printf("Point Y difference: %d\n", pointY);

    // Calculate the square of both differences
    double pointXsq = pow(pointX, 2);
    double pointYsq = pow(pointY, 2);

    // Calculate and return the distance
    double distance = sqrt(pointXsq + pointYsq);
    printf("The distance between two points is %.2f\n", distance);

    return distance;
}

double calculateDistanceNoPrint(int x1, int x2, int y1, int y2){
    // Calculate the difference in X and Y
    int pointX = x2 - x1;
     printf("Point X difference: %d\n", pointX);
    int pointY = y2 - y1;
    printf("Point Y difference: %d\n", pointY);


    // Calculate the square of both differences
    double pointXsq = pow(pointX, 2);
    double pointYsq = pow(pointY, 2);


    double distance = sqrt(pointXsq + pointYsq);
    // Calculate and return the distance
    return distance;
}

double calculatePerimeter(int x1, int x2, int y1, int y2){
    //Setting the diameter to be equal to no print version of calculateDistance
    double diameter = calculateDistanceNoPrint(x1, x2, y1, y2);

    // Perimeter is PI * the diameter
    double perimeter = PI * diameter;

    // Print the perimeter
    printf("The perimeter is %.2f\n", perimeter);

    //Giving feedback for how are the function was 
    double feedback = 0;
    printf("On a scale of 1.0 to 5.0 how hard was it to make this function: ");
    scanf("%lf", &feedback);

    return feedback;
}



double calculateArea(int x1, int x2, int y1, int y2){
    //Creating and getting the diameter first
    double diameter = calculateDistanceNoPrint(x1, x2, y1, y2);

    //Radius = Diameter / 2
    double radius= diameter /2;

    //Area formula for a circle
    double area = PI * pow(radius, 2);

    //Printing out the area
    printf("The area of the circle is %.2f\n", area);

    //Giving feedback for how are the function was 
    double feedback = 0;
    printf("On a scale of 1.0 to 5.0 how hard was it to make this function: ");
    scanf("%lf", &feedback);

    return feedback;
}

double calculateWidth(int x1, int x2, int y1, int y2){
    // Calculate the difference in Point X 
    int pointX = x2 - x1;
    //Printing the difference for Point X
    printf("Point X difference: %d\n", pointX);

    //Calculating the difference in Point Y
    int pointY = y2 - y1;
    //Printing the difference for Point Y
    printf("Point Y difference: %d\n", pointY);

    // Calculate the square of both differences
    double pointXsq = pow(pointX, 2);
    double pointYsq = pow(pointY, 2);

    // Calculate and return the Widtrh
    double width = sqrt(pointXsq + pointYsq);
    printf("The distance between two points is %.2f\n", width);

    double feedback = 0;
    printf("On a scale of 1.0 to 5.0 how hard was it to make this function: ");
    scanf("%lf", &feedback);

    return feedback;
}


double calculateHeight(int x1, int x2, int y1, int y2){
     // Calculate the difference in Point X 
    int pointX = x2 - x1;
    //Printing the difference for Point X
    printf("Point X difference: %d\n", pointX);

    //Calculating the difference in Point Y
    int pointY = y2 - y1;
    //Printing the difference for Point Y
    printf("Point Y difference: %d\n", pointY);

    // Calculate the square of both differences
    double pointXsq = pow(pointX, 2);
    double pointYsq = pow(pointY, 2);

    // Calculate and return the Height
    double height = sqrt(pointXsq + pointYsq);
    printf("The height between two points is %.2f\n", height);
    
     //Giving feedback for how are the function was 
    double feedback = 0;
    printf("On a scale of 1.0 to 5.0 how hard was it to make this function: ");
    scanf("%lf", &feedback);

    return feedback;

}





int main(int argc, char** argv){

    calculateDistance(1,2,3,4);
    calculatePerimeter(1,2,3,4);
    calculateArea(1,2,3,4);
    calculateWidth(1,2,3,4);
    calculateHeight(1,2,3,4);

    return 0;
}