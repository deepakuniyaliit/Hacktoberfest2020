vector<string> split_string(string);

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {
   int count = 0;
        int max = 0;
        for(int i=0; i< ar.size(); i++){
            if(ar[i] == max){
                count = count + 1;
            }
            if(ar[i] > max){
                max = ar[i];
                count = 1;
            }
        }
        return count;
}