#include<iostream>
using namespace std;
//print���ܺ��������ڴ�ӡÿ�α������������У��ܹ���ҪN-1��
void print(int a[], int n, int i)//i��ʾ��i�α���
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
            while(x<a[j]&&j>=0)//�Ƚϲ�������������Ԫ�غ�����������Ԫ�����ν��бȽ�
            {
                a[j+1]=a[j];//���������Ԫ��С��������Ԫ�غ���
                j--;
            }
            a[j+1]=x;//�ҵ�����λ�ã�����
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
