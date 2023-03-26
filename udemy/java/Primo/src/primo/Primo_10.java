package primo;
import javax.swing.JOptionPane;
public class Primo_10 {
	public static void main(String[] args) {
		int num, i, contador, n;
		boolean c;
		String mensagem = "";
		n = Integer.parseInt(JOptionPane.showInputDialog("até qual numero primo você quer ver ?"));
		contador = 1;
		num = 2;
		while(contador <= n) {
			c = true;
			i = 2;
			while((i <= num/2) && (c == true)){ ///num/2 pois só precisamos alanisar até a metade do numero, não ha divisores do numero x maiores que x/2
				if (num%i == 0) {
					c = false;
				}
				i++;
			}
			if(c == true) {
				mensagem = mensagem + "o numero "+num+" é o "+contador+"° numero primo\n";
				contador++;
			}
			num++;
		}
		JOptionPane.showMessageDialog(null, mensagem);
	}

}
