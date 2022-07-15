# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/chat.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_chat(object):
    def setupUi(self, chat):
        chat.setObjectName("chat")
        chat.resize(452, 321)
        self.textBrowser = QtWidgets.QTextBrowser(chat)
        self.textBrowser.setGeometry(QtCore.QRect(20, 20, 411, 221))
        self.textBrowser.setObjectName("textBrowser")
        self.pushButton = QtWidgets.QPushButton(chat)
        self.pushButton.setGeometry(QtCore.QRect(358, 260, 71, 41))
        self.pushButton.setObjectName("pushButton")
        self.lineEdit = QtWidgets.QLineEdit(chat)
        self.lineEdit.setGeometry(QtCore.QRect(20, 260, 341, 41))
        self.lineEdit.setObjectName("lineEdit")

        self.retranslateUi(chat)
        QtCore.QMetaObject.connectSlotsByName(chat)

    def retranslateUi(self, chat):
        _translate = QtCore.QCoreApplication.translate
        chat.setWindowTitle(_translate("chat", "Dialog"))
        self.pushButton.setText(_translate("chat", "전송"))
