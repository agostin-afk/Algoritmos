package Mes_se;
import javax.swing.JOptionPane;
public class Mes_se {
	public static void main(String[] args) {
		Integer num;
		String mes="";
		num = Integer.parseInt(JOptionPane.showInputDialog("informe um numero de 1 ate 12 para mostrar o seu mes correspondente: "));
		if (num == 1) {
			mes = mes+ "Janeiro";
		}
		else if (num == 2) {
			mes = mes + "Fevereiro";
		}
		else if (num == 3) {
			mes = mes + "Março";
		}
		else if (num == 4) {
			mes = mes + "Abril";
		}
		else if (num == 5) {
			mes = mes + "Maio";
		}
		else if (num == 6) {
			mes = mes + "Junho";
		}
		else if (num == 7) {
			mes = mes + "Julho";
		}
		else if (num == 8) {
			mes = mes + "Agosto";
		}
		else if (num == 9) {
			mes = mes + "Setembro";
		}
		else if (num == 10) {
			mes = mes + "Outubro";
		}
		else if (num == 11) {
			mes = mes + "Novembro";
		}
		else if (num == 12) {
			mes = mes + "Dezembro";
		}
		else {
			mes = mes + "Esse numero não possui um mes correspondente";
		}
		JOptionPane.showMessageDialog(null,"O mes correspondente a esse numero é: "+ mes);
	}

}
