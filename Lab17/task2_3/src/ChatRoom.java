import java.util.ArrayList;
import java.util.List;

public class ChatRoom implements ChatMediator {
    private List<User> users;

    public ChatRoom() {
        this.users = new ArrayList<>();
    }

    @Override
    public void addUser(User user) {
        users.add(user);
    }

    @Override
    public void sendMessageAll(String message, String userId) {
        for (User user : users) {
            if (!user.getUserId().equals(userId)) {
                user.receiveMessage(message, userId);
            }
        }
    }

    @Override
    public void sendMessage(String message, String userFrom, String userTo) {
        for (User user : users) {
            if (user.getUserId().equals(userTo)) {
                user.receiveMessage(message, userFrom);
                break;
            }
        }
    }
}
