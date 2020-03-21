#include <math.h>


class Solution {
public:
    int reverse(int x) {
        int sign = 0;
        int i = 0, j = 0, k = 0;
        int *outp = new int[32];
        int output = 0;
        
        if(x >= (pow(2.0, 31.0) - 1) || x <= -pow(2.0, 31.0))
            return 0;
        
        if(x < 0)
            sign = 1;
        
        x = abs(x);
        
        i = pow(10.0,(float)(j+1));
        while(x % i != x)
        {
            
            outp[j] = x % i;
            //cout << i << ", " << outp[j] << ", " << endl;
            j++;
            i = pow(10.0,(float)(j+1));
        }
        outp[j] = x;
        k = j;
        //cout << i << ", " << outp[j] << ", " << endl;
        i = pow(10.0,(float)(j));
        //cout << i << ", " << j << ", " << endl;
        while(j!=0)
        {
            output += (outp[j] - outp[j-1])/i * pow(10.0,(float)(k-j));
            if((sign == 0 && output < 0) || (sign == 1 && -output > 0))
                return 0;
            j--;
            i = pow(10.0,(float)(j));
        }
        output += outp[0] * pow(10.0,(float)(k-j));
        
        if((sign == 0 && output < 0) || (sign == 1 && -output > 0))
            return 0;
        if(sign)
            output = -output;
              
        delete [] outp;
        return output;
    }
};