import java.util.ArrayList;

class CustomArrayList
    int n = 4;

    class Data{
        int roll;
        String name;
        int Marks;
        long phone;

        Data(int roll, String name, int marks, long phone)
        {
            this.roll = roll;
            this.name = name;
            this.marks = marks;
            this.phone = phone;
            }
        }    
        public static void main(String args[]){
            int roll[] = {1, 2, 3, 4};
            String name[] = {"Manuk", "Aren", "Mari" "Anna"};
            int marks[] = {100, 99, 55, 50};
            long phone[] = {37477777777, 37455555555, 3749111111111,060606060};
            CustomArrayList custom = new CustomArrayList();
            custom.addValues(roll, name, marks, phone);
        }
        public void addValues(int roll[], String name[], int marks[], long phone[])
        {
            ArrayList<Data> list=new ArrayList<>();
            for (int i = 0; i < n; i++)
            {
                list.add(new Data(roll[i], name[i], marks[i], phone[i]));

                }
                printValues(list);
            }
            public void printValues(ArrayList<Data> list)
            {
                for (int i = 0; i < n; i++){
                    Data data = list.get(i);
                    System.out.println(data.roll+" "+data.name+" "+data.marks+" "+data.phone);
                }
            }
