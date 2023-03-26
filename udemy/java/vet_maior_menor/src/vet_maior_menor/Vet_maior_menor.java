package vet_maior_menor;
import javax.swing.JOptionPane;
public class Vet_maior_menor {
	public static void main(String[] args) {
		float vet[] = new float [5], maior = 0, menor = 0;
		int i = 0;
		for (; i<=4;i++) {
			vet[i] = Float.parseFloat(JOptionPane.showInputDialog("informe o valor da posição "+(i+1)+" do vetor"));
			if (i == 0) {
				maior = menor = vet[i];
			}
			if (vet[i] > maior) {
				maior = vet[i];
			}
			if (vet[i] < menor) {
				menor = vet[i];
			}
		}
		JOptionPane.showMessageDialog(null, "O maior valor do vetor é: "+maior+"\nO menor valor do vetor é: "+menor);
		
		
	}

}
