import java.util.ArrayList;
import java.util.List;

public class ChatMediator {
    private static ChatMediator instance;

    private List<User> users;

    private ChatMediator() {
        users = new ArrayList<>();
    }

    public static ChatMediator getInstance() {
        if (instance == null) {
            instance = new ChatMediator();
        }
        return instance;
    }

    public void registerUser(User user) {
        users.add(user);
    }

    public void sendMessageToAll(String message, String userFrom) {
        for (User user : users) {
            if (!user.getUserId().equals(userFrom)) {
                user.receiveMassage(message, userFrom);
            }
        }
    }

    public void sendMessageToUser(String message, String userFrom, String userTo) {
        for (User user : users) {
            if (user.getUserId().equals(userTo)) {
                user.receiveMassage(message, userFrom);
                break;
            }
        }
    }

    public void sendMessageToGroup(String message, String userFrom, String group) {
        for (User user : users) {
            if (isUserInGroup(user, group) && !user.getUserId().equals(userFrom)) {
                user.receiveMassage(message, userFrom);
            }
        }
    }

    private boolean isUserInGroup(User user, String group) {
        // Логіка перевірки, чи є користувач у групі
        // Повертає true, якщо користувач є у групі, інакше - false
        return true;
    }
}
