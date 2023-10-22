#include<stdio.h>
//include math library to use it function
#include<math.h>
//the program about to find distance between two place
int main(){
    //made variable according the program
    double latitudo,latitudeDesti,longtitudeO,longtitudeDesti;
    double airDistance, delta
 //made constant of rediuos of the earth 
    const float rediousEarth= 6371;
    //prompt msg to user to get input and user should give input in degree
    printf("\t\tEnter the values in Degree\t\t\n");
    printf("Enter the value of Latitude and Longtitude of Origin(Latitude,longtitude):");
    scanf("%lf,%lf",&latitudeO,&longtitudeO);
    printf("Enter the value of Latitude and Longtitude of Destination(latitude ,longtitude):");
    scanf("%lf,%lf",&latitudeDesti,&longtitudeDesti);
    return 0;
}