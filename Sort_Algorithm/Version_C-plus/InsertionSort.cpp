#include<iostream>
using namespace std;
//print功能函数，用于打印每次遍历插入后的序列，总共需要N-1次
void print(int a[], int n, int i)//i表示第i次遍历
{
    cout<<i<<":";
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
}

void InsertSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            int j=i-1;
            int x=a[i];
            a[i]=a[i-1];
            while(x<a[j]&&j>=0)//比较操作，将待插入元素和已排序序列元素依次进行比较
            {
                a[j+1]=a[j];//如果待插入元素小，则序列元素后移
                j--;
            }
            a[j+1]=x;//找到插入位置，插入
        }
        print(a,n,i);
    }
}

int main()
{
    int a[7]={2,2,3,6,1,2,0};
    InsertSort(a,7);
    print(a,7,7);
}
