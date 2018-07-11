class Main {
	public static void main(String[] args) {

		ArrayList array = new ArrayList(10,75);
		for(int i = 0; i < array.getSize() - 7; ++i ) {
			array.add(i);
			System.out.println("cup = " + array.cup + " | array[" + i + "] = " + array.get(i));
		}

		array.add(59);
		System.out.println("-------------------");
        for(int i = 0; i < array.getSize(); ++i ) {
            System.out.println("cup = " + array.cup + " | array[" + i + "] = " + array.get(i));
       	}
	}
}
