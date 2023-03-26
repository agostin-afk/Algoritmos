package condicionalMedia;
import javax.swing.JOptionPane;
public class Mediacondicional {

	public static void main(String[] args) {
		float A,B,C,media;
		A = Float.parseFloat(JOptionPane.showInputDialog("informe a primeira nota"));
		B = Float.parseFloat(JOptionPane.showInputDialog("informe a segunda nota"));
		C = Float.parseFloat(JOptionPane.showInputDialog("informe a terceira nota"));
		media = (A+B+C)/3;
		if (media >= 6)
			JOptionPane.showMessageDialog(null,"Sua media foi:  "+media+"\nVoce passou!!");
		else 
			JOptionPane.showMessageDialog(null,"Sua media foi:  "+media+"\nVoce nao passou :(");
		

	}

}
