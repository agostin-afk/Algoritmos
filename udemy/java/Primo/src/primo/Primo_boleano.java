package primo;
import javax.swing.JOptionPane;
public class Primo_boleano {
	public static void main(String[] args) {
		int num, i;
		boolean c;
		num = Integer.parseInt(JOptionPane.showInputDialog("informe um numeor para saber se é primo ou não"));
		c = true;
		i = 2;
		while(i < num/2) { ///num/2 pois só precisamos alanisar até a metade do numero, não ha divisores do numero x maiores que x/2
			if (num%i == 0) {
				c = false;
			}
			i++;
		}
		if(c == false) {
			JOptionPane.showMessageDialog(null, "O numero "+num+" não é primo");
		}
		else {
			JOptionPane.showMessageDialog(null, "O numero "+num+" é primo");
		}
	
	}

}
