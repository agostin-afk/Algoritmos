package maior_menor;
import javax.swing.JOptionPane;
public class Maior_menor3 {
	public static void main(String[] args) {
		float n1,n2,n3;
		String mensagem = "";
		n1 = Float.parseFloat(JOptionPane.showInputDialog("informe o primeiro valor: "));
		n2 = Float.parseFloat(JOptionPane.showInputDialog("informe o segundo valor: "));
		n3 = Float.parseFloat(JOptionPane.showInputDialog("informe o terceiro valor: "));
		if ((n1 > n2) && (n1 > n3)){
			mensagem =  mensagem + "O maior valor é: "+n1;
			if(n2 > n3) {
				mensagem = mensagem + "\nO menor valor é: "+n3;
			}
			else {
				mensagem = mensagem + "\nO menor valor é: "+n2;
			}
		}
		else if ((n2>n1) && (n2>n3)){
			mensagem = mensagem + "O maior valor é: "+n2;
			if (n1>n3) {
				mensagem = mensagem + "\nO menor valor é: "+n3;
			}
			else {
				mensagem = mensagem + "\nO menor valor é: "+n2;
			}
		}
		else {
			mensagem = mensagem + "O maior valor é: "+n3;
			if (n2>n1) {
				mensagem = mensagem + "\nO menor valor é: "+n1;
			}
			else {
				mensagem = mensagem + "\nO menor valor é: "+ n2;
			}
		}
		JOptionPane.showMessageDialog(null, mensagem);
	}
}