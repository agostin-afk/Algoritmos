package SaldoCondicional;
import javax.swing.JOptionPane;
public class SaldoCondicional {
	public static void main(String[] args) {
		float saldo, cheque;
		String nome;
		nome = JOptionPane.showInputDialog("insira o seu nome: ");
		cheque = Float.parseFloat(JOptionPane.showInputDialog("informe o valor do cheque a ser realizado: "));
		saldo = 500;
		if (cheque > saldo) {
			JOptionPane.showMessageDialog(null,nome+", nao eh possivel realizar esse cheque pois voce nao possui saldo");
		}
		else {
				JOptionPane.showMessageDialog(null, nome+", cheque de r$"+cheque+" realizado, novo saldo: r$"+saldo);
		}
	}

}
