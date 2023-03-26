package subalgoritmos_funcao;
import javax.swing.JOptionPane;
public class Subalgotimos_funcao {
	static float num1, num2, soma, sub, mult, divi;
	public static void main(String[] args) {
		leitura();
		calculos(num1,num2);
		imprimir(soma, sub, mult, divi);
		
	}
	public static void leitura() {
		num1 = Float.parseFloat(JOptionPane.showInputDialog("informe o valor do primeiro numero: "));
		num2 = Float.parseFloat(JOptionPane.showInputDialog("informe o valor do segundo numero: "));
				 
	}
	public static void calculos(float p1, float p2) {
		soma = p1 + p2;
		sub = p1 - p2;
		mult = p1 * p2;
		divi = p1 / p2;
	}
	public static void imprimir(float soma, float sub, float mult, float divi) {
		JOptionPane.showMessageDialog(null,"A soma dos numeros deu:  "+soma+"\nA subtração dos nueros deu:  "+sub+"\nA multiplicação dos numeros deu:  "+mult+"\nA divisão dos numeros deu:  "+divi);
	}
	
}
