package ABC_crescente;
import javax.swing.JOptionPane;
public class ABC_crescente {
	public static void main(String[] args) {
		float A,B,C;
		String mensagem=""; 
		A = Float.parseFloat(JOptionPane.showInputDialog("informe o primeiro valor: "));
		B = Float.parseFloat(JOptionPane.showInputDialog("informe o segundo valor "));
		C = Float.parseFloat(JOptionPane.showInputDialog("informe o terceiro valor: "));
		if ((A>B) && (A>C)) {
			if (B>C) {
				mensagem = mensagem + "A ordem é: "+C+" -> "+B+" -> "+A;
			}
			else {
				mensagem = mensagem + "A ordem é: "+B+" -> "+C+ " -> "+A;
			}
		}
		else if ((B>A) && (B>C)) {
			if (C>A) {
				mensagem = mensagem + "A ordem é: "+A+" -> "+C+" -> "+B;
			}
			else {
				mensagem = mensagem + "A ordem é: "+C+" -> "+A+" -> "+B;
			}
		}
		else {
			if (A>B) {
				mensagem =  mensagem + "A ordem é: "+B+" -> "+A+" -> "+C;
			}
			else {
				mensagem = mensagem + "A ordem é: "+A+" -> "+B+" -> "+C;
			}
		}
		JOptionPane.showMessageDialog(null, mensagem);
	}

}
