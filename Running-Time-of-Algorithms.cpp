int runningTime(vector<int> arr)
{
    int n = arr.size();
    int time_count = 0;
    
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j;

        for (j = i-1; j >= 0 && arr[j] > key; --j)
        {
            arr[j+1] = arr[j];
            time_count++;
        }

        arr[j+1] = key;
    }

    return time_count;
}

