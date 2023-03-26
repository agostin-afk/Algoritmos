package serieFor;
import javax.swing.JOptionPane;
public class SerieFor {
	public static void main(String[] args) {
		Integer i, teste;
		teste = 1;
		String mensagem = ""; 
		for (i=10 ;i <= 1000; i = i+10) {
			mensagem = mensagem + " -> "+ i;
			if (teste == 10) {
				teste = 0;
				mensagem = mensagem +"\n";
			}
			teste = teste+1;
		}
		JOptionPane.showMessageDialog(null, mensagem);
	
	
	}

}
