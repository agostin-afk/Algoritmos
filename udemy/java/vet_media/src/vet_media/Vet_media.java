package vet_media;
import javax.swing.JOptionPane;
public class Vet_media {
	public static void main(String[] args) {
		float notas[] = new float [5];
		float media;
		int cont;
		notas[0] = Float.parseFloat(JOptionPane.showInputDialog("informe a nota do primeiro aluno: "));
		notas[1] = Float.parseFloat(JOptionPane.showInputDialog("informe o nota do segundo aluno: "));
		notas[2] = Float.parseFloat(JOptionPane.showInputDialog("informe a nota do terceiro aluno: "));
		notas[3] = Float.parseFloat(JOptionPane.showInputDialog("informe a nota do quarto aluno: "));
		notas[4] = Float.parseFloat(JOptionPane.showInputDialog("informe a nota do quinto aluno: "));
		media =  notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
		media = media/5;
		cont =0;
		if(notas[0] <6 ) {
			cont++;
		}
		if(notas[1] < 6) {
			cont++;
		}
		if (notas[2] < 6) {
			cont++;
		}
		if(notas[3] < 6) {
			cont++;
		}
		if (notas[4] < 6) {
			cont++;
		}
		JOptionPane.showMessageDialog(null, "A media das notas dos alunos foi: "+media);
		
		if(cont != 0) {
			JOptionPane.showMessageDialog(null,cont+" alunos ficaram com a media abaixo de 6");
		}
		
	}

}
