# Guía de Cuentas y Tokens para Estudiantes — NIM Bootcamp

Antes de comenzar el bootcamp necesitas registrarte en el NVIDIA Developer Program y crear cuentas en tres plataformas adicionales para obtener las claves de API (tokens) correspondientes. **Reserva entre 30 y 50 minutos para completar este proceso antes del día del bootcamp.**

---

## Resumen Rápido

| Plataforma | Para qué se usa | ¿Es gratuita? | Tiempo estimado |
|---|---|---|---|
| **NVIDIA Developer Program** | Membresía requerida para descargar containers e imágenes desde el NGC Catalog | Sí, gratuito | 5 min |
| **NVIDIA Build** | Clave de API para llamar a los modelos NIM y descargar containers | Sí, con créditos gratuitos | 5 min |
| **Hugging Face** | Token para descargar pesos del modelo LLaMA-3 (lab de fine-tuning) | Sí | 10 min |
| **Tavily** | Clave de API para búsqueda web en tiempo real dentro de los agentes LangGraph | Sí, plan gratuito disponible | 5 min |

---

## Requisito Previo — NVIDIA Developer Program

Antes de poder descargar containers e imágenes desde el **NGC Catalog** (el registro privado de NVIDIA en `nvcr.io`), necesitas ser miembro del NVIDIA Developer Program. Este registro es **gratuito** y es el paso cero del bootcamp.

### Paso 1 — Registrarse en el Developer Program

