class UndergroundSystem {
public:
 
    
    map<int,pair<int,string>> entryDetails; 
 
  
    map<pair<string,string>,int> totalTravelTime;
 
    
    map<pair<string,string>,int> noOfCustomers;
 
    UndergroundSystem() {
 
    }
 
    void checkIn(int id, string stationName, int t) {
        entryDetails[id] = {t,stationName};
    }
 
    void checkOut(int id, string stationName, int t) {
        double diff = (t-entryDetails[id].first); 
 
        totalTravelTime[{entryDetails[id].second,stationName}] += diff; 
        noOfCustomers[{entryDetails[id].second,stationName}]++;
        entryDetails.erase(id);
    }
 
    double getAverageTime(string startStation, string endStation) {
        return ((double)totalTravelTime[{startStation,endStation}])/noOfCustomers[{startStation,endStation}];
    }
};
 
