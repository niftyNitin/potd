int equilibriumPoint(long long a[], int n) {
    
        int sum =0;
        int lSum = 0;
        
        for(int i = 0; i<n; i++){
            sum+= a[i];
        }
        for(int j = 0; j < n; j++){
            if(lSum == sum - a[j]){
                return j + 1;
            }
            sum-=a[j];
            lSum+= a[j];
        }
        return -1;
    }
