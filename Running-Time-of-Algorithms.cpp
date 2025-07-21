#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'runningTime' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int runningTime(vector<int> arr)
{
    int running_time = 0;
    int n = arr.size();
    
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j;

        for (j = i-1; j >= 0 && arr[j] > key; --j)
        {
            arr[j+1] = arr[j];
            running_time++;
        }

        arr[j+1] = key;
    }

    return running_time;
}

