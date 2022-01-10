// problem name: Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
// problem link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
// submission link: https://practice.geeksforgeeks.org/viewSol.php?subId=511ae183d28625620778316f5d463b75&pid=700243&user=devanshikatyal09

string encode(string src)
{     
  string ans="";
  int n= src.size();
  for(int i=0;i<src.size();i++){
   int c = 1;
        while (i < n - 1 && src[i] == src[i + 1]) {
            c++;
            i++;
        }
    ans+= src[i];
    stringstream ss;  
    ss<<c;  
    string s1;  
    ss>>s1;  
    ans+= s1;
    }
  return ans;
}     
 
