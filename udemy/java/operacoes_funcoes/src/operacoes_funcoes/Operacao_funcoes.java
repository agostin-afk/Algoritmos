package operacoes_funcoes;
import javax.swing.JOptionPane;
public class Operacao_funcoes {
	static float num1, num2, mult, div, soma, sub;
	public static void main(String[] args) {
		leitura();
		calculos();
		imprimir();
	}
	public static void leitura(){
		num1 = Float.parseFloat(JOptionPane.showInputDialog("Informe o primeiro numero: "));
		num2 = Float.parseFloat(JOptionPane.showInputDialog("Informe o segundo numero: "));
	}
	public static void calculos() {
		mult = num1 * num2;
		div = num1 / num2;
		soma = num1 + num2;
		sub = num1-num2;
	}
	public static void imprimir() {
		JOptionPane.showMessageDialog(null,"A soma dos numeros deu:  "+soma+"\nA subitração dos numeros deu:  "+sub+"\nA multiplicação dos numeros deu:  "+mult+"\nA divisão dos numeros deu:  "+div);
	}
	
}
