import java.awt.*;
import java.awt.event.*;

class EventDemo extends Frame implements ActionListener {
    Button b;

    EventDemo() {
        b = new Button("click me");
        b.setBounds(100, 100, 80, 30);

        b.addActionListener(this);

        add(b);
        setSize(300, 200);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        System.out.println("button clicked");
    }

    public static void main(String[] args) {
        new EventDemo();
    }
}