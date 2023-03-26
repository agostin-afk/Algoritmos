package matriz_complexa;
import javax.swing.JOptionPane;
public class Matriz_complexa {
	public static void main(String[] args) {
		int matriz[][] = new int[4][4], maior, menor;
		int matriz_2x [][] = new int [4][4];
		int soma, mais_media, pos_maiorL, pos_maiorC;
		int pos_menorL, pos_menorC, linha_3[] = new int [4];
		int coluna_2[] = new int [4];
		String mensagem = "";
		float media;
		soma = mais_media =  0;
		pos_maiorL = pos_menorL = 1;
		pos_maiorC = pos_menorC = 1;
		for(int l = 0; l <= 3; l++) {
			for(int c = 0; c <= 3; c++) {
				matriz[l][c] = Integer.parseInt(JOptionPane.showInputDialog("Informe o valor da matriz na posição ["+(l+1)+"," +(c+1)+"]: "));
				matriz_2x[l][c] = matriz[l][c] *2;
				soma += matriz[l][c];
				if(c == 1) {
					coluna_2[l] = matriz[l][c];
				}
				if(l == 2) {
					linha_3[c] = matriz[l][c]; 
				}
			}	
		}
		media = soma/16;
		menor = maior = matriz[0][0];
		JOptionPane.showMessageDialog(null, "A soma dos valores da matriz deu:  "+soma);
		for(int l = 0; l <=3; l++) {
			for(int c = 0; c <= 3; c++) {
				if(matriz[l][c] > media) {
					mais_media += 1;
				}
				if (matriz[l][c] > maior) {
					maior = matriz[l][c];
					pos_maiorL = l+1;
					pos_maiorC = c+1;
				}
				if(matriz[l][c]< menor) {
					menor = matriz[l][c];
					pos_menorL = l+1;
					pos_menorC = c+1;
				}
			}
		}
		JOptionPane.showMessageDialog(null, "A media dos valores da matriz deu:  "+media);
		for(int i = 0; i<=5; i++) {			
			if(i == 0) {
				JOptionPane.showMessageDialog(null, "Os valores da matriz são: ");
				for(int l = 0; l <= 3; l++) {
					for(int c = 0; c <= 3; c++) {
						mensagem = mensagem + " ["+matriz[l][c]+"] ";
						if(c == 3) {
							mensagem =  mensagem + "\n";
						}
					}
				}
				JOptionPane.showMessageDialog(null, mensagem);
				mensagem = "";
				JOptionPane.showMessageDialog(null, "Os valores duplicados da matriz ficam: ");
				for(int l = 0; l <= 3; l++) {
					for(int c = 0; c <= 3; c++) {
						mensagem = mensagem + " ["+matriz_2x[l][c]+"] ";
						if(c == 3) {
							mensagem = mensagem + "\n";
						}
					}
				}
				JOptionPane.showMessageDialog(null, mensagem);
				JOptionPane.showMessageDialog(null, "Os valores da Diagonal principal são: ");
				mensagem = "";
				for(int l = 0; l <= 3; l++) {
					for(int c = 0; c <= 3; c++) {
						if(c == l) {
							mensagem = mensagem + " ["+matriz[l][c]+"] "; 
						}
					}
				}
				JOptionPane.showMessageDialog(null, mensagem);
			}
			if(i == 1) {
				mensagem = "";
				JOptionPane.showMessageDialog(null, "Os valores da diagonal secundaria são: ");
				for(int l = 0; l <= 3; l++) {
					for(int c = 0; c <= 3; c++) {
						if(l+c == 3) {
							mensagem = mensagem + " ["+matriz[l][c]+"] ";
						}
					}
				}
				JOptionPane.showMessageDialog(null, mensagem);
			}
			if(i == 2) {
				mensagem = "";
				JOptionPane.showMessageDialog(null, "Os valores da coluna 2 são:  ");
				for(int l = 0; l <= 3; l++) {
					mensagem = mensagem + " ["+coluna_2[l]+"] ";
				}
				JOptionPane.showMessageDialog(null, mensagem);
			}
			if(i == 3) {
				JOptionPane.showMessageDialog(null, "Os valores da linha 3 são:");
				mensagem = "";
				for(int l = 0; l <= 3; l++) {
					mensagem = mensagem + " ["+linha_3[l]+"] ";
				}
				JOptionPane.showMessageDialog(null, mensagem);
			}
			if(i == 4) {
				JOptionPane.showMessageDialog(null, "Teve "+mais_media+" numeros acima da media\nE foram esses: ");
				mensagem = "";
				for(int l = 0; l <= 3; l++) {
					for(int c = 0; c <= 3; c++) {
						if(matriz[l][c] > media) {
							mensagem = mensagem + " ["+matriz[l][c]+"] ";
						}
					}
				}
				JOptionPane.showMessageDialog(null, mensagem);
			}
			if(i == 5) {
				mensagem = "";
				JOptionPane.showMessageDialog(null, "O maior valor da matriz foi:  "+maior+"\nNa posição:  ["+pos_maiorL+", "+pos_maiorC+"]\n\nO menor valor da matriz foi:  "+menor+"\nNa posição:  ["+pos_menorL+", "+pos_menorC+"]");
				JOptionPane.showMessageDialog(null, "Os valores pares foram: ");
				for (int l = 0; l <= 3; l++) {
					for(int c = 0; c <= 3; c++) {
						if(matriz[l][c]%2 == 0) {
							mensagem = mensagem + " ["+matriz[l][c]+"] ";
						}
					}
				}
				JOptionPane.showMessageDialog(null, mensagem);
				mensagem = "";
				JOptionPane.showMessageDialog(null, "Os valores impares foram:  ");
				for(int l = 0; l <= 3;l++) {
					for(int c = 0; c <= 3; c++) {
						if(matriz[l][c]%2 == 1) {
							mensagem = mensagem + " ["+matriz[l][c]+"] ";
						}
					}
				}
				JOptionPane.showMessageDialog(null, mensagem);
			}
		}
	}

}
