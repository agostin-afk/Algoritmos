package tabuadaDoWhile;
import javax.swing.JOptionPane;
public class TabuadaDoWhile {
	public static void main(String[] args) {
		Integer num, i = 1;
		String mensagem ="";
		num = Integer.parseInt(JOptionPane.showInputDialog("informe um valor para imprimir a tabuada: "));
		do {
			mensagem = mensagem + num+"x"+i+" = "+num*i+"\n";
			i++;
		}
		while(i<=10);
		JOptionPane.showMessageDialog(null, mensagem);
	}
}
