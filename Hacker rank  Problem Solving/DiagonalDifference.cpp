int diagonalDifference(vector<vector<int>> a) {
    int sum1=0,sum2=0;
for(int i=0; i<a.size(); i++){
        sum1+=a[i][i];
        sum2+=a[i][a.size()-1-i];
    }
    return abs(sum1-sum2);
}