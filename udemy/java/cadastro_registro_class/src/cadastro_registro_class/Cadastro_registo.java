package cadastro_registro_class;
import javax.swing.JOptionPane;
public class Cadastro_registo {
	public static void main(String[] args) {
		cadastro dados_cliente = new cadastro ();
		dados_cliente.nome = JOptionPane.showInputDialog("Informe o nome do cliente: ");
		dados_cliente.idade = Integer.parseInt(JOptionPane.showInputDialog("Informe a idade do cliente: "));
		dados_cliente.salario = Float.parseFloat(JOptionPane.showInputDialog("Informe o salario do cliente: "));
		JOptionPane.showMessageDialog(null, "O cliente "+dados_cliente.nome+", "+dados_cliente.idade+" anos, possui um salario de "+dados_cliente.salario);
		
	}

}
class cadastro{
	String nome;
	int idade;
	float salario;
}