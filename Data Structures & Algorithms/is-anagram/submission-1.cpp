class Solution {
public:
    bool isAnagram(string s, string t) {
        int A[26] = {0};
        int B[26] = {0};
        int c = 0;
        if(s.length() != t.length())
            return false;
        else{
            for(int i = 0; i <= s.length(); i++){
                switch(s[i]){
                    case 'a':
                        A[0]++;
                        break;
                    case 'b':
                        A[1]++;
                        break;
                    case 'c':
                        A[2]++;
                        break;
                    case 'd':
                        A[3]++;
                        break;
                    case 'e':
                        A[4]++;
                        break;
                    case 'f':
                        A[5]++;
                        break;
                    case 'g':
                        A[6]++;
                        break;
                    case 'h':
                        A[7]++;
                        break;
                    case 'i':
                        A[8]++;
                        break;
                    case 'j':
                        A[9]++;
                        break;
                    case 'k':
                        A[10]++;
                        break;
                    case 'l':
                        A[11]++;
                        break;
                    case 'm':
                        A[12]++;
                        break;
                    case 'n':
                        A[13]++;
                        break;
                    case 'o':
                        A[14]++;
                        break;
                    case 'p':
                        A[15]++;
                        break;
                    case 'q':
                        A[16]++;
                        break;
                    case 'r':
                        A[17]++;
                        break;
                    case 's':
                        A[18]++;
                        break;
                    case 't':
                        A[19]++;
                        break;
                    case 'u':
                        A[20]++;
                        break;
                    case 'v':
                        A[21]++;
                        break;
                    case 'w':
                        A[22]++;
                        break;
                    case 'x':
                        A[23]++;
                        break;
                    case 'y':
                        A[24]++;
                        break;
                    case 'z':
                        A[25]++;
                        break;
                }           
                switch(t[i]){
                    case 'a':
                        B[0]++;
                        break;
                    case 'b':
                        B[1]++;
                        break;
                    case 'c':
                        B[2]++;
                        break;
                    case 'd':
                        B[3]++;
                        break;
                    case 'e':
                        B[4]++;
                        break;
                    case 'f':
                        B[5]++;
                        break;
                    case 'g':
                        B[6]++;
                        break;
                    case 'h':
                        B[7]++;
                        break;
                    case 'i':
                        B[8]++;
                        break;
                    case 'j':
                        B[9]++;
                        break;
                    case 'k':
                        B[10]++;
                        break;
                    case 'l':
                        B[11]++;
                        break;
                    case 'm':
                        B[12]++;
                        break;
                    case 'n':
                        B[13]++;
                        break;
                    case 'o':
                        B[14]++;
                        break;
                    case 'p':
                        B[15]++;
                        break;
                    case 'q':
                        B[16]++;
                        break;
                    case 'r':
                        B[17]++;
                        break;
                    case 's':
                        B[18]++;
                        break;
                    case 't':
                        B[19]++;
                        break;
                    case 'u':
                        B[20]++;
                        break;
                    case 'v':
                        B[21]++;
                        break;
                    case 'w':
                        B[22]++;
                        break;
                    case 'x':
                        B[23]++;
                        break;
                    case 'y':
                        B[24]++;
                        break;
                    case 'z':
                        B[25]++;
                        break;
                }   
            }     
        }
        for(int i = 0; i <=25; i++){
            if(A[i] == B[i])
                c++;
            else
                return false;
        }
        if(c == 26)
            return true;
    }
};
