from systemd import journal
journal.send('Hello world')
journal.send('Hello, again, world', FIELD2='Greetings!', FIELD3='Guten tag')