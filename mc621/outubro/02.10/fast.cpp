#include<string>
#include<iostream>

using namespace std;

typedef long long int ll;

ll multiplicar(ll l1, ll l2){
  string num1 = to_string(l1);
  string num2 = to_string(l2);
  ll res = 0;

  for(int i=0; i < num2.length(); i++){
    int carry = 0;
    string temp_res = "";    //intermediário 

    for(int j=num1.length()-1; j>=0; j--){
        int num = (num2[i] - '0') * (num1[j] - '0') + carry;

        if(num > 9 && j > 0){
          temp_res = to_string(num % 10) + temp_res;
          carry = num / 10;
        }else{
          temp_res = to_string(num) + temp_res;
          carry = 0;
        }
    }

    res *=10;
    res += stoi(temp_res);
  }
  return res; 
}

int main(){
  int t;
  ll l1, l2, res;

  cin >> t;

  while(t--){

    cin >> l1 >> l2;

    res = multiplicar(l1,l2);
    cout << res;
    cout << endl;

  }


  return 0;
}