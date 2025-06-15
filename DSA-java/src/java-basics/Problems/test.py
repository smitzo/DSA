import requests

url = "https://siat.sat.gob.mx/app/qr/faces/pages/mobile/validadorqr.jsf?D1=10&D2=1&D3=20040010973_OTE2003102G1"

try:
    response = requests.get(url, timeout=10)
    response.raise_for_status()
    print(response.text[:1000])
except requests.exceptions.Timeout:
    print("Request timed out")
except requests.exceptions.ConnectionError as e:
    print(f"Connection error: {e}")
except Exception as e:
    print(f"Error: {e}")
