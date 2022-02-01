void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long long sum=0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    cout << sum-arr[4] << " " << sum-arr[0] << endl;
    
}
