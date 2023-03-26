package vet_media2;
import javax.swing.JOptionPane;
public class Vet_media2 {
	public static void main(String[] args) {
		float notas[] = new float [5];
		float media;
		int cont, i;
		cont = 0;
		i = 0;
		media = 0;
		while (i <= 4) {
			notas[i] = Float.parseFloat(JOptionPane.showInputDialog("informe a nota do aluno numero "+(i+1)+": "));
			media = media + notas[i];
			if(notas[i]<6) {
				cont++;
			}
			i++;
		}
		media = media/5;
		JOptionPane.showMessageDialog(null,"A media dos alunos foi: "+media);
		if(cont != 0) {
			JOptionPane.showMessageDialog(null, cont+" alunos ficaram abaixo da media");
		}
	
	}

}
