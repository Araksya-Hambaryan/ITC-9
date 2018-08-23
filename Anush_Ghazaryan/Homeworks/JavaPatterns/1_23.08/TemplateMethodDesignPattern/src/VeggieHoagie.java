public class VeggieHoagie extends Hoagie {


    String[] veggiesUsed = {"Lettuce", "Tomatoes", "Onions", "Sweet Peppers"};
    String[] condimentsUsed = {"Oil", "Vinegar"};

    boolean customerWantsMeat() {
        return false;
    }

    boolean customerWantsCheese() {
        return false;
    }

    @Override
    void addMeat() {
    }

    @Override
    void addCheese() {
    }

    @Override
    void addVegitables() {

        System.out.println("Adding the Veggies");

        for (String veggie : veggiesUsed) {
            System.out.println(veggie + " ");
        }

    }

    @Override
    void addCondiments() {

        System.out.println("Adding the Condiments");

        for (String condiment : condimentsUsed) {
            System.out.println(condiment + " ");
        }

    }
}
