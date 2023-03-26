package desconto;
import javax.swing.JOptionPane;
public class Desconto {
	public static void main(String[] args) {
		float valor, desconto;
		valor = Float.parseFloat(JOptionPane.showInputDialog("informe o valor da compra: "));
		if (valor>500) {
			desconto = (valor*20)/100;
		}
		else if (valor >200) {
			desconto = (valor*15)/100;
		}
		else {
			desconto = (valor*10)/100;
		}
		valor = valor - desconto;
		JOptionPane.showMessageDialog(null, "com o desconto, o valor fica:  "+valor);
	}

}
