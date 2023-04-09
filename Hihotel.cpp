

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
    int n,bathroom,bedroom,profitHotel, profitAppartment,Totalprofit,sum=0,sum1=0;
    string roomtype;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>roomtype>>bedroom>>bathroom;
        if(roomtype=="standard"){
        profitHotel=(bedroom*50)+(bathroom*100);
        sum=sum+profitHotel;
        }
        else{
            profitAppartment=(bedroom*50)+(bathroom*100)+100;
            sum1=sum1+ profitAppartment;
        }

    }
    Totalprofit=sum+ sum1;
    cout<<Totalprofit<<endl;
    //     cin>>hotel.bedrooms;
    //     cin>>hotel.bathrooms;
    // cin>>appartment.bedrooms;
    // cin>>appartment.bathrooms;

    // int profit;
    // profit=(hotel.bedrooms*50)+(hotel.bathrooms*100)+(appartment.bathrooms*100)+(appartment.bedrooms*50)+100;
    // cout<<profit;
    return 0;

    
}