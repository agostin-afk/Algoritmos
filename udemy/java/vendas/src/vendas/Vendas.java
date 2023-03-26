package vendas;
import javax.swing.JOptionPane;
public class Vendas {
	public static void main(String[] args) {
		float total, vendas, fixo;
		vendas = Float.parseFloat(JOptionPane.showInputDialog("informe o numero de vendas"));
		vendas = (vendas*15)/100;
		fixo =  800;
		total = fixo + vendas;
		JOptionPane.showMessageDialog(null,"O valor total eh: "+total);
	}

}
