

#include <iostream>
#include <vector>

using namespace std;

struct room {
    int bathrooms;
    int bedrooms;
};

int main() 
{
    room hotel,appartment;
    int n;
    cin>>n;
    
        cin>>hotel.bedrooms;
        cin>>hotel.bathrooms;
    cin>>appartment.bedrooms;
    cin>>appartment.bathrooms;

    int profit;
    profit=(hotel.bedrooms*50)+(hotel.bathrooms*100)+(appartment.bathrooms*100)+(appartment.bedrooms*50)+100;
    cout<<profit;
    return 0;

    
}