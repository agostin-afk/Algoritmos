package maior_menor;
import javax.swing.JOptionPane;
public class Maior_menor2 {
	public static void main(String[] args) {
		float n1,n2,n3;
		n1 = Float.parseFloat(JOptionPane.showInputDialog("informe o primeiro valor: "));
		n2 = Float.parseFloat(JOptionPane.showInputDialog("informe o segundo valor: "));
		n3 = Float.parseFloat(JOptionPane.showInputDialog("informe o terceiro valor: "));
		if ((n1 > n2) && (n1 > n3)){
			JOptionPane.showMessageDialog(null, "O maior valor é: "+n1);
			if(n2 > n3) {
				JOptionPane.showMessageDialog(null, "O menor valor é: "+n3);
			}
			else {
				JOptionPane.showMessageDialog(null,"O menor valor é: "+n2);
			}
		}
		else if ((n2>n1) && (n2>n3)){
			JOptionPane.showMessageDialog(null,"O maior valor é: "+n2);
			if (n1>n3) {
				JOptionPane.showMessageDialog(null,"O menor valor é: "+n3);
			}
			else {
				JOptionPane.showMessageDialog(null, "O menor valor é: "+n2);
			}
		}
		else {
			JOptionPane.showMessageDialog(null, "O maior valor é: "+n3);
			if (n2>n1) {
				JOptionPane.showMessageDialog(null, "O menor valor é: "+n1);
			}
			else {
				JOptionPane.showMessageDialog(null, "O menor valor é: "+ n2);
			}
		}
	}
}