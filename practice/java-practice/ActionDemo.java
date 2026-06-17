import java.awt.*;
import java.awt.event.*;

class ActionDemo {
    public static void main(String[] args) {
        Frame f = new Frame();
        Button b = new Button("click");

        b.setBounds(100, 100, 80, 70);

        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("clicked");
            }
        });

        f.add(b);
        f.setSize(300, 300);
        f.setLayout(null);
        f.setVisible(true);
    }
}