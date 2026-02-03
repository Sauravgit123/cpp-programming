// Q-3 diff/b even indexes sum to odd one

    vector<int> v(6);
    cout << "Enter the elements :";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int esum = 0, osum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            esum += v[i];
        }
        else
            osum += v[i];
    }

    cout << "Diff in sum of even to odd indexes : " << esum - osum << endl;