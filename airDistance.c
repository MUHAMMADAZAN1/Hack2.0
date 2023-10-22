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
    scanf("%lf,%lf",&latitudo,&longtitudeO);
    printf("Enter the value of Latitude and Longtitude of Destination(latitude ,longtitude):");
    scanf("%lf,%lf",&latitudeDesti,&longtitudeDesti);
     //Degree convert to redia(redian=pi/180 *degree)
    latitudo*=(M_PI/180);
    latitudeDesti*=(M_PI/180);
    longtitudeO*=(M_PI/180);
    longtitudeDesti*=(M_PI/180);
    //find delta according instruction
    delta=longtitudeDesti-latitudo;
    //spherical law to find the distance
    airDistance=acos(sin(longtitudeO) * sin(latitudeDesti) + cos(latitudo) * cos(latitudeDesti)*cos(delta)) *rediousEarth;
    //origin and destination output convert to degree(degree=180/pi*redian)
    printf("Origin = %lg degree , %lg degree\n",latitudo*=180/M_PI,longtitudeO*=180/M_PI);
    printf("Destination = %lg degree, %lg degree\n",latitudeDesti*=180/M_PI, longtitudeDesti*=180/M_PI);
    //distance result show in prompt
    printf("Air distance is %lg Km\n",airDistance);
    return 0;
}
