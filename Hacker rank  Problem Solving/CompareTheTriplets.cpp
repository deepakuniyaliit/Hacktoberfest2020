vector<int> compareTriplets(vector<int> a, vector<int> b) {
      int aliceResult = 0;
      int bobResult = 0;

for(int i = 0; i < 3; i++)
{
  if(a[i] && b[i] < 100 && a[i] && b[i] > 1) 
     { 
        if(a[i] > b[i])
          {
            aliceResult++;
          }

        if(a[i] < b[i])
          {
            bobResult++;
          }
     }
}
return {aliceResult,bobResult};
}