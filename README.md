Phishy
===
Phishy sends harmless emails with characteristics of phishing messages to selected enterprise users in order to assess their natural responses to phishing attacks. By detecting and logging when subjects unwittingly interact with links/enter sensitive information, employee training can be prioritized and personalized.

<strong>NOTE:</strong> Much of the material you may see here is specifically for use at La Cañada High School, but emails can easily be created and/or tailored to any group of enterprise users.

Setup & Usage
---
No `pip` dependencies are required; this project only uses python3 builtins.

1. Create a `config.json`, following the template (`config_example.json`) provided.
2. Specify a list of targets in `targets.txt`.
3. Run `/usr/bin/python3 autosend.py` once you're ready to send.