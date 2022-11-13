import java.util.*;
public class WordCount{
    public static void main(String[] args){
        String now;
        int i;
        String s=new String();
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        String words[] = s.split("\\s");
        for(i = 0; i<words.length;i++){
            now=words[i];
            if(now==null){
                continue;
            }
            int count=1;
            for(int j=i+1; j<words.length;j++){
                if(now.equals(words[j])){
                    count += 1;
                    words[j]=null;
                }
            }
            System.out.println(now + " - " +count);
        }
    }
}