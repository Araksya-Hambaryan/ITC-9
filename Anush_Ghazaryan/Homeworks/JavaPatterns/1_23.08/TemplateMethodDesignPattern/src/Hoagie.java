public abstract class Hoagie {

    boolean afterFirstCondiment = false;

    final void makeSandwich() {

        cutBun();

        if (customerWantsMeat()) {
            addMeat();
            afterFirstCondiment = true;
        }
        if (customerWantsCheese()) {
            if (afterFirstCondiment) {
                System.out.println("\n");
            }
            addCheese();
            afterFirstCondiment = true;
        }
        if (customerWantsCondiments()) {
            if (afterFirstCondiment) {
                System.out.println("\n");
            }
            addCondiments();
            afterFirstCondiment = true;
        }
        if (customerWantsVegitable()) {

        }

        wrapTheHoagie();
    }

    public void cutBun() {
        System.out.println("The Hoagie is cut ");
    }

    abstract void addMeat();

    abstract void addCheese();

    abstract void addVegitables();

    abstract void addCondiments();

    boolean customerWantsMeat() {
        return true;
    }

    boolean customerWantsCheese() {
        return true;
    }

    boolean customerWantsCondiments() {
        return true;
    }

    boolean customerWantsVegitable() {
        return true;
    }

    public void wrapTheHoagie() {
        System.out.println("Wrap the Hoagie");
    }
}
