"""
Send stuff in bulk
"""

import smtplib
from json import loads

# Load runtime settings & targets
with open("./config.json", 'r') as config_stream:
    config = loads(config_stream.read())

with open(config["TARGET_LIST"], 'r') as targets:
    recipients = [t for t in targets]

content = open(config['CONTENT']).read()

# Authenticate user
server = smtplib.SMTP_SSL(config['LOGIN_SERVER'], 465)
server.login(config['USER'], config['PASS'])
print("logged in as USER {}.".format(config['USER']))

# Send emails
for r in recipients:
    try:
        server.sendmail(config['USER'], r, content)
        print("sent email to address `{}`".format(r.rstrip()))
    except:
        print("[ERROR] failed to send email to address `{}`".format(r.strip()))

server.close()