package exeauto;
import javax.swing.JOptionPane;
public class ExeAutomovel {

	public static void main(String[] args) {
		float custo, impos, revend, custtotal;
		custo = Float.parseFloat(JOptionPane.showInputDialog("Digite o valor bruto do carro"));
		impos = (custo * 25)/100;
		revend = (45*custo)/100;
		custtotal = impos + revend + custo;
		JOptionPane.showMessageDialog(null,"O custo final do carro eh: "+ custtotal);

	}

}
