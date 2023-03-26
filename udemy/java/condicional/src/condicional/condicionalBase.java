package condicional;
import javax.swing.JOptionPane;
public class condicionalBase {
	public static void main(String[] args) {
		int A,B;
		A = Integer.parseInt(JOptionPane.showInputDialog("informe o valor de A: "));
		B = Integer.parseInt(JOptionPane.showInputDialog("informe o valor de B: "));
		if (A > B)
			JOptionPane.showMessageDialog(null, "em ordem crescente: "+B+
					"  ->  "+A);
		else
			JOptionPane.showMessageDialog(null," Em ordem crescente: "+A+
					"  ->  "+B);

	}

}
