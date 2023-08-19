// greedy algo problems
#include <iostream>
using namespace std;

// NmeetingInRoom
int maxMeetings(int start[], int end[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (start[i] > start[j])
            {
                int tmp = start[i];
                start[i] = start[j];
                start[j] = tmp;
            }
            if (end[i] > end[j])
            {
                int tmp = end[i];
                end[i] = end[j];
                end[j] = tmp;
            }
        }
    }
    // for(int i=0;i<n;i++) cout<<start[i]<<" ";
    // cout<<"\n";
    // for(int i=0;i<n;i++) cout<<end[i]<<" ";
    // cout<<"\n";
    int count = 0, i = 0, j = 0;
    while (i < n)
    {
        cout<<start[i]<<" "<<end[i]<<"\n";
        if (start[i] < end[i])
            if (i == 0) count++;
            if(end[j] < start[i])
            {
                count++;
                j++;
            }
        i++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int start[] = {6, 1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = 6;
    int res = maxMeetings(start, end, n);
    cout << res;
    return 0;
}
