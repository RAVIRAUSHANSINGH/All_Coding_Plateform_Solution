void plusMinus(vector<int> arr) {
    float a=0,b=0,c=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
             a++;
        }
        else if(arr[i]>0){
            b++;
        } 
        else{
           c++; 
        } 
    }
    // double x,y,z;
    cout<<fixed<<setprecision(6)<<(b/n)<<endl;
    cout<<fixed<<setprecision(6)<<(c/n)<<endl;
    cout<<fixed<<setprecision(6)<<(a/n)<<endl;

}
