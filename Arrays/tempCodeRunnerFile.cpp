 // Q-5 Given an array in sorted order ,given int x , find the no. of pairs
    // where sum=x

    int n, x, c = 0;
    cout << "Enter the no. of elements for the array :";
    cin >> n;
    int arr[n];
    cout << "Now enter the elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given array :";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Enter the element X : ";
    cin >> x;
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == x)
        {
            c++;
            i++, j--;
        }

        else
        {
            if (sum >= x)
            {
                j--;
            }
            else
                i++;
        }
    }
    cout << "No. of pairs : " << c;

    return 0;
}