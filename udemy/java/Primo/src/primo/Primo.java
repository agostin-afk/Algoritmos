package primo;
import javax.swing.JOptionPane;
public class Primo {
	public static void main(String[] args) {
		int num, i, contador;
		num = Integer.parseInt(JOptionPane.showInputDialog("informe um numeor para saber se é primo ou não"));
		contador = 0;
		i = 2;
		while(i < num) {
			if (num%i == 0) {
				contador++;
			}
			i++;
		}
		if(contador != 0  ) {
			JOptionPane.showMessageDialog(null, "O numero "+num+" não é primo");
		}
		else {
			JOptionPane.showMessageDialog(null, "O numero "+num+" é primo");
		}
	
	}

}
