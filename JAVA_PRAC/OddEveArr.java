import java.util.*;

class OddEveArr{
    public static void main(String[] args)
    {Scanner s=new Scanner(System.in);
    System.out.println("Enter array size: ");
    int size = s.nextInt();
    int arr[]=new int[size];
    int[] oddarr=new int[size];
    int[] evenarr=new int[size];
    System.out.println("Enter elements: ");
    for(int i=0; i<arr.length;i++){
        arr[i] = s.nextInt();
    }

    for(int i=0; i<arr.length; i++){
        if(arr[i]%2==0){
            evenarr[i] = arr[i];
        }
        else{
            oddarr[i]=arr[i];
        }
    }
    for(int i=0; i<evenarr.length;i++){
        if(evenarr[i]!=0)
        {System.out.println("Even Array: "+evenarr[i]);}
    }
    for(int i=0; i<oddarr.length;i++){
        if(oddarr[i]!=0){
        System.out.println("Odd Array: "+oddarr[i]);}
    }
}

}