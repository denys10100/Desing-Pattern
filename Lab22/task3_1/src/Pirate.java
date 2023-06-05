class Pirate extends Character {

  @Override
  public void pickUpWeapon() {
    System.out.println("Pick up sword");
  }

  @Override
  public void defenseAction() {
    System.out.println("Defend with sword");
  }

  @Override
  public void moveToSafety() {
    System.out.println("Return to the ship");
  }

}
