package vet_crescente_15;
import javax.swing.JOptionPane;
public class Vet_crescente_15 {
	public static void main(String[] args) {
		int vet[] = new int [15];
		int aux;
		String mensagem = "";
		for(int c = 0; c <= 14;c++) {
			vet[c] = Integer.parseInt(JOptionPane.showInputDialog("informe o valor do vetor na posição "+(c+1)+": "));
		}
		for(int j = 0; j <= 14; j++) {
			for(int i = 0; i<=13; i++) {
				if(vet[i] > vet[i+1]) {
					aux = vet[i];
					vet[i] = vet[i+1];
					vet[i+1] = aux;
				}
			}
		}
		for(int m = 0; m <= 14; m++) {
			mensagem = mensagem + "vet["+(m+1)+"]= "+vet[m]+"\n";
		}
		JOptionPane.showMessageDialog(null,"O vetor organizado fica: ");
		JOptionPane.showMessageDialog(null, mensagem);
	}

}
