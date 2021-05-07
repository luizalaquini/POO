public class J1_01 {

    public static void main (String[] args){
        double s1 = 0, s2 = 0, s3 = 0;
        double i, j;

        for (i=1, j=1; i<=99 && j<=50; i+=2, j++){
            s1 += (i/j);
        }
        System.out.println("S1 = " + s1);

        for (i=1, j=50; i<=50; i++, j--){
            s2 += (Math.pow(2, i)/j);
        }
        System.out.println("S2 = " + s2);

        String op = "-";
        for (s3 = 1, i=2, j=4; i<=10; i++, j=(i*i)){
            if (op == "-"){
                s3 -= (i/j);
                op = "+";
            }
            else{
                s3 += (i/j);
                op = "-";
            }
        }
        System.out.println("S3 = " + s3);
    }
}