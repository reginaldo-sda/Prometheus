![GitHub License](https://img.shields.io/github/license/SwiftOneLy/Prometheus?style=for-the-badge)
![Arduino](https://img.shields.io/badge/Platform-Arduino-blue?style=for-the-badge&logo=arduino&logoColor=white)

# Prometheus

<h3>Projeto de Conclusão de UC do Senac</h3>
    <P>Este projeto é sobre a criação de um robô capaz de desviar de obstáculos e encontrar o caminho certo para sair de labirintos, usando inteligência para tomar decisões durante o percurso.</P>
 <hr>
 <h3>Autores</h3>
 <ul>
  <li>Felippe Camargo</li>
  <li>Reginaldo Soares</li>
   <li>Gabriel Alexandre</li>
 </ul>
  <h3>Componentes</h3>
  <ul>
      <li>Arduino Uno</li>  
    <li>Sensor Ultrassonico HC-SR04</li>  
     <li>2 Motores DC + Rodas</li>  
<li>Chassi, Suportes, fios e jumpers</li>
  <h3>Funcionalidade</h3>
  <ul>
      <li>Desvio automático de obstáculos (HC-SR04)</li>  
    <li>Estratégia básica para resolução de labirintos (turns + tomada de decisão)</li>  
     <li>Controle por motor DC com driver (ex.: L298N / TB6612)</li>  
<li>Estrutura modular para facilitar acréscimos (sensores, comunicação, etc.)</li>
  <br>
  </ul>
  
  <ul>
      <h2>Demonstração</h2>
  <img width="439" height="585" alt="PrometheusFinalizado" src="https://github.com/user-attachments/assets/2f412210-bf11-46e5-b08a-6fb5ea02cc20" />
  </ul>
<h1>Passo a Passo</h1>
<h3>Monte o Hardware</h3>
<ul>
  <li>Fixe os Motores no chassi e conecte o motor</li>
  <li>Ligue o driver ao Arduino</li>
  <li>Conecte o HC-SR04: Vcc -> 5V, GND -> GND, TRIG -> pino definido, ECHO -> pino definido.</li>
  <li>Insira batéria / alimentação adequada ao driver (não alimente motores pelo 5V do Arduino)</li>  
</ul>
  <h3>Preparando o Ambiente</h3>
  <ul>
     <li>Abra o Arduino IDE (ou PlatformIO).</li>
     <li>Instalar a Biblioteca Distance.Sensor by Tin Dao</li>
  </ul>
  <h3>Sketch exemplo</h3>
