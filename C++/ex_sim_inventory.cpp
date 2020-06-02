#include<iostream>
#include <cmath>
#include "lcgrand.h"      
using namespace std; 
 
////////////////////////////////////////////////////////////////////////////
#define Queu_Limit 100   
#define BUSY      1       
#define IDLE      0      
/////////////////////////////////////////////////////////////////////////
int  
      Num_Completed_Customers,    //Number of Completed Customers
      Number_of_Events,           //Number of Events 1.Arriving 2.Completion
      Number_in_Queue,            //Number of Customers In Queue
      Server_Status;              //Server Status ( Idle , Busy )
 
double
      End_Time,
      Type_Next_Event,
      Mean_interArrival_Time, 
      Mean_service_Time,
      Clock, 
      Time_Arrival[Queu_Limit + 1], 
      Next_Arrival_Time, 
      Next_Completion_Time,
      Total_Flow_Time;
 
////////////////////////////////////////////////////////////////////////////
// Prototype of the System Function
 
void  initialize();
void  Timing();
void  Arrival();
void  Completition();
float expon(float mean);
 
////////////////////////////////////////////////////////////////////////////////////
//Main Function
 
int main()  
{
      
    initialize();           // Intialization of the System
 
    cout<<"                 * Single-server queueing system with fixed run *\n";
 
    cout<<"                 _________________________________________________"<<endl;
    
    cout<<"\nMean Inter arrival Time: "<<Mean_interArrival_Time;
 
    cout<<"\nMean Service Time: "<<Mean_service_Time<<endl;
 
    cout<<"The End of Simulation Time: "<< End_Time<<endl<<endl;
  
 
    while(true) 
    {
         
        Timing();     // Timing Routine To Determine The Next Event
 
        if(Clock>End_Time)
           break;
     
        switch (int(Type_Next_Event)) 
        {
        case 1:
            Arrival();
            break;
             
        case 2:
            Completition();
            break;
       
        }
    } 
      
    // Print Summary Statistics.
     
    cout<<"\nTotal Flow Time: "<<Total_Flow_Time;
     
    cout<<"\nAverage Flow Time: "<<Total_Flow_Time / Num_Completed_Customers;
     
    cout<<"\nNumber of Completed Customers: "<<Num_Completed_Customers;
 
    cout<<"\nAverage Number of Customers In System / Unit Time: "<<Num_Completed_Customers/Clock<<endl<<endl;
 
      
    return 0;
}
 
//////////////////////////////////////////////////////////////////////////////
//Intialization Function
 
void initialize()  
{
 
    Number_of_Events = 2; //Arrivin , Completion
     
    Mean_interArrival_Time=1.0;
     
    Mean_service_Time=0.5;
 
    End_Time=100.0;
     
    Clock = 0.0;
     
    Server_Status = IDLE;
     
    Number_in_Queue = 0;
 
    Num_Completed_Customers = 0;
 
    Total_Flow_Time    = 0.0;
 
    Next_Arrival_Time = Clock + expon(Mean_interArrival_Time);//Arriving
     
    Next_Completion_Time = 1.0e+30;    // Completing  Guarantening that the first event is arriving
     
}
//////////////////////////////////////////////////////////////////////////////
// Timing Routine Function
 
void Timing()  
{
    Type_Next_Event = 0;
 
    if(Next_Arrival_Time<Next_Completion_Time)
    {
         
        Type_Next_Event = 1;
 
        Clock=Next_Arrival_Time;
 
    }
    else
    {
        Type_Next_Event = 2;
 
        Clock = Next_Completion_Time;
 
    }
     
    if (Type_Next_Event == 0) 
    {
        cout<<"\nEvent List Empty at Time: "<<Clock;
        
        exit(1);
    }
         
}
 
////////////////////////////////////////////////////////////////////////////
// Arriving Customer function
 
void Arrival()  
{
    Next_Arrival_Time = Clock + expon(Mean_interArrival_Time);
 
    if (Server_Status == BUSY) 
    {
        ++Number_in_Queue;
 
        if (Number_in_Queue > Queu_Limit) 
        {
            cout<<"\nOverflow of the array time_arrival at";
             
            cout<<"time: "<<Clock;
             
            exit(2);
        }
 
        Time_Arrival[Number_in_Queue] = Clock;
    }
 
    else
    {
        Server_Status = BUSY;
 
        Next_Completion_Time = Clock + expon(Mean_service_Time);
         
        ++Num_Completed_Customers;
    }
}
/////////////////////////////////////////////////////////////////////////////
// Completion Customer Function
 
void Completition() 
{
    double delay; // Waiting Time
 
    if (Number_in_Queue == 0) 
    {
        Server_Status= IDLE;
 
        Next_Completion_Time = 1.0e+30;
    }
 
    else
    {
        ++Num_Completed_Customers;
 
        --Number_in_Queue;
 
        delay= Clock - Time_Arrival[1];
 
        Total_Flow_Time += delay;
         
        Next_Completion_Time = Clock + expon(Mean_service_Time);
 
        for (int i=1;i<=Number_in_Queue;i++)
 
            Time_Arrival[i] = Time_Arrival[i + 1];
    }
}
 
///////////////////////////////////////////////////////////////////////////
// Generate The Rondom Number
 
float expon(float mean)  
{
    return (-mean * log(lcgrand(1)));
}

