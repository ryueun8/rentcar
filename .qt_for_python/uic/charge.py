# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/charge.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_charge(object):
    def setupUi(self, charge):
        charge.setObjectName("charge")
        charge.resize(383, 411)
        self.char_money = QtWidgets.QLineEdit(charge)
        self.char_money.setGeometry(QtCore.QRect(30, 40, 251, 51))
        self.char_money.setObjectName("char_money")
        self.charge_2 = QtWidgets.QPushButton(charge)
        self.charge_2.setGeometry(QtCore.QRect(280, 40, 71, 51))
        self.charge_2.setObjectName("charge_2")
        self.label = QtWidgets.QLabel(charge)
        self.label.setGeometry(QtCore.QRect(180, 97, 171, 16))
        self.label.setObjectName("label")
        self.label_2 = QtWidgets.QLabel(charge)
        self.label_2.setGeometry(QtCore.QRect(150, 166, 101, 51))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.label_2.setFont(font)
        self.label_2.setObjectName("label_2")
        self.label_3 = QtWidgets.QLabel(charge)
        self.label_3.setGeometry(QtCore.QRect(135, 217, 91, 31))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.label_3.setFont(font)
        self.label_3.setObjectName("label_3")
        self.line = QtWidgets.QFrame(charge)
        self.line.setGeometry(QtCore.QRect(20, 263, 341, 20))
        self.line.setFrameShape(QtWidgets.QFrame.HLine)
        self.line.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line.setObjectName("line")
        self.label_4 = QtWidgets.QLabel(charge)
        self.label_4.setGeometry(QtCore.QRect(180, 297, 51, 17))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.label_4.setFont(font)
        self.label_4.setObjectName("label_4")
        self.pay = QtWidgets.QPushButton(charge)
        self.pay.setGeometry(QtCore.QRect(30, 347, 321, 41))
        self.pay.setObjectName("pay")
        self.all_text = QtWidgets.QTextBrowser(charge)
        self.all_text.setGeometry(QtCore.QRect(220, 179, 131, 31))
        self.all_text.setObjectName("all_text")
        self.fin_text = QtWidgets.QTextBrowser(charge)
        self.fin_text.setGeometry(QtCore.QRect(220, 290, 131, 31))
        self.fin_text.setObjectName("fin_text")
        self.sale_text = QtWidgets.QTextBrowser(charge)
        self.sale_text.setGeometry(QtCore.QRect(220, 220, 131, 31))
        self.sale_text.setObjectName("sale_text")

        self.retranslateUi(charge)
        QtCore.QMetaObject.connectSlotsByName(charge)

    def retranslateUi(self, charge):
        _translate = QtCore.QCoreApplication.translate
        charge.setWindowTitle(_translate("charge", "Dialog"))
        self.char_money.setPlaceholderText(_translate("charge", "충전할 금액 입력(10,000원 이상)"))
        self.charge_2.setText(_translate("charge", "충전"))
        self.label.setText(_translate("charge", "캐시 충전시 마일리지 지급!"))
        self.label_2.setText(_translate("charge", "결제금액"))
        self.label_3.setText(_translate("charge", "할인된 금액"))
        self.label_4.setText(_translate("charge", "총 액"))
        self.pay.setText(_translate("charge", "결제"))
