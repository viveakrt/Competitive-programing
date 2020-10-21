using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int n, k, t; 
    int cnt = 0; 
    cin >> n >> k; 
    for (int i=0; i<n; i++) 
    { 
        cin >> t; 
        if (t % k == 0) 
            cnt++; 
    } 
    cout << cnt << "\n"; 
    return 0; 
} 
