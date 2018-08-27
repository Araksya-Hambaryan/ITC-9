public class Main {

    public static void main(String[] args) {

        Hoagie customer1 = new ItalianHoagie();
        customer1.makeSandwich();

        System.out.println();

        Hoagie customer2 = new VeggieHoagie();
        customer2.makeSandwich();

    }
}
