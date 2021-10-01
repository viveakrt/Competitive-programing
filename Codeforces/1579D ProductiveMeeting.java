//import java.io.IOException;
import java.io.*;
import java.util.*;

public class ProductiveMeeting {
    static InputReader inputReader=new InputReader(System.in);
    static void solve()
    {

        int n=inputReader.nextInt();
        int arr[]=inputReader.nextIntArray(n);
        PriorityQueue<Person>priorityQueue=new PriorityQueue<>((a,b)->b.value-a.value);
        for (int i=0;i<n;i++) {
            if (arr[i] > 0) {
                priorityQueue.add(new Person(i + 1, arr[i]));
            }
        }
        int count=0;
        List<String>answer=new ArrayList<>();
        while (priorityQueue.size()>=2)
        {
            Person p1= priorityQueue.poll();
            Person p2=priorityQueue.poll();
            p1.value--;
            p2.value--;
            count++;
            if (p1.value>0)
            {
                priorityQueue.add(p1);
            }
            if (p2.value>0)
            {
                priorityQueue.add(p2);
            }
            String temp=p1.id+" "+p2.id;
            answer.add(temp);
        }
        out.println(count);
        for (String ele:answer)
        {
            out.println(ele);
        }
    }
    static class  Person
    {
        int id,value;
        Person(int id,int value)
        {
            this.id=id;
            this.value=value;
        }

    }
    static PrintWriter out=new PrintWriter((System.out));
    public static void main(String args[])throws IOException
    {
        int t=inputReader.nextInt();
        while(t-->0)
        {
            solve();
        }
        out.close();
    }
    static class InputReader {

        private InputStream stream;
        private byte[] buf = new byte[8192];
        private int curChar, snumChars;
        private SpaceCharFilter filter;

        public InputReader(InputStream stream) {
            this.stream = stream;
        }

        public int snext() {
            if (snumChars == -1)
                throw new InputMismatchException();
            if (curChar >= snumChars) {
                curChar = 0;
                try {
                    snumChars = stream.read(buf);
                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (snumChars <= 0)
                    return -1;
            }
            return buf[curChar++];
        }

        public int nextInt() {
            int c = snext();
            while (isSpaceChar(c))
                c = snext();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = snext();
            }
            int res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = snext();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public long nextLong() {
            int c = snext();
            while (isSpaceChar(c))
                c = snext();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = snext();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = snext();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public int[] nextIntArray(int n) {
            int a[] = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = nextInt();
            return a;
        }

        public String readString() {
            int c = snext();
            while (isSpaceChar(c))
                c = snext();
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = snext();
            } while (!isSpaceChar(c));
            return res.toString();
        }

        public boolean isSpaceChar(int c) {
            if (filter != null)
                return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }

        public interface SpaceCharFilter {
            public boolean isSpaceChar(int ch);
        }
    }
}
