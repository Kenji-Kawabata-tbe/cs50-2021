pythonのalias
vim ./.config/fish/config.fish
alias python='python3'

pythonの仮想環境
python3 -m venv ~/mypy
source ~/mypy/bin/activate.fish # macOS/Linux
mypy\Scripts\activate     # Windows

# パッケージをインストール
pip3 install flask

deactivate

20250203 1:10:32


sqlite3 froshims.db
CREATE TABLE registrants (id INTEGER, name TEXT NOT NULL, sport TEXT NOT NULL, PRIMARY KEY(id));

20250204 1:54:30
