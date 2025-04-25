public class Conta {
     private double saldo;
     private EstadoConta estado;

     public double getSaldo() {
          return saldo;
     }

     public void setSaldo(double novoSaldo){
          this.saldo = novoSaldo;
     }

     public EstadoConta getEstado() {
          return estado;
     }

     public void setEstado(EstadoConta estado) {
          this.estado = estado;
     }

     public void depositar(double valor) {
          this.estado.depositar(valor, this);
     }

     public void sacar(double valor) {
          this.estado.sacar(valor, this);
     }

     public void verificarEstado() {
          // implementar lógica após criar os estados.
     }
}
