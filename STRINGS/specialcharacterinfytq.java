import java.util.*;

public class specialcharacterinfytq {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        str = sc.nextLine();

        int hash[] = new int[128];
        Arrays.fill(hash, 0);
        for (int i = 0; i < str.length(); i++) {
            hash[(int) str.charAt(i)]++;
        }

        int maxs = 0, maxn = 0, count = 0;
        for (int i = 48; i <= 57; i++) {
            if (hash[i] > maxn)
                maxn = hash[i];
        }
        for (int i = 65; i <= 90; i++) {
            if (hash[i] > maxs)
                maxs = hash[i];
        }
        for (int i = 97; i <= 122; i++) {
            if (hash[i] > maxs)
                maxs = hash[i];
        }
    

        for (int i = 48; i <= 57; i++) {
            if (hash[i] > 0) {
                count++;
                break;
            }
        }
        int sp = Math.abs(maxn - maxs);
        if (count > 0) {
            String ns = str.replace(str.charAt(sp), '*');
            ns = ns.replace("*", "");
            String fs = ns.replace(' ', '$');
            System.out.println(fs);
        } else {
            String fs = str.replace(' ', '$');
            System.out.println(fs);
        }
    }

}