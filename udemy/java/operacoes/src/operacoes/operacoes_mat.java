package operacoes;
import javax.swing.JOptionPane;
public class operacoes_mat {
	public static void main(String[] args) {
	float	num1, num2, mult,div,sub, soma;
	num1 = 	Float.parseFloat(JOptionPane.showInputDialog("Digite o primeiro numero: "));
	num2 = Float.parseFloat(JOptionPane.showInputDialog("Digite o segundo valor"));
	mult = num1*num2;
	soma = num1+num2;
	sub = num1-num2;
	div = num1/num2;
	
	JOptionPane.showMessageDialog(null, "multiplicacao: "+mult);
	JOptionPane.showMessageDialog(null, "divisao: "+div);
	JOptionPane.showMessageDialog(null, "soma: "+soma);
	JOptionPane.showMessageDialog(null, "subtracao: "+sub);
	
	}
}
