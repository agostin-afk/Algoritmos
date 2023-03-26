package saldo;
import javax.swing.JOptionPane;
public class ExeSaldo {
	public static void main(String[] args) {
		float saldo, saldo_final, cheque;
		cheque = Float.parseFloat(JOptionPane.showInputDialog("informe o valor do cheque: "));
		saldo = 500;
		saldo_final = saldo - cheque;
		JOptionPane.showMessageDialog(null,"O valor do saldo atua eh: "+saldo_final);
	}
}
