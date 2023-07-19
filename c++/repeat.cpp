int arr[] = {1,2,3,4,1};
    unordered_set <int> distinct;
    for(int i = 0;i<4;i++){
        distinct.insert(arr[i]);
    }
    if(distinct.size() == sizeof(arr)/sizeof(arr[0])){
        cout << "true";
    }
    else{
        cout << "false";
    }