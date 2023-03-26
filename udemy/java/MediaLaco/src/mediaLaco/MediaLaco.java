package mediaLaco;
import javax.swing.JOptionPane;
public class MediaLaco {
	public static void main(String[] args) {
		float nota, soma, media;
		soma = 0;
		media = 0;
		JOptionPane.showMessageDialog(null,"informe as notas dos alunos");
		for(int i = 1; i<= 10; i++) {
			nota = Float.parseFloat(JOptionPane.showInputDialog("nota do "+i+"° aluno: "));
			if ((nota>=0) && (nota <=10)){
				soma = soma +nota;
				media++;
				
			}
			else {
				JOptionPane.showMessageDialog(null, "nota invalida, tente novamente ");
				i--;
			}
		}
		media = soma/media;
		JOptionPane.showMessageDialog(null, "A media da sala foi: "+ media);
		
	}

}
