"""
Send stuff in bulk
"""

import smtplib
from json import load

# TODO: make content selectable (via runtime config file)
content = r"test"

with open("./config.json", 'r') as config_stream:
    config = load(config_stream)
    LOGIN_SERVER = config["LOGIN_SERVER"]
    USER = config["USER"]
    PASS = config["PASS"]
    TARGET_LIST = config["TARGET_LIST"]

with open(TARGET_LIST, 'r') as targets:
    recipients = [t for t in targets]

# Authenticate
server = smtplib.SMTP_SSL(LOGIN_SERVER, 465)
server.login(USER, PASS)
print("logged in as USER {}.".format(USER))

# send emails
for r in recipients:
    server.sendmail(USER, r, content)
    print("send email to address {}.".format(r.rstrip()))

# clean up
server.close()