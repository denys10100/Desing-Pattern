public class Client {
    public static void main(String[] args) {
        ConcreteUser user1 = new ConcreteUser("User1");
        ConcreteUser user2 = new ConcreteUser("User2");
        ConcreteUser user3 = new ConcreteUser("User3");
        ConcreteUser user4 = new ConcreteUser("User4");

        ChatMediator mediator = ChatMediator.getInstance();
        mediator.registerUser(user1);
        mediator.registerUser(user2);
        mediator.registerUser(user3);
        mediator.registerUser(user4);

        user1.sendMessageAll("Hello, world!");

        user2.sendMessage("Hello!", "User1");

        user3.sendMessageToGroup("Hello, admins!", "admins");
    }
}
