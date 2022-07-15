# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/chatting.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_chatting(object):
    def setupUi(self, chatting):
        chatting.setObjectName("chatting")
        chatting.resize(412, 342)
        self.listWidget = QtWidgets.QListWidget(chatting)
        self.listWidget.setGeometry(QtCore.QRect(20, 20, 371, 231))
        self.listWidget.setObjectName("listWidget")
        self.sendButton = QtWidgets.QPushButton(chatting)
        self.sendButton.setGeometry(QtCore.QRect(318, 269, 71, 51))
        self.sendButton.setObjectName("sendButton")
        self.messageLineEdit = QtWidgets.QLineEdit(chatting)
        self.messageLineEdit.setGeometry(QtCore.QRect(20, 270, 299, 51))
        self.messageLineEdit.setObjectName("messageLineEdit")

        self.retranslateUi(chatting)
        QtCore.QMetaObject.connectSlotsByName(chatting)

    def retranslateUi(self, chatting):
        _translate = QtCore.QCoreApplication.translate
        chatting.setWindowTitle(_translate("chatting", "Dialog"))
        self.sendButton.setText(_translate("chatting", "전송"))
