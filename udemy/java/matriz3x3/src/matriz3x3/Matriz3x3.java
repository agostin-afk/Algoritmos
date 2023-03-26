package matriz3x3;
import javax.swing.JOptionPane;
public class Matriz3x3 {
	public static void main(String[] args) {
		int vet[][]= new int [3][3];
		String mensagem = "";
		for (int l = 0; l <= 2; l++) {
			for(int c = 0; c <= 2; c++) {
				vet[l][c] = Integer.parseInt(JOptionPane.showInputDialog("informe o valor do vetor na posição ["+(l+1)+", "+(c+1)+"]: "));
				mensagem = mensagem + "O valor do vetor na posição ["+(l+1)+", "+(c+1)+"] é:  "+vet[l][c]+"\n";
			}
		}
		JOptionPane.showMessageDialog(null, mensagem);
		
	}

}
