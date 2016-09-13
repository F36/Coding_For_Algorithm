#include <stdio.h>
#include<iostream>
using namespace std;
#define LEN 8

struct Record//定义结构体类型，用于序列存储元素
{
    int key;
    int Info;
};

void BinaryInsertSort(Record *arr, int length)
{
    for(int i=2;i<=length;++i)
    {
        Record temp=arr[i];
        int low=1;
        int high=i-1;

        while(low<=high)//知道low>high，找到待插入位置high+1
        {
            int m=(low+high)/2;
            if(temp.key<arr[m].key)
                high=m-1;
            else
                low=m+1;
        }
        for(int j=i-1;j>=high+1;--j)//high+1后的所有元素均向后移动一位
            arr[j+1]=arr[j];
        arr[high+1]=temp;
    }
}

int main(void)
{
    freopen("in.txt","r",stdin);
    Record a[LEN+1]={0};
    for(int i=1;i<=LEN;i++)
        cin>>a[i].key>>a[i].Info;
    cout<<"未排序序列：\n";
    for(int i=1;i<=LEN;i++)
        cout<<a[i].key<<'\t'<<a[i].Info<<endl;

    BinaryInsertSort(a,LEN);

    cout<<"已排序序列：\n";
    for(int i=1;i<=LEN;i++)
        cout<<a[i].key<<'\t'<<a[i].Info<<endl;
    return 0;
}
