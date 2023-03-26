package matriz_maior_menor;
import javax.swing.JOptionPane;
public class Matriz_maior_menor {
	public static void main(String[] args) {
		int vet[][] = new int [3][3];
		int maior, menor;
		String mensagem = "";
		for(int l = 0; l <= 2; l++) {
			for(int c = 0; c <= 2; c++) {
				vet[l][c] = Integer.parseInt(JOptionPane.showInputDialog("informe o valor da matriz na posição ["+(l+1)+", "+(c+1)+"]: "));
			}
		}
		maior = menor = vet[0][0];
		for (int l = 0; l <= 2; l++) {
			for(int c = 0; c <= 2; c++) {
				if(maior < vet[l][c]) {
					maior = vet[l][c];
				}
				if (menor > vet[l][c]) {
					menor =  vet[l][c];
				}
				mensagem = mensagem + "["+vet[l][c]+"]  ";
				if (c == 2) {
					mensagem = mensagem +"\n";
				}
			}		
		}
		JOptionPane.showMessageDialog(null, "Os valores da matriz são: ");
		JOptionPane.showMessageDialog(null, mensagem);
		JOptionPane.showMessageDialog(null, "O maior valor da matriz é:   "+maior+"\nO menor valor é:  "+menor);
	}

}
