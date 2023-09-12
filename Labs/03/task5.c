int main() {
    
    int south1 = 10;
    int west = 10;
    int south2 = 5;
    int north = 15;
    double fuelConsumptionRate = 2.0; 
    int totalDistance = south1 + south2 + north + west; 
    double fuelConsumed = totalDistance * fuelConsumptionRate;
    printf("Total distance covered: %d kilometers\n", totalDistance);
    printf("Fuel consumed: %.2f liters\n", fuelConsumed);
    return 1;
}//endmain() 
