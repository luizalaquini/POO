public class J1_02 {
  
    public static void main (String[] args){
        int a, b, c, d;
        int x, y; //x = (ef), y = (abcd);

        for(a=1; a<10; a++){
            for(b=0; b<10; b++){
                for(c=0; c<10; c++){
                    for(d=0; d<10; d++){
                        x = ((a*10)+b) + ((c*10)+d);
                        y = x*x;

                        if (((a*1000)+(b*100)+(c*10)+d) == y){
                            System.out.println("" + y);
                        }
                    }
                }
            }
        }
    }
}
