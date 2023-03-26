package Mes_case;
import javax.swing.JOptionPane;
public class Mes_case {
	public static void main(String[] args) {
		int num;
		String mes="";
		num = Integer.parseInt(JOptionPane.showInputDialog("informe um numero para apresentar seu respectivo mes: "));
		switch (num) {
		case 1:
			mes = mes + "Janeiro";
			break;
		case 2:
			mes = mes + "Fevereiro";
			break;
		case 3:
			mes = mes + "Março";
			break;
		case 4:
			mes = mes + "Abril";
			break;
		case 5: 
			mes = mes + "Maio";
			break;
		case 6: 
			mes = mes + "Junho";
			break;
		case 7:
			mes = mes + "Julho";
			break;
		case 8:
			mes = mes + "Agosto";
			break;
		case 9: 
			mes = mes + "Setembro";
			break;
		case 10: 
			mes = mes + "Setembro";
			break;
		case 11:
			mes = mes + "Novembro";
			break;
		case 12: 
			mes = mes + "Dezembro";
			break;
		default:
			mes = mes + "O numero informado não corresponde a nenhum mes, tente novamente";
		}
		JOptionPane.showMessageDialog(null, "O mes em questão é: \n" + mes);

	}

}
