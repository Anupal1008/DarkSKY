#include<iostream>
#include <ctime>
int main()
{
    time_t my_time = time(NULL);
    printf("%s", ctime(&my_time));
    time_t now = time(0);
    tm *ltm = localtime(&now);
int i,c,temp=0;
char ch;
float p;
std::cout << "Is the area you are about to search an hilly area> [y/n]: " << std::endl;
std::cin >> ch;
if(ch=='n'){
float arr[12];
std::cout << "Enter the rainfall data of past year(s) of your area monthwise in mm: " << std::endl;
for(i=0;i<12;i++)
{
std::cin >> arr[i];
}
for (i = 1; i < 12; ++i)
{
    if (arr[temp] < arr[i])
    temp=i;
}
if(arr[temp]>=100){
int m= 1 + ltm->tm_mon;
p=(arr[m-1]/arr[temp])*100;
std::cout<<"Probility of flood is: "<<p<<"%\n";}
else
std::cout<<"Probility of flood is: ≈nil\n";
if((p>=80.0)&&(arr[temp]>=100))
std::cout<<"Response: Flooding expected. Stay Alert";
else if((p>=40.0)&&(p<80.0)&&(arr[temp]>=100))
std::cout<<"Response: Low chances of flooding unless heavy rain in a short time occurs";
else if((p<40.0)&&(arr[temp]>=100))
std::cout<<"Response: Almost no chances of flooding";}
else if(ch=='y')
std::cout<<"Probility of flood is: ≈nil\nResponse: Chances of flood are almost none but beware of flash floods.";
else
std::cout << "Please enter [y/n] only and try again..." << std::endl;
}
