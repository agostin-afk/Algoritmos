package Mod;
import javax.swing.JOptionPane;
public class Mod {
	public static void main(String[] args) {
		float num;
		num = Float.parseFloat(JOptionPane.showInputDialog("informe o numero para saber se é par ou não"));
		if ( num % 2 == 0) {
			JOptionPane.showMessageDialog(null, "Esse numero é par ");
		}
		else {
			JOptionPane.showMessageDialog(null, "Esse numero é impar ");
		}
	}
}
