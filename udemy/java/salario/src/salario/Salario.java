package salario;
import javax.swing.JOptionPane;
public class Salario {

	public static void main(String[] args) {
		float salario_bruto, salario_liquido,inss;
		String nome;
		nome = JOptionPane.showInputDialog("informe o seu nome: ");
		salario_bruto = Float.parseFloat(JOptionPane.showInputDialog("informe o seu salario bruto"));
		inss = (salario_bruto * 9)/100;
		salario_liquido = salario_bruto - inss;
		JOptionPane.showMessageDialog(null,"ola "+nome+
											" \nseu salario bruto eh: r$ " +salario_bruto+
											" \nseu inss eh: r$ "+inss+
											" \nseu salario liquido eh: r$ "+salario_liquido);
	}

}
