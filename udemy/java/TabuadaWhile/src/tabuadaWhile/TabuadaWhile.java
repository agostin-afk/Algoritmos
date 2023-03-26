package tabuadaWhile;
import javax.swing.JOptionPane;
public class TabuadaWhile {
	public static void main(String[] args) {
		Integer num, i;
		String mensagem = "";
		num = Integer.parseInt(JOptionPane.showInputDialog("informe um numero para imprimir a tabuada: "));
		i = 1;
		while(i<=10) {
			mensagem = mensagem + num+"x"+i+" = "+num*i+"\n";
			i++;
		}
		JOptionPane.showMessageDialog(null, mensagem);
	}

}
