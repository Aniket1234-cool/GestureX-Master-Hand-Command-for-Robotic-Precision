from flask import Flask, request
import subprocess

app = Flask(__name__)

@app.route('/')
def run_script():
    script_name = request.args.get('script')  # Ignored in this case (no query string)
    result = subprocess.run(["python", "MAIN_cv_controll.py"], capture_output=True, text=True)
    return result.stdout

if __name__ == '__main__':
    app.run(debug=True)
