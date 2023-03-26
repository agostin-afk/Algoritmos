package repeticao_10pares;
import javax.swing.JOptionPane;
public class Repeticao_10pares {
	public static void main(String[] args) {
		Integer cont_par, n;
		cont_par = 1;
		n = 0;
		String mensagem="";
		while(cont_par <= 10) {
			n++;
			if(n%2 ==0) {
				cont_par++;
				mensagem =  mensagem + n+" é um numero par\n";
			}
		}
		JOptionPane.showMessageDialog(null, mensagem);
	}

}
