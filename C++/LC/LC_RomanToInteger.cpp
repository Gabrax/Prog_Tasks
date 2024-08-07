#include <iostream>
#include <unordered_map>

int romanToInt(const std::string& s) {
  std::cin.tie(0)->sync_with_stdio(0);

  std::unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
  int res = 0;
  for(int i = 0;i < s.size();i++){
    if(m[s[i]] < m[s[i+1]]) res -= m[s[i]];
    else res += m[s[i]];
  }

  return res;
}

int main(){

  std::string res = "III";
  std::cout << romanToInt(res);

}
