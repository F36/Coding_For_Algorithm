/*快速排序*/
#include<stdio.h>
#include<iostream>
#include<vector>
# define LEN 8
using namespace std;


struct Record
{
    int key;
    int info;
};

int AdjustArray(Record s[], int l, int r)
{
    int i = l, j = r;
    Record x = s[l];//基准数据
    while(i < j)
    {
        //起始先从右往左遍历，查找小于x的数据
        while(i < j && x.key <= s[j].key)
        {
            j--;
        }
        if(i < j)
        {
            s[i] = s[j];//s[j]形成下一个要填充的坑
            i++;
        }
        while(i < j && x.key > s[i].key)
        {
            i++;
        }
        if(i < j)
        {
            s[j] = s[i];
            j--;
        }
    }
     s[i] = x;//退出循环时,i = j
     return i;
}

void quickSort1(Record s[], int l, int r)
{
    if(l < r)
    {
        int i = AdjustArray(s, l, r);
        quickSort1(s, l, i - 1);
        quickSort1(s, i + 1, r);
    }
}


void quickSort2(Record s[], int l, int r)
{
    if(l < r)
    {
        int i = l, j = r;
        Record x = s[l];
        while(i < j)
        {
            while(i < j && x.key <= s[j].key)
                j--;
            if(i < j)
                s[i++] = s[j];
            while(i < j && x.key > s[i].key)
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quickSort2(s, l, i - 1);
        quickSort2(s, i + 1, r);
    }
}



int main()
{
    freopen("in.txt", "r", stdin);
    Record a[LEN + 1] = {0};
    for(int i = 1; i <= LEN; i++)
        cin>>a[i].key>>a[i].info;
    cout<<"Unordered Sequence:\n";
    for(int i = 1; i <= LEN; i++)
        cout<<a[i].key<<"\t"<<a[i].info<<endl;
    //quickSort1(a, 1, LEN);
    quickSort2(a, 1, LEN);
    cout<<"Ordered Sequence:"<<endl;
    for(int i = 1; i <= LEN; i++)
        cout<<a[i].key<<"\t"<<a[i].info<<endl;
}
