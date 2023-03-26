package troca_vetor;
import javax.swing.JOptionPane;
public class Troca_vetor {
	public static void main(String[] args) {
		int vetA[] = new int [5];
		int vetB[] = new int [5];
		int aux;
		String mensagemA = "", mensagemB = "";
		for(int c = 0; c <= 4; c++) {
			vetA[c] = Integer.parseInt(JOptionPane.showInputDialog("informe o valor da posição "+(c+1)+" do vetor A:"));
		}
		for(int c = 0; c <= 4; c++) {
			vetB[c] = Integer.parseInt(JOptionPane.showInputDialog("informe o valor da posição "+(c+1)+" do vetor B: "));
		}
		for(int c = 0; c <= 4; c++) {
			aux = vetA[c];
			vetA[c] = vetB[c];
			vetB[c] = aux;
			mensagemA = mensagemA + "O valor do vetor na posição "+(c+1)+" agora é:  "+vetA[c]+"\n";
			mensagemB = mensagemB + "O valor do vetor na posição "+(c+1)+" agora é: "+vetB[c]+"\n";
		}
		JOptionPane.showMessageDialog(null, "Os novos valores do vetor A são: ");
		JOptionPane.showMessageDialog(null, mensagemA);
		JOptionPane.showMessageDialog(null,"Os novos valores do vetor B são: ");
		JOptionPane.showMessageDialog(null, mensagemB);
		
		
		
	}
	

}
