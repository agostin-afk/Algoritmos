package vet_complexo;
import javax.swing.JOptionPane;
public class Vet_complexo {
	public static void main(String[] args) {
		float vet[] = new float[5];
		float soma = 0, media = 0;
		int qtd_pos = 0, qtd_nega = 0, mais_media = 0;
		String mensagem ="";
		for(int i = 0; i<=4;i++){
			vet[i] = Float.parseFloat(JOptionPane.showInputDialog("Informe o valor da posição "+(i+1)+" do vetor: "));
			mensagem = mensagem + "O valor da posição "+(i+1)+" do vetor é: "+vet[i]+"\n";
			soma += vet[i];
			if (vet[i] > 0) {
				qtd_pos++;
			}
			else if(vet[i] < 0) {
				qtd_nega++;
			}
		}
		media = soma/5;
		for(int c = 0; c <= 4;c++) {
			if(vet[c] > media) {
				mais_media++;
			}
		}
		JOptionPane.showMessageDialog(null, mensagem);
		JOptionPane.showMessageDialog(null,"No vetor teve:\n"
									+qtd_pos+" numeros positivos\n"
									+qtd_nega+" numeros negativos\n"
									+mais_media+" numeros acima da media\nA soma deu: "+soma+
									"\nA media foi: "+media);
		
	}

}
