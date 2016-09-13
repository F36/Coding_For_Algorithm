#include<stdio.h>
#include<iostream>
using namespace std;
#define LEN 8

struct Record
{
    int key;
    int info;
};

void ShellSort(Record *arr, int length)
{
    for(int gap=length/2;gap>=1;gap/=2)
        for(int i=0;i<gap;i++)
        {
            for(int j=i+gap;j<=length;j+=gap)
                if(arr[j].key<arr[j-gap].key)
                {
                    Record temp=arr[j];
                    int k=j-gap;
                    while(k>=0&&temp.key<arr[k].key)
                    {
                        arr[k+gap]=arr[k];
                        k-=gap;
                    }
                    arr[k+gap]=temp;
                }
        }
}

void ShellSort_2(Record *arr, int length)
{
    for(int gap=length/2;gap>=1;gap/=2)
        for(int i=gap;i<=length;i++)
        {
            Record temp=arr[i];
            int k=i-gap;
            while(k>=0&&temp.key<arr[k].key)
            {
                arr[k+gap]=arr[k];
                k-=gap;
            }
            arr[k+gap]=temp;
        }
}

int main(void)
{
    freopen("in.txt","r",stdin);
    Record a[LEN+1]={0};
    for(int i=1;i<=LEN;i++)
        cin>>a[i].key>>a[i].info;
    cout<<"Î´ÅÅÐòÐòÁÐ£º\n";
    for(int i=1;i<=LEN;i++)
        cout<<a[i].key<<"\t"<<a[i].info<<endl;

    //ShellSort(a,LEN);
    ShellSort_2(a,LEN);
    cout<<"ÒÑÅÅÐòÐòÁÐ£º\n";
    for(int i=1;i<=LEN;i++)
        cout<<a[i].key<<"\t"<<a[i].info<<endl;
    return 0;
}
