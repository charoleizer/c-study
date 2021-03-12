[Kore](https://kore.io/)
[Guia de instalação](https://docs.kore.io/4.1.0/install.html)

Resumo

`$ wget https://kore.io/releases/kore-4.1.0.tar.gz`
`$ tar xvf kore-4.1.0.tar.gz`
`$ cd kore`
`$ make`
`$ sudo make install`


Obs.: Tentei instalar o Kore com apt get, mas ele vem incompleto (sem o seccomp)


Projeto

`$ cd sort-test`
`$ kodev run`
`$ curl -k -d '{"foo":{"contentValue": "Hello world from content"}}' https://127.0.0.1:8888`
