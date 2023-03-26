package funcao_retrun;
import javax.swing.JOptionPane;
public class Funcao_return {
	static float num1, num2, sum, sub, mult, divi;
	public static void main(String[] args) {
		leitura();
		JOptionPane.showMessageDialog(null, "A soma dos numeros deu: "+soma(num1, num2)+
											"\nA subtracao dos numeros deu: "+subtracao(num1, num2)+
											"\nA multiplicacao dos numeros deu: "+ multiplica(num1,num2)+
											"\nA divisao dos numeros deu: "+divisao(num1, num2));
	}
	public static void leitura() {
		num1 = Float.parseFloat(JOptionPane.showInputDialog("informe o valor do primeiro numero: "));
		num2 = Float.parseFloat(JOptionPane.showInputDialog("informe o valor do segundo numero: "));
				 
	}
	public static float soma(float p1, float p2) {
		sum = p1 +p2;
		return sum;
	}
	public static float subtracao(float p1, float p2) {
		sub = p1-p2;
		return sub;
	}
	public static float multiplica(float p1, float p2) {
		mult = p1*p2;
		return mult;
	}
	public static float divisao(float p1, float p2) {
		divi = p1/ p2;
		return divi;
	}
}
