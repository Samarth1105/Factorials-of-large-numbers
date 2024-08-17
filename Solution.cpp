class Solution {
public:
    void multiply(int x, vector<int>& res){
        int carry=0;
        
        for(int j=0;j<res.size();j++){
            int prod = res[j]*x + carry;
            res[j]= prod%10;
            carry= prod/10;
        }
        
        while(carry){
            res.push_back(carry%10);
            carry=carry/10;
        }
    }
    
    void swapInt(int &a, int &b){
        int temp=b;
        b=a;
        a=temp;
    }
    
    vector<int> factorial(int N){
        vector<int>res;
        res.push_back(1);
        
        for(int i=2;i<=N;i++){
            multiply(i,res);
        }
        
        int j=0, k=res.size()-1;
        while(j<k){
            swapInt(res[j],res[k]);
            j++,k--;
        }
        
        return res;
    }
};
