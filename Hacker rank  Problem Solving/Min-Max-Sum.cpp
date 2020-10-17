vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
  long int len = arr.size();
    unsigned long int i,max=0,min=0,sum=0;

    for(i=0;i<len;i++){    
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
        max= sum - arr[0];
        min= sum - arr[len-1];        
       cout<<min<<" "<<max;
       

}