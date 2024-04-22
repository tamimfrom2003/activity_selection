//Activity Selection Problem

#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    cout << "Following activities are selected" << endl;
    i = 0;
    cout << i << " ";
    for (j = 1; j < n; j++)
    {
        if (s[j] >= f[i])
        {
            cout << j << " ";
            i = j;
        }
    }
}

int main()
{
    int s[] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int f[] = {4, 5, 6, 7, 9, 9, 10, 11, 12, 14, 16};
    int n = sizeof(s) / sizeof(s[0]);

    printMaxActivities(s, f, n);
    return 0;
}
