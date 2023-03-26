package conta_par_impar2;
import javax.swing.JOptionPane;
public class Conta_par_impar2 {
	public static void main(String[] args) {
		int aux, num_par, num_impar, inicio, final_num;
		inicio = Integer.parseInt(JOptionPane.showInputDialog("informe o inicio da contagem: "));
		final_num = Integer.parseInt(JOptionPane.showInputDialog("informe o final da contagem: "));
		while(inicio > final_num) {
			inicio = Integer.parseInt(JOptionPane.showInputDialog("o primeiro numero da contagem não pode ser maior que o priemiro, tente novamente"));	
				}
		
		aux = inicio;
		num_par = num_impar = 0;
		while(aux <= final_num) {
			if(aux%2 == 0) {
				num_par++;
			}
			else {
				num_impar++;
			}
			aux++;
		}
		JOptionPane.showMessageDialog(null,"entre "+ inicio+" e "+final_num+" existem "+num_par+" numeros pares e "+num_impar+" impares");
	}

}
