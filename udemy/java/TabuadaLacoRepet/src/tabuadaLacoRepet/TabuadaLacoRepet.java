package tabuadaLacoRepet;
import javax.swing.JOptionPane;
public class TabuadaLacoRepet {
	public static void main(String[] args) {
		Integer num, i;
		String print = "";
		num = Integer.parseInt(JOptionPane.showInputDialog("informe o numero para imprimir a tabuada: "));
		for (i = 1; i<=10; i++) {
			///JOptionPane.showMessageDialog(null,num+"x"+i+" = "+num*i);
			print  = print + num+"x"+i+" = "+num*i+"\n";
		}
		JOptionPane.showMessageDialog(null, print);
	}

}
