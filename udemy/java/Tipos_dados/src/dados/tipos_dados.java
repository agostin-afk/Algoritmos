package dados;
import javax.swing.JOptionPane;
public class tipos_dados {

	public static void main(String[] args) {
		float salario;
		int idade;
		String nome;
		nome = JOptionPane.showInputDialog("Digite o seu nome: ");
		idade = Integer.parseInt(JOptionPane.showInputDialog("Digite o sua idade"));
		salario = Float.parseFloat(JOptionPane.showInputDialog("Digite o seu salario"));
		
		
		System.out.println("Seu nome: "+nome);
		System.out.println("Sua idade: "+idade);
		System.out.println("Seu salario: "+salario);
		
		JOptionPane.showMessageDialog(null, "Seu nome: "+nome);
		JOptionPane.showMessageDialog(null,"Sua idade: "+idade);
		JOptionPane.showMessageDialog(null, "Seu salario: "+salario);
		
	}

}
