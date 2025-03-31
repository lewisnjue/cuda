to install the invida cuda toolkit on your could-based environemtn using lighting ai, follow these steps: 
1. veriyf GPU aVAILABLE 
- ensure that your clound instance is equipeed with an nvidia gpu. 
- check that the appropriate nvida drivers are instealled. 

2. install the cuda toolkit 
- downloa dhte instter : visti the officaiol nvida cuda toolkit downlaod page and select the version compatible with your system. 
execute the installer 

set environemt variables: after installing, configure the necessary envrironment variables . for example , on linux , add hte folliwng lines to your ~/.bashrc or ~/.bash_profile: 

```bash 
export PATH=/usr/local/cuda-11.7/bin:$PATH
export LD_LIBRARY_PATH=/usr/local/cuda-11.7/lib64:$LD_LIBRARY_PATH
```
then run soruce ~/.bashrc 

3. install pytorch with cuda support 

- acutally if you are using lighting ai it comes installed with `nvcc`
