#include <iostream>
#include <time.h>
#include <string>

int arr[6][4];

void bin(int t, int w)
{
    for(int i{};i<4;i++)
    {
        arr[w][i]=t%2;
        t/=2;
    }
}

int main()
{
    while(true)
    {
        time_t czas;
        time(&czas);
        localtime(&czas);
        std::string data=ctime(&czas);
        int t[6];
        t[0]=data[11]-'0';
        t[1]=data[12]-'0';
        t[2]=data[14]-'0';
        t[3]=data[15]-'0';
        t[4]=data[17]-'0';
        t[5]=data[18]-'0';
        for(int i{};i<6;i++)bin(t[i],i);
        for(int i=3;i>=0;i--)
        {
            for(int j{};j<6;j++)std::cout<<arr[j][i];
            std::cout<<'\n';
        }
        system("clear");
    }
    return 0;
}
