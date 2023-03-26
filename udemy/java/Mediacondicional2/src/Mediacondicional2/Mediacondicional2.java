package Mediacondicional2;
import javax.swing.JOptionPane;
public class Mediacondicional2 {
	public static void main(String[] args) {
		float nota1, nota2, nota3, media;
		nota1 = Float.parseFloat(JOptionPane.showInputDialog("informe a nota da primeira prova: "));
		nota2 = Float.parseFloat(JOptionPane.showInputDialog("informe a nota da segunda prova: "));
		nota3 = Float.parseFloat(JOptionPane.showInputDialog("informe a nota da terceira prova: "));
		media = (nota1+nota2+nota3)/3;
		if (media>=7) {
			JOptionPane.showMessageDialog(null,"voce passou com media: "+media);
		}
		else if (media>=4) {
			JOptionPane.showMessageDialog(null,"voce ficou de recuperacao com media: "+media);
		}
		else {
			JOptionPane.showMessageDialog(null, "voce reprovou com media: "+media);
		}
	}

}
