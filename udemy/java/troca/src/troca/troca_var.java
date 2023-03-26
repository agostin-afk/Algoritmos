package troca;
import javax.swing.JOptionPane;
public class troca_var {

	public static void main(String[] args) {
		int A,B,aux;
		A = Integer.parseInt(JOptionPane.showInputDialog("Informe o primeiro numero "));
		B = Integer.parseInt(JOptionPane.showInputDialog("informe o segundo numero "));
		aux = A;
		A = B;
		B = aux;
		JOptionPane.showMessageDialog(null,"O novo valor do primeiro numero eh: "+ A);
		JOptionPane.showMessageDialog(null,"O novo valor do segundo numero eh: "+ B);
		

	}

}
