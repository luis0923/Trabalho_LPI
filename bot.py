from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

def preencher_formulario():
    # Inicializa o driver do Chrome
    driver = webdriver.Chrome()

    # URL do formulário do Google Docs
    form_url = 'https://docs.google.com/forms/d/e/1FAIpQLSfcMgjs__dDu6o2Jk_X-DnFKJF0ofEX-tRtm_fo0NOzXU9Fkg/viewform?fbclid=PAZXh0bgNhZW0CMTEAAabVjzUuLOWMuOY-XHkbDUWDwN-QJeeo38F4H2j7s9QiuN-5FcNIRRh9u88_aem_N32Tyhd0NmY6Vx0Sz5mV2A'
    driver.get(form_url)

    wait = WebDriverWait(driver, 20)

    def formular_formulario():
        try:

            # Digitar o gmail do negócio
            name_question_xpath = 'FALTA o PATH'
            name_text_box = wait.until(EC.visibility_of_element_located((By.XPATH, name_question_xpath)))
            driver.execute_script("arguments[0].scrollIntoView(true);", name_text_box)
            name_text_box.send_keys("souomilior123@gmail.com")
            print("Nome preenchido")

            # Digitar o Nome do negócio
            name_question_xpath = '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[1]/div/div/div[2]/div/div[1]/div/div[1]/input'
            name_text_box = wait.until(EC.visibility_of_element_located((By.XPATH, name_question_xpath)))
            driver.execute_script("arguments[0].scrollIntoView(true);", name_text_box)
            name_text_box.send_keys("Asta")
            print("Nome preenchido")

            # Digitar o número
            number_question_xpath = '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[2]/div/div/div[2]/div/div[1]/div/div[1]/input'
            number_text_box = wait.until(EC.visibility_of_element_located((By.XPATH, number_question_xpath)))
            driver.execute_script("arguments[0].scrollIntoView(true);", number_text_box)
            number_text_box.send_keys("84988990480")
            print("Número preenchido")

            # Voto
            vote_xpath = '/html/body/div[1]/div[2]/form/div[2]/div/div[2]/div[3]/div/div/div[2]/div/div/span/div/div[2]/label/div/div[1]/div/div[3]/div'
            vote_option = wait.until(EC.element_to_be_clickable((By.XPATH, vote_xpath)))
            driver.execute_script("arguments[0].scrollIntoView(true);", vote_option)
            vote_option.click()
            print("Opção de voto selecionada")

            # Enviar o formulário
            submit_button_xpath = '/html/body/div[1]/div[2]/form/div[2]/div/div[3]/div[1]/div[1]/div/span/span'
            submit_button = wait.until(EC.element_to_be_clickable((By.XPATH, submit_button_xpath)))
            driver.execute_script("arguments[0].scrollIntoView(true);", submit_button)
            submit_button.click()
            print("Formulário enviado")
        except Exception as e:
            print(f"Erro ao preencher o formulário: {e}")

        finally:
            time.sleep(1)

    # Loop para preencher o formulário várias vezes
for a in range(500):
    preencher_formulario()
    a += 1




