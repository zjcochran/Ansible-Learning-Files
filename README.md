# Ansible-Learning-Files
Personal Ansible files used for learning of Ansible and K3S on Raspberry Pis.

Modify IP addresses in the inventory file for your Pi devices.  Change the path in vars.yml to point to the authorized_keys file you want to copy out.

Execute with
```
ansible-playbook setup_server.yml --extra-vars 'user_pass=PASSWORDCHANGEME'
```