1. Ve a **[developer.nvidia.com/developer-program](https://developer.nvidia.com/developer-program?regcode=ref-inor-249-prsp-zh-tw-2-l6&ncid=ref-inor-249-prsp-zh-tw-2-l6)**
2. Haz clic en **"Join Now"**
3. **Inicia sesión con la misma cuenta que usas en build.nvidia.com** — no es necesario crear una cuenta nueva
4. Completa el formulario de perfil con tu nombre, empresa/institución y área de interés
5. Haz clic en **"Submit"** para completar el registro

> **¿Por qué es necesario?** El NGC Catalog aloja los containers oficiales de NVIDIA NIM. Para hacer `docker pull nvcr.io/nim/...` necesitas estar autenticado con una cuenta que sea miembro del Developer Program. Sin esta membresía, las descargas de containers fallarán con un error de autenticación.

> **Una sola cuenta NVIDIA:** La cuenta de build.nvidia.com y la del Developer Program son la misma cuenta NVIDIA. Si ya tienes cuenta en build.nvidia.com, solo necesitas unirte al programa con esa misma cuenta.

### Paso 2 — Verificar la membresía

Una vez registrado, recibirás un correo de confirmación de NVIDIA. Puedes verificar tu estado en **[developer.nvidia.com](https://developer.nvidia.com)** iniciando sesión — deberías ver tu nombre y acceso al panel del programa.

> **Nota:** El registro suele ser inmediato. Si no recibes el correo de confirmación en 5 minutos, revisa tu carpeta de spam.

---

## Cuenta 1 — NVIDIA Build (NGC API Key)

Esta clave es **la más importante** del bootcamp. La usarás en casi todos los labs para:
- Llamar a los modelos LLM, embedding y visión alojados por NVIDIA
- Descargar imágenes de containers desde el registro privado de NVIDIA (`nvcr.io`)
- Acceder al catálogo de modelos NIM

### Paso 1 — Iniciar sesión

1. Ve a **[build.nvidia.com](https://build.nvidia.com)**
2. Haz clic en **"Sign In"** (esquina superior derecha)
3. **Usa la misma cuenta que registraste en el NVIDIA Developer Program** — no es necesario crear una cuenta nueva

> La cuenta NVIDIA es única: sirve tanto para el Developer Program como para build.nvidia.com y el NGC Catalog.

### Paso 2 — Generar la API Key

1. Inicia sesión en [build.nvidia.com](https://build.nvidia.com)
2. Haz clic en tu avatar o nombre de usuario (esquina superior derecha)
3. Selecciona **"Get API Key"** o navega a la sección **"API Key"**
4. Haz clic en **"Generate Key"**
5. **Copia la clave inmediatamente** — solo se muestra una vez. Comienza con `nvapi-`

> **¡Importante!** Guarda la clave en un lugar seguro (por ejemplo, en un archivo de texto local o un gestor de contraseñas). No podrás verla de nuevo una vez cerrado el diálogo. Si la pierdes, deberás generar una nueva.

### Paso 3 — Verificar que funciona

Puedes probar tu clave con el siguiente comando `curl` en tu terminal:

```bash
export NVIDIA_API_KEY="nvapi-TU_CLAVE_AQUI"

curl -s https://integrate.api.nvidia.com/v1/models \
  -H "Authorization: Bearer ${NVIDIA_API_KEY}" | python3 -m json.tool | head -20
```

Si ves una lista de modelos en formato JSON, tu clave está activa y funcionando.

### Cómo se usa en el bootcamp

```bash
# En la terminal, exporta ambas variables (son la misma clave)
export NGC_API_KEY="nvapi-TU_CLAVE_AQUI"
export NVIDIA_API_KEY="nvapi-TU_CLAVE_AQUI"

# En los notebooks, la usarás así:
api_key = "nvapi-TU_CLAVE_AQUI"
```

> **Seguridad:** Nunca escribas tu clave directamente en un notebook que vayas a compartir. Usa siempre variables de entorno o el parámetro `getpass` de Python:
> ```python
> import getpass
> api_key = getpass.getpass("Introduce tu NVIDIA API Key: ")
> ```

---

## Cuenta 2 — Hugging Face (Token de Acceso)

Hugging Face es la plataforma donde NVIDIA publica los pesos del modelo **LLaMA-3 8B**, que se usa en los labs de fine-tuning (LoRA). También necesitarás esta cuenta para usar el pipeline de Grounding DINO en el lab de VLM.

### Paso 1 — Crear la cuenta

1. Ve a **[huggingface.co](https://huggingface.co)**
2. Haz clic en **"Sign Up"** (esquina superior derecha)
3. Elige un nombre de usuario, introduce tu correo y crea una contraseña
4. Verifica tu correo electrónico

### Paso 2 — Aceptar los términos de uso de LLaMA-3

El modelo LLaMA-3 requiere que aceptes los términos de uso de Meta antes de poder descargarlo.

1. Inicia sesión en Hugging Face
2. Ve a la página del modelo: **[meta-llama/Meta-Llama-3-8B-Instruct](https://huggingface.co/meta-llama/Meta-Llama-3-8B-Instruct)**
3. Haz clic en **"Expand to review and access the repository"**
4. Lee y acepta los términos de uso de Meta
5. Espera la aprobación — normalmente es inmediata o tarda pocos minutos

> **Nota:** Sin aceptar estos términos, recibirás un error `401 Unauthorized` al intentar descargar los pesos del modelo.

### Paso 3 — Generar un Token de Acceso

1. Haz clic en tu avatar (esquina superior derecha) → **"Settings"**
2. En el menú lateral izquierdo, selecciona **"Access Tokens"**
3. Haz clic en **"New token"**
4. Asigna un nombre descriptivo (por ejemplo: `nim-bootcamp`)
5. Selecciona el tipo **"Read"** (es suficiente para descargar modelos)
6. Haz clic en **"Generate a token"**
7. **Copia el token** — comienza con `hf_`

### Paso 4 — Instalar la CLI de Hugging Face y verificar que funciona

```bash
# Instalar la librería huggingface_hub (incluye el comando huggingface-cli)
pip install huggingface_hub
```

Verifica la instalación:

```bash
huggingface-cli --version
```

Autentícate con tu token:

```bash
huggingface-cli login
# Te pedirá el token, pégalo cuando lo solicite
```

Verifica que el token es válido y que tu cuenta tiene acceso:

```bash
huggingface-cli whoami
# Debe mostrar tu nombre de usuario de Hugging Face

# Verificar acceso específico al modelo LLaMA-3 (requiere haber aceptado los términos):
huggingface-cli download meta-llama/Meta-Llama-3-8B-Instruct config.json
# Si descarga el archivo sin errores, tienes acceso completo al modelo
```

> **"Access to model meta-llama/Meta-Llama-3-8B-Instruct is restricted"**: Significa que no has aceptado los términos de uso en Hugging Face (ver Paso 2) o que la aprobación aún está pendiente.

### Cómo se usa en el bootcamp

```bash
# En la terminal:
export HF_TOKEN="hf_TU_TOKEN_AQUI"

# Para autenticarte con la librería huggingface_hub:
huggingface-cli login
# Te pedirá el token, pégalo cuando lo solicite
```

```python
# En los notebooks de fine-tuning:
from huggingface_hub import login
login(token="hf_TU_TOKEN_AQUI")
```

---

## Cuenta 3 — Tavily (API Key de Búsqueda Web)

Tavily es un motor de búsqueda diseñado específicamente para agentes de IA. Se usa en el lab de **agentes LangGraph** del bootcamp para permitir que el agente realice búsquedas en internet en tiempo real como parte de su flujo de trabajo.

> **¿Por qué Tavily y no Google?** Tavily devuelve resultados estructurados y limpios, optimizados para ser procesados por un LLM — sin anuncios, sin HTML. Es el estándar de facto en aplicaciones LangChain/LangGraph para búsqueda web.

### Paso 1 — Crear la cuenta

1. Ve a **[app.tavily.com](https://app.tavily.com)**
2. Haz clic en **"Sign Up"**
3. Puedes registrarte con tu correo electrónico o con tu cuenta de Google/GitHub
4. Verifica tu correo si registraste con correo y contraseña

### Paso 2 — Obtener la API Key

1. Inicia sesión en [app.tavily.com](https://app.tavily.com)
2. En el panel principal verás tu API Key generada automáticamente
3. Haz clic en el ícono de copiar junto a la clave
4. La clave comienza con `tvly-`

> **Plan gratuito:** Tavily ofrece **1,000 búsquedas gratuitas por mes** — más que suficiente para el bootcamp. No se requiere tarjeta de crédito para el plan gratuito.

### Paso 3 — Verificar que funciona

```bash
export TAVILY_API_KEY="tvly-TU_CLAVE_AQUI"

curl -s -X POST "https://api.tavily.com/search" \
  -H "Content-Type: application/json" \
  -d "{\"api_key\": \"${TAVILY_API_KEY}\", \"query\": \"NVIDIA NIM microservices\"}" | \
  python3 -m json.tool | head -20
```

Si ves resultados de búsqueda en formato JSON, tu clave está activa.

### Cómo se usa en el bootcamp

```bash
# En la terminal:
export TAVILY_API_KEY="tvly-TU_CLAVE_AQUI"
```

```python
# En los notebooks de agentes LangGraph:
from langchain_community.tools.tavily_search import TavilySearchResults
import os

os.environ["TAVILY_API_KEY"] = "tvly-TU_CLAVE_AQUI"

search_tool = TavilySearchResults(max_results=3)
results = search_tool.invoke("NVIDIA H100 specifications")
```

---

## Lista de Verificación Previa al Bootcamp

Completa esta lista antes del día del bootcamp para asegurarte de que todo está listo:

- [ ] Estoy registrado en el **NVIDIA Developer Program** y recibí el correo de confirmación
- [ ] Tengo cuenta en **build.nvidia.com** y mi correo está verificado
- [ ] Tengo mi **NVIDIA API Key** guardada de forma segura (comienza con `nvapi-`)
- [ ] He probado la NVIDIA API Key con el comando `curl` y funciona correctamente
- [ ] Tengo cuenta en **huggingface.co** y mi correo está verificado
- [ ] He aceptado los términos de uso de **LLaMA-3** en Hugging Face
- [ ] Tengo mi **Hugging Face Token** guardado de forma segura (comienza con `hf_`)
- [ ] He instalado `huggingface_hub` con `pip install huggingface_hub` y `huggingface-cli whoami` muestra mi usuario
- [ ] Tengo cuenta en **app.tavily.com** y mi correo está verificado
- [ ] Tengo mi **Tavily API Key** guardada de forma segura (comienza con `tvly-`)
- [ ] He probado la Tavily API Key con el comando `curl` y funciona correctamente
- [ ] He configurado las variables de entorno en mi VM:
  ```bash
  export NGC_API_KEY="nvapi-..."
  export NVIDIA_API_KEY="nvapi-..."
  export HF_TOKEN="hf_..."
  export TAVILY_API_KEY="tvly-..."
  ```
- [ ] He autenticado Docker con `docker login nvcr.io`

---

## Tabla Resumen de Variables de Entorno

Estas son todas las variables de entorno que se usan a lo largo del bootcamp. Puedes agregarlas a tu `~/.bashrc` para no tener que exportarlas cada vez:

```bash
# Clave de API de NVIDIA (misma clave, dos nombres de variable)
export NGC_API_KEY="nvapi-TU_CLAVE_AQUI"
export NVIDIA_API_KEY="nvapi-TU_CLAVE_AQUI"

# Token de Hugging Face
export HF_TOKEN="hf_TU_TOKEN_AQUI"

# Clave de API de Tavily (búsqueda web para agentes)
export TAVILY_API_KEY="tvly-TU_CLAVE_AQUI"
```

Para aplicar los cambios sin cerrar sesión:

```bash
source ~/.bashrc
```

---

## Solución de Problemas

**"Invalid API Key" al llamar a la API de NVIDIA**
- Verifica que la clave comienza con `nvapi-` y no tiene espacios extra
- Asegúrate de que la variable de entorno está correctamente exportada: `echo $NVIDIA_API_KEY`
- Genera una nueva clave en build.nvidia.com si la anterior fue comprometida

**"401 Unauthorized" al descargar LLaMA-3 desde Hugging Face**
- Verifica que aceptaste los términos de uso en la página del modelo
- Asegúrate de que el token tiene permisos de lectura (`Read`)
- Ejecuta `huggingface-cli whoami` para confirmar que estás autenticado

**"Authentication Required" al hacer `docker pull nvcr.io/...`**
- Verifica que tu cuenta está registrada en el **NVIDIA Developer Program** (ver sección "Requisito Previo")
- Ejecuta: `echo "${NGC_API_KEY}" | docker login nvcr.io -u '$oauthtoken' --password-stdin`
- Verifica que `NGC_API_KEY` está exportada: `echo $NGC_API_KEY`

**"Invalid API Key" o error 401 con Tavily**
- Verifica que la clave comienza con `tvly-` y no tiene espacios extra
- Comprueba que no excediste el límite de 1,000 búsquedas del plan gratuito en [app.tavily.com](https://app.tavily.com)
- Verifica que la variable está exportada: `echo $TAVILY_API_KEY`

---

*Guía preparada para el NVIDIA NIM Bootcamp — OpenHackathons.*
