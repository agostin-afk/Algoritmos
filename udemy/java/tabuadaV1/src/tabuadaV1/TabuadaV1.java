package tabuadaV1;
import javax.swing.JOptionPane;
public class TabuadaV1 {

	public static void main(String[] args) {
		Integer num;
		num = Integer.parseInt(JOptionPane.showInputDialog("informe um numero para a tabuada: "));
		JOptionPane.showMessageDialog(null, num+"x1 = "+num*1+
				"\n"+num+"x3 = "+num*3+
				"\n"+num+"x4 = "+num*4+
				"\n"+num+"x5 = "+num*5+
				"\n"+num+"x6 = "+num*6+
				"\n"+num+"x7 = "+num*7+
				"\n"+num+"x8 = "+num*8+
				"\n"+num+"x9 = "+num*9);	
	}

}
