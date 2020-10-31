#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the longestCommonSubsequence function below.
vector<int> longestCommonSubsequence(vector<int> a, vector<int> b) {
    int n,m;
    //cin>>n>>m;
    //int a[n],b[m];
    // for(int i=0;i<n;i++)
    //     cin>>a[i];
    // for(int i=0;i<m;i++)
    //     cin>>b[i];
    n = a.size();
    m = b.size();
    int dp[n+1][m+1];
    for(int i=0;i<=m;i++)
        dp[0][i]=0;
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    //dp[0][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=m;j++)
    //         cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    int arr[dp[n][m]];
    int k=0;
    //for(int i=n;i>=0;i--){
    int i=n;
        for(int j=m;j>0;){
            //cout<<i<<" "<<j<<"!!";
            if(dp[i][j]==dp[i][j-1]){
                j--;
                continue;
            }
            else if(dp[i][j]==dp[i-1][j])
                i--;
            else{
                arr[k++] = a[i-1];
                i--;
                j--;
            }
        }
    //}
    vector<int>ret;
    for(int i=dp[n][m]-1;i>=0;i--)
        ret.push_back(arr[i]);
    //cout<<endl;
    return ret;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    string b_temp_temp;
    getline(cin, b_temp_temp);

    vector<string> b_temp = split_string(b_temp_temp);

    vector<int> b(m);

    for (int i = 0; i < m; i++) {
        int b_item = stoi(b_temp[i]);

        b[i] = b_item;
    }

    vector<int> result = longestCommonSubsequence(a, b);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
