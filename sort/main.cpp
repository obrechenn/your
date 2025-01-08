#include <iostream>
#include <ctime>

int main()
{
    std::srand(std::time(0));
    int arr[10];
     for(int i = 0;i<10;i++){
        arr[i] = rand() % 10;
        std::cout<<arr[i]<<" ";
    }
    std::cout<<'\n';
    for(int i = 0;i<9;i++)
    {
        for(int n = i+1;n<10;n++)
        {
            if(arr[i] < arr[n])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[n];
                arr[n] = temp;
            }
        }
    }
    for(int i = 0;i<10;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<'\n';
    return 0;
}