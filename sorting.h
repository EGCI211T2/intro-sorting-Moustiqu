#include <iomanip>

void swap(int &a,int &b)
{
    int t = a;
    a=b;
    b=t;
}

void sort(int *a,int N)
{
    for(int i=0; i<N; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }
}

void display(int *a,int N)
{
    for (int i=0; i<N; i++)
        cout<<setw(4)<<a[i];
    cout<<endl;
}


