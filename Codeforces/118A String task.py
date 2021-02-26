#https://codeforces.com/problemset/problem/118/A

n = input()
r = ""
for i in n.lower():
    if(i=="a" or i=="o" or i=="y" or i=="e" or i=="u" or i=="i"):
        pass
    else:
        r+='.'
        r+=i
print(r)





























'''
import java.util.*;
public class Main
{
    public static void main(String arg[])
    {
        Scanner in=new Scanner(System.in);
        String string=in.next();
        String str = "";
        
        string = string.toLowerCase();
   
        for(int i=0; i<string.length();i++) {
            if(string.charAt(i) != 'a'&& string.charAt(i) != 'e'&& string.charAt(i) != 'i'&& string.charAt(i) !='o'&& string.charAt(i) !='u'&& string.charAt(i) !='y') {
                str += "." + string.charAt(i);
            }
            
        }
        
        System.out.println(str);
        
        
    }
}
'''