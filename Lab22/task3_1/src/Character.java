/**
 * Базовий клас для героїв
 */
abstract class Character {

    /**
     * Підняти зброю
     */
    public abstract void pickUpWeapon();

    /**
     * Захистна дія
     */
    public abstract void defenseAction();

    /**
     * Переміщення в безпечне місце
     */
    public abstract void moveToSafety();

    /**
     * Шаблонний метод для захисту та відступу
     */
    public void defendAgainstAttack() {
        pickUpWeapon();
        defenseAction();
        moveToSafety();
        System.out.println();
    }

}