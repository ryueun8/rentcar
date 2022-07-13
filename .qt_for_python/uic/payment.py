# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/payment.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_payment(object):
    def setupUi(self, payment):
        payment.setObjectName("payment")
        payment.resize(333, 284)
        self.label_2 = QtWidgets.QLabel(payment)
        self.label_2.setGeometry(QtCore.QRect(111, 10, 101, 71))
        font = QtGui.QFont()
        font.setFamily("Ubuntu Condensed")
        font.setPointSize(20)
        font.setBold(True)
        font.setItalic(True)
        font.setWeight(75)
        self.label_2.setFont(font)
        self.label_2.setObjectName("label_2")
        self.kakao = QtWidgets.QPushButton(payment)
        self.kakao.setGeometry(QtCore.QRect(112, 94, 101, 41))
        self.kakao.setStyleSheet("border-top-left-radius :25px;\n"
"border-top-right-radius : 25px; \n"
"border-bottom-left-radius : 25px; \n"
"border-bottom-right-radius : 25px")
        self.kakao.setText("")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("/home/iot/rentcar/client/../사진/카카오33.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.kakao.setIcon(icon)
        self.kakao.setIconSize(QtCore.QSize(100, 100))
        self.kakao.setObjectName("kakao")
        self.toss = QtWidgets.QPushButton(payment)
        self.toss.setGeometry(QtCore.QRect(112, 154, 101, 41))
        self.toss.setStyleSheet("border-top-left-radius :25px;\n"
"border-top-right-radius : 25px; \n"
"border-bottom-left-radius : 25px; \n"
"border-bottom-right-radius : 25px")
        self.toss.setText("")
        icon1 = QtGui.QIcon()
        icon1.addPixmap(QtGui.QPixmap("/home/iot/rentcar/client/../사진/토스2.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.toss.setIcon(icon1)
        self.toss.setIconSize(QtCore.QSize(100, 100))
        self.toss.setObjectName("toss")
        self.bankbook = QtWidgets.QPushButton(payment)
        self.bankbook.setGeometry(QtCore.QRect(110, 214, 101, 41))
        self.bankbook.setObjectName("bankbook")
        self.kakao.raise_()
        self.label_2.raise_()
        self.toss.raise_()
        self.bankbook.raise_()

        self.retranslateUi(payment)
        QtCore.QMetaObject.connectSlotsByName(payment)

    def retranslateUi(self, payment):
        _translate = QtCore.QCoreApplication.translate
        payment.setWindowTitle(_translate("payment", "Dialog"))
        self.label_2.setText(_translate("payment", "캐시충전"))
        self.bankbook.setText(_translate("payment", "무통장 입금"))
