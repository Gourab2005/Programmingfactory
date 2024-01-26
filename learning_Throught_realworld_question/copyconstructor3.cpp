/*
Real-World Scenario Question: Navigational System for Autonomous Vehicles

Scenario Description:
You're part of a team developing a navigation system for autonomous vehicles.
The system manages points representing locations on a map.
Each point has specific coordinates denoting its position (latitude and longitude).

Question:
Explain the significance of a copy constructor within the context of developing a navigation system for autonomous vehicles using a real-world analogy.

o/p
Destination A: 37.7749, -122.4194
Destination B: 37.7749, -122.4194
Waypoint A: 34.0522, -118.2437
Waypoint B: 34.0522, -118.2437

*/

#include<iostream>
using namespace std;

// making a class 
class Geopoint{
    private:
    double latitude;
    double longitude;

    public:
    //main constructor
    Geopoint(double lat, double lon){
        latitude=lat;
        longitude=lon;
    }
    //copyconstructor
    Geopoint(const Geopoint& point){
        latitude=point.latitude;
        longitude=point.longitude;
    }
    //display location
    double getLat(){
        return latitude;
    }
    double getLon(){
        return longitude;
    }
};

int main()
{
    // Vehicle A's route
    Geopoint destinationA(20.2223,-122.3555);
    Geopoint waypointA(18.2223,-122.3555);
    // Vehicle B receiving route from Vehicle A
    Geopoint destinationB = destinationA;
    Geopoint waypointB = waypointA;
    // Display coordinates for verification
    cout<<"Destination A: "<<destinationA.getLat()<<","<<destinationA.getLon()<<endl;
    cout<<"Destination B: "<<destinationB.getLat()<<","<<destinationB.getLon()<<endl;
        
    cout<<"Waypoint A: "<<waypointA.getLat()<<","<<waypointA.getLon()<<endl;
    cout<<"Waypoint B: "<<waypointB.getLat()<<","<<waypointB.getLon()<<endl;
}

/*Both Destination A and Destination B share the same coordinates (latitude and longitude), indicating that they refer to the same location on the map. Similarly, Waypoint A and Waypoint B also share identical coordinates, suggesting they represent the same intermediate point along the route.

This representation is crucial in navigation systems, where destinations mark the final points vehicles aim to reach, and waypoints guide vehicles through the route by indicating specific locations to pass through. The output confirms the specific coordinates assigned to each point for navigation purposes.*/
