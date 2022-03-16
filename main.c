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
if(arr[temp]>100){
int m= 1 + ltm->tm_mon;
float p=(arr[m-1]/arr[temp])*100;
std::cout<<"Probility of flood is: "<<p<<"%";}
else
std::cout<<"Probility of flood is: nil";
}
else if(ch=='y')
std::cout<<"Probility of flood is: nil";
else
std::cout << "Please enter [y/n] only and try again..." << std::endl;
}
