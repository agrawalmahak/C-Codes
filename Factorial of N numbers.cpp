class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long>arr;
        long long fact=1;
        for(long long i=1;;i++)
        {
            if(fact>n)
            break;
            arr.push_back(fact);
            fact=fact*(i+1);
        }
        return arr;
    }
};
