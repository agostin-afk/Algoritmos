package consorcio;
import javax.swing.JOptionPane;
public class Execonsorcio {

	public static void main(String[] args) {
		float total_valor, parcelas_pagas, parcelas_total,valor_pago, valor_parcelas, valor_faltando;
		parcelas_total = Float.parseFloat(JOptionPane.showInputDialog("informe o numero total de parcelas: "));
		parcelas_pagas = Float.parseFloat(JOptionPane.showInputDialog("informe a quantidade de parcelas pagas: "));
		valor_parcelas = Float.parseFloat(JOptionPane.showInputDialog("informe o valor das parcelas: "));
		total_valor = parcelas_total*valor_parcelas;
		valor_pago = parcelas_pagas * valor_parcelas;
		valor_faltando = total_valor - valor_pago;
		JOptionPane.showMessageDialog(null,"Voce pagou: r$ "+valor_pago+
									 "\nFalta: r$ "+valor_faltando);

	}

}
