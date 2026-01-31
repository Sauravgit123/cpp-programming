 int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout
        << "Given Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    int smx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != mx)

            smx = max(smx, arr[i]);
    }
    cout << endl
         << "Second max no. is : " << smx;