class Solution {
public:
    double Power(double base, int exponent) {
        if(equal(base,0.0)) return 0;
        double res=0;
        if(exponent>0){
            res=powerUnsignedExponent(base,exponent);
        }
        else{
            res=1.0/powerUnsignedExponent(base,(unsigned int)(-exponent));
        }
        return res;
        
    }
private:
    bool equal(double num1,double num2){
        if((num1-num2)>-0.0000001&&(num1-num2)<0.0000001){
            return true;
        }
        else return false;
    }
    double powerUnsignedExponent(double base,unsigned int exp){
        if(exp==0) return 1;
        if(exp==1) return base;
        double res=1;
        for(int i=1;i<=exp;++i){
            res*=base;
        }
        return res;
    }
};

//第二种
class Solution {
public:
    double Power(double base, int exponent) {
        if(equal(base,0.0)) return 0;
        double res=0;
        if(exponent>0){
            res=powerUnsignedExponent(base,exponent);
        }
        else{
            res=1.0/powerUnsignedExponent(base,(unsigned int)(-exponent));
        }
        return res;
        
    }
private:
    bool equal(double num1,double num2){
        if((num1-num2)>-0.0000001&&(num1-num2)<0.0000001){
            return true;
        }
        else return false;
    }
    double powerUnsignedExponent(double base,unsigned int exp){
        if(exp==0) return 1;
        if(exp==1) return base;
        double res=powerUnsignedExponent(base,exp>>1);
       res*=res;
        if(exp&0x1==1) res*=base;
        return res;
    }
};