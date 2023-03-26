package emprest;
import javax.swing.JOptionPane;
public class Exeemprest {
	public static void main(String[] args) {
		float taxa, valor;
		int temp;
		valor = Float.parseFloat(JOptionPane.showInputDialog("informe o valor a pagar: "));
		taxa = Float.parseFloat(JOptionPane.showInputDialog("informe a taxa: "));
		temp = Integer.parseInt(JOptionPane.showInputDialog("informe a quantidade de dias de atraso: "));
		valor  = valor + (valor*(taxa/100)*temp);
		JOptionPane.showMessageDialog(null,"O valor que voce tera que pagar eh: " + valor);
	}

}
