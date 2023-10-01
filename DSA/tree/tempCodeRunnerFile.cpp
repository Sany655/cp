f.inOrder(f.root);
    while (true)
    {
        cout << "\nwhat do you want to delete? ";
        int x;
        cin >> x;
        if (!f.delete_iterative(x))
            break;
        f.inOrder(f.root);
    }