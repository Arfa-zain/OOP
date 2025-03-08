import java.util.Scanner;

public class Dishes {
    private String type;
    private String ingredients;
    private String cuisine;

    public void getDishDetails() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the type of dish (e.g., sweets, savory, etc.): ");
        type = scanner.nextLine();

        System.out.print("Enter the ingredients used: ");
        ingredients = scanner.nextLine();

        System.out.print("Enter the cuisine (e.g., Asian, Italian, etc.): ");
        cuisine = scanner.nextLine();
    }

    public void displayDishDetails() {
        System.out.println("\nWelcome to the Asian Restaurant");
        System.out.println("Your selected choice of Dish is " + type);
        System.out.println("Your Dish contains the following ingredients: " + ingredients);
        System.out.println("Your dish belongs to the " + cuisine + " cuisine.");
    }

    public static void main(String[] args) {
        Dishes dish = new Dishes();
        dish.getDishDetails();
        dish.displayDishDetails();
    }
}