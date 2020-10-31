#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

typedef long long int ll;

ll process(string input){
  ll res = input.size(), cur = 0, mn = 0;

  for(int i = 0; i < input.size(); i++){
    //printf("char:%c | res:%lld\n", input[i], res);

    if(input[i] == '+'){
      //printf("oi\n");
      cur +=1;
    }else{
      //printf("tchau\n");
      cur -=1;
    }
    //printf("cur:%lld - mn:%lld\n", cur, mn);
    if(cur < mn){
      mn = cur;
      res += i + 1;
      //printf("res:%lld\n", res);
    }
  }
  return res;
}

int main(){
  ll t, ans;
  string input;

  cin >> t;

  while(t--){
    
    cin >> input;
    ans = process(input);
    cout << ans << endl;

  }

  return 0;
}