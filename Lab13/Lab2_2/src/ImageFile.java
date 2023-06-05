import javax.imageio.ImageIO;
import javax.swing.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

public class ImageFile implements DisplayObject {

    private final String path;
    private BufferedImage image;

    public ImageFile(String path) {
        this.path = path;
    }

    public void display() {
        if (image == null) {
            loadImage();
        }

        System.out.println("Displaying image.");
        ImageIcon icon = new ImageIcon(image);
        JLabel label = new JLabel(icon);
        JOptionPane.showMessageDialog(null, label);
    }

    private void loadImage() {
        System.out.println("Loading image " + path + "...");
        try {
            image = ImageIO.read(new File(path));
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
