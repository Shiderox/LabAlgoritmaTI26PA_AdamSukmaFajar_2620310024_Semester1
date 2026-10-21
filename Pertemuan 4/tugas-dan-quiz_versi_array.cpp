#include <iostream>
#include <string>
int calculateTotal (int number [5])
{
    int total = 0;

    for (int i=0; i<5; i++)
    {
        total = total + number [i];
    }
    return total;
}
float calculateAverage (int number [3])
{
    int total = calculateTotal(number);
    return total/3.0;
}
int findMaxnum (int number [3])
{   int maxnum = number[0];
    for (int i=1; i<3; i++)
    {
        if (number [i] > maxnum)
        {
            maxnum = number [i];
        }

    }
    return maxnum;
}
int findMinnum (int number [5])
{
    int minnum = number [0];
    for (int i=1; i<5; i++)
    {
        if (number [i] < minnum)
        {
            minnum = number [i];
        }

    }
    return minnum;
}
int main ()
{
    int number [3];
    int total;
    int maxnum;
    int minnum;
    float average;
    std::string Name;

    std::cout << "Input Name Student : ";
    std::cin >> Name;
    
    for (int i=0; i<3; i++)
    {   std::cout << "Input 3 Nilai : ";
        std::cin >> number [i];
    }
    total = calculateTotal(number);
    maxnum = findMaxnum(number);
    minnum = findMinnum(number);
    average = calculateAverage(number);
    
    //std::cout << "Total = " << total << std::endl;
    //std::cout << "Max Num = " << maxnum << std::endl;
    //std::cout << "Main Num = " << minnum << std::endl;

   
    //std::cout << "Average = " << average << std::endl;
    if (average >= 85)
    {
        std::cout << "Nama : " << Name << std::endl;
        std::cout << "Nilai I :" << number[0] << std::endl;
        std::cout << "Nilai II :" << number[1] << std::endl;
        std::cout << "Nilai III :" << number[2] <<std::endl;
        std::cout << "Average = " << average << std::endl;
        std::cout << "U got i5 Computer";
    }
    else if (average >= 70)
    {
        std::cout << "Nama : " << Name << std::endl;
        std::cout << "Nilai I :" << number[0] << std::endl;
        std::cout << "Nilai II :" << number[1] << std::endl;
        std::cout << "Nilai III :" << number[2] <<std::endl;
        std::cout << "Average = " << average << std::endl;
        std::cout << "U Got 2,000,000 Rupiah";
    }
    else if ( average < 70)
    {
        std::cout << "Nama : " << Name << std::endl;
        std::cout << "Nilai I :" << number[0] << std::endl;
        std::cout << "Nilai II :" << number[1] << std::endl;
        std::cout << "Nilai III :" << number[2] <<std::endl;
        std::cout << "Average = " << average << std::endl;
        std::cout << "U got Holyday Ticket";
    }



    
    return 0;
}