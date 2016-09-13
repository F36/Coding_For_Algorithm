#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
#define LEN 8
/*
*ºÚµ•—°‘Ò≈≈–ÚÀ„∑®
*/
struct Record
{
    int key;
    int info;
};
void SimpleSelectSort(Record *arr, int length)
{
    for(int i = 0; i < length; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < length; j++)
        {

            if(arr[j].key < arr[minIndex].key)
                {
                    minIndex = j;
                }
        }
        if(minIndex != i)
        {
            Record temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }

    }
}


int main(void)
{
    freopen("in.txt", "r", stdin);
    Record arr[LEN] = {0};
    for(int i = 0; i < LEN; i++)
        cin>>arr[i].key>>arr[i].info;
    cout<<"Œ¥≈≈–Ú–Ú¡–£∫"<<endl;
    for(int i = 0; i < LEN; i++)
        cout<<arr[i].key<<"\t"<<arr[i].info<<endl;
    SimpleSelectSort(arr, LEN);
    cout<<"“—≈≈–Ú–Ú¡–£∫"<<endl;
    for(int i = 0; i < LEN; i++)
        cout<<arr[i].key<<"\t"<<arr[i].info<<endl;
}
