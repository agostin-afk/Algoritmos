package vendas2;
import javax.swing.JOptionPane;
public class Vendas2 {
	public static void main(String[] args) {
		float total, vendas, fixo, bonus;
		vendas = Float.parseFloat(JOptionPane.showInputDialog("informe o numero de vendas"));
		bonus = vendas*50;;
		fixo =  500;
		total = fixo + bonus;
		JOptionPane.showMessageDialog(null,"O valor total eh: "+total);
	}

}
