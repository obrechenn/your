#include <iostream>
#include <string>
int main(){
    std::string s;
    std::cin>>s;
    int summ  = 1;
    std::string res = "";
    for(int i = 0;i < s.length()-1;++i)
    {
        while(s[i] == s[i+1])
        {
            summ += 1;
            i++;
        }
        res += s[i];
        if(summ > 1)
        {   
            res += std::to_string(summ);
        }
        summ = 1;
    
    }
    std::cout<<res<<'\n';
    return 0;
}