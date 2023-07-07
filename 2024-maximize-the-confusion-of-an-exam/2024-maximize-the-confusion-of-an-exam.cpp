class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int head,tail=0,len=1,ct=0,cf=0;
        
        //1. itterate through the string
        for(head=0;head<answerKey.size();head++)
        {    
            //2. if the string is NULL then return 0 
             if(answerKey.size()==0) return 0;
            
            //3.count the number of T and F 
            //4. keep increasing till the min(ct,cf)<=k
            //{in a substring if any of T or F is equal or less than k }
             if(answerKey[head]=='T')
                 ct++;
             else 
                cf++;
            
            //5.as soon as both ct and cf gets greater than k , substring cant be changed
            //therefore, strat shrinking the window from the tail
            //till any one of ct or cf becomes <=k
            while(min(ct,cf)>k)
            {
                if(answerKey[tail]=='T')
                    ct--;
                else 
                    cf--;
               tail++;
            }
           
            //6. calculate the value of len that is max
            len=max(len,head-tail+1);
        }
        
        return len;
    }
};