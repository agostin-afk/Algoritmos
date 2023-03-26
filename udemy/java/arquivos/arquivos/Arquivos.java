package arquivos;
import javax.swing.JOptionPane;
import java.io.*;
public class Arquivos {
	
	public static void main(String[] args) {
		cadastro dados_cliente = new cadastro ();
		String menu = 	"Opçoes do menu:\n\n\n"+
						"1 - Cadastrar dados do cliente \n\n"+
						"2 - Mostrar dados do cliente\n\n"+
						"3 - Sair do sistema";
		int opcao = Integer.parseInt(JOptionPane.showInputDialog(menu));
		if(opcao == 1) {
			dados_cliente.nome = JOptionPane.showInputDialog("Informe o nome do cliente: ");
			dados_cliente.idade = Integer.parseInt(JOptionPane.showInputDialog("informe a idade do cliente"));
			dados_cliente.salario = Float.parseFloat(JOptionPane.showInputDialog("informe o salario do cliente"));	
			try {
				FileOutputStream arquivo = new FileOutputStream ("Banco_de_dados.txt");
				ObjectOutputStream obj_dados_cliente;
				obj_dados_cliente.writeObject(dados_cliente);
			}
			catch (Exception erro_grava){
				
			}
		}
	}
	
	public static void incluir_cliente() {

		
	}
}

class cadastro implements Serializable{
	String nome;
	int idade;
	float salario;
}
