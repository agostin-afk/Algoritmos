package Se_triangulo;

import javax.swing.JOptionPane;

public class SE_triangulo {

	public static void main(String[] args) {
		float l1,l2,l3;
		String mensagem= "";
		l1 = Float.parseFloat(JOptionPane.showInputDialog("informe o primeiro lado do triangulo:  "));
		l2 = Float.parseFloat(JOptionPane.showInputDialog("informe o segundo lado do triangulo:  "));
		l3 = Float.parseFloat(JOptionPane.showInputDialog("informe o terceiro lado do triangulo:  "));
		if (((l1+l2)>l3) && ((l2+l3)>l1) && ((l3+l1)>l2)) {
			mensagem = mensagem + "os lados formam um triangulo ";
			if ((l2 == l1) && (l2 == l3)) {
				mensagem = mensagem + "equilatero";
			}
			else if ((l1 == l2) || (l2==l3) ||(l3==l1)){
				mensagem = mensagem + "isosceles";
			}
			else {
				mensagem = mensagem + "escaleno";
			}	
		}
		else {
			mensagem = mensagem + "os lados não formam um triangulo";
		}
		JOptionPane.showMessageDialog(null, mensagem);
	}

}
