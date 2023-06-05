public class Client {
    public static void main(String[] args) {
        ChatMediator chatMediator = new ChatRoom();

        ConcreteUser user1 = new ConcreteUser("User1", chatMediator);
        ConcreteUser user2 = new ConcreteUser("User2", chatMediator);
        ConcreteUser user3 = new ConcreteUser("User3", chatMediator);
        ConcreteUser user4 = new ConcreteUser("User4", chatMediator);

        chatMediator.addUser(user1);
        chatMediator.addUser(user2);
        chatMediator.addUser(user3);
        chatMediator.addUser(user4);

        user1.sendMessageAll("Hello, world!");

        user2.sendMessage("Hello!", "User1");
    }
}
