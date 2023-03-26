package vet_crescente_simples;
import javax.swing.JOptionPane;
public class Vet_crescente_simples {
	public static void main(String[] args) {
		int vet[] = new int[3];
		int aux;
		String mensagem ="";
		for (int i = 0; i<=2; i++) {
			vet[i] = Integer.parseInt(JOptionPane.showInputDialog("informe o valor da posição "+ (i+1)+" do vetor: "));
			
		}
		for(int p = 0; p<=1; p++) {
			for (int i = 0; i<=1; i++) {
				if(vet[i] > vet[i+1]) {
					aux = vet[i];
					vet[i] = vet[i+1];
					vet[i+1] = aux;
				}
			}
		}
		for(int i =0; i<=2;i++) {
			mensagem = mensagem + " "+vet[i];
		}
		JOptionPane.showMessageDialog(null," o vetor em ordme crescente é: ["+mensagem+"]");
		
		
	}

}
