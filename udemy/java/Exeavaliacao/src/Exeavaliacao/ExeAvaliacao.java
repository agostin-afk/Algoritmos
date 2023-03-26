package Exeavaliacao;
import javax.swing.JOptionPane;
public class ExeAvaliacao {

	public static void main(String[] args) {
		float prova1, prova2, prova3, media;
		prova1= Float.parseFloat(JOptionPane.showInputDialog("informe a nota da primeira prova: "));
		prova2 = Float.parseFloat(JOptionPane.showInputDialog("informe a nota da segunda prova: "));
		prova3 = Float.parseFloat(JOptionPane.showInputDialog("informe a nota da segunda prova: "));
		prova1 *= 2;
		prova2 *=3;
		prova3 *= 5;
		media = (prova1+prova2+prova3)/10;
		JOptionPane.showMessageDialog(null,"A media das provas foi de: "+media);
		
		
	}

}
