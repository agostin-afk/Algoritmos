package fibonacci;
import javax.swing.JOptionPane;
public class Fibonacci {
	public static void main(String[] args) {
		int termo, num_novo, num_atual, num_anterior;
		String mensagem = "";
		termo = Integer.parseInt(JOptionPane.showInputDialog("informe ate qual termo de fibonacci voce quer ver: "));
		num_anterior = 0;
		num_novo = 1;
		num_atual = 1;
		for(int i = 1; i <= termo ;i++) {
			mensagem = mensagem + "O termo "+i+"° é: "+num_novo+"\n";
			num_novo = num_atual + num_anterior;
			num_anterior = num_atual;
			num_atual = num_novo;
		}
		JOptionPane.showMessageDialog(null,mensagem);
		
	}

}
