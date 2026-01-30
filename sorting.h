#include <iomanip>

void swap(int &a,int &b)
{
    int t = a;
    a=b;
    b=t;
}



void display(int *a,int N)
{
    for (int i=0; i<N; i++)
        cout<<setw(4)<<a[i];
    cout<<endl;
}

int min(int *a, int n)
{
    int m=a[0];
    for (int i=1; i<n; i++)
    {
        if (m>a[i])
        {
            m=a[i];
        }
    }
    return m;
}

void selectSort(int *a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        int m=i;
        for (int j=i; j<n; j++)
        {
            if (a[m]>a[j])
                m=j;
        }
        swap(a[i], a[m]);
        for (int k=0; k<n; k++)
            cout<<setw(4)<<a[k];
        cout<<endl;
    }
}



void sort(int *a,int N)   //bubble sort
{
    selectSort(a, N);/*
    for(int i=0; i<N; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }*/
}
