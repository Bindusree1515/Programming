//Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
//Output: [4, 2]

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int largest = a[0];
    for ( int i =0 ;i <n; i++){
      if (a[i] > largest) {
        largest = a[i];
      }
    }

    int slargest = INT_MIN; //*** INT_MIN
    for ( int i =0 ;i <n; i++){
      if ((a[i] > slargest) && a[i]!=largest) {
        slargest = a[i];
      }
    }

    vector<int>res;
    res.push_back(slargest);

    int smallest = a[0];
    for ( int i =0 ;i <n; i++){
      if (a[i] < smallest) {
        smallest = a[i];
      }
    }

    int ssmallest = INT_MAX; //*** before this for 1 2 3 4 5 output i got was 
    // 4 1 but not 4 2 initially ssmallest was asssigned to a[0]
  
    for ( int i =0 ;i <n; i++){
      if (a[i] < ssmallest && a[i]!=smallest) {
        ssmallest = a[i];
      }
    }

    res.push_back(ssmallest);

    return res;
}
