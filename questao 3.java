import java.util.List;
import java.util.ArrayList;
public class ArrayListTest {
    public static void main(String args[])
    {
        List<String> arrayList=new ArrayList<String>();
        arrayList.add("a");
        arrayList.add("a");
        arrayList.clear();
        arrayList.add("b");
        arrayList.add("b");
   
        System.out.println(arrayList.size());
    }
}