import sys
from PyQt5.QtCore import QSize, Qt
from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton

window_titles=[
    'I will',
    'become',
    'someone',
    'great',
    'oneday',
    'and',
    'that',
    'oneday',
    'is not',
    'far',
    'away.',
    'FINISH'
    ]
iteration=0
class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        #self.button_is_checked=False
        self.n_times_clicked=0
        self.setWindowTitle("MY APP")
        # self.anotherbutton=QPushButton("Just another useless button")
        self.button=QPushButton("Press Me!")
        self.setMinimumSize(QSize(400,300))
        self.setMaximumSize(QSize(800,600))
        # self.button.setCheckable(True)
        self.button.clicked.connect(self.the_button_was_clicked)
        self.windowTitleChanged.connect(self.the_window_title_changed)
        self.setCentralWidget(self.button)
        # button.clicked.connect(self.the_button_was_toggled)
        # self.button.setChecked(self.button_is_checked)
        # self.anotherbutton.clicked.connect(self.the_button_was_clicked)
        # self.button.released.connect(self.the_button_was_released)
    def the_button_was_clicked(self):
        global iteration
        new_window_title=window_titles[iteration]
        iteration+=1
        self.setWindowTitle(new_window_title)
        # self.button.setText("You already clicked me.")
        # self.button.setEnabled(False)
        # self.setWindowTitle("My oneshot App")
    # def the_button_was_toggled(self,checked):
    #     self.button_is_checked=checked

    #     print(self.button_is_checked)
    # def the_button_was_released(self):
    #     self.button_is_checked = self.button.isChecked()
    #     print(self.button_is_checked)
    def the_window_title_changed(self,window_title):
        print("window title changed: %s"%window_title)
        if window_title=='FINISH':
            self.button.setDisabled(True)
app=QApplication(sys.argv)

window=MainWindow()
window.show()

app.exec()