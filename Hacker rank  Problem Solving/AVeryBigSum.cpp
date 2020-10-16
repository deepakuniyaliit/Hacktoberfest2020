vector<string> split_string(string);

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
long sum=0;
    for(int i=0;i<ar.size();i++)
    {
       sum+=ar[i];
    }
  return sum;

}
