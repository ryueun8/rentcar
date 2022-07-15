# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/revice.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_revice(object):
    def setupUi(self, revice):
        revice.setObjectName("revice")
        revice.resize(365, 331)
        self.label = QtWidgets.QLabel(revice)
        self.label.setGeometry(QtCore.QRect(120, 10, 131, 61))
        font = QtGui.QFont()
        font.setFamily("Ubuntu Condensed")
        font.setPointSize(20)
        font.setBold(True)
        font.setItalic(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setObjectName("label")
        self.pw_text = QtWidgets.QLineEdit(revice)
        self.pw_text.setGeometry(QtCore.QRect(180, 90, 141, 31))
        self.pw_text.setObjectName("pw_text")
        self.label_2 = QtWidgets.QLabel(revice)
        self.label_2.setGeometry(QtCore.QRect(110, 100, 67, 17))
        self.label_2.setObjectName("label_2")
        self.name_text = QtWidgets.QLineEdit(revice)
        self.name_text.setGeometry(QtCore.QRect(180, 140, 141, 31))
        self.name_text.setObjectName("name_text")
        self.label_3 = QtWidgets.QLabel(revice)
        self.label_3.setGeometry(QtCore.QRect(140, 150, 67, 17))
        self.label_3.setObjectName("label_3")
        self.nomal = QtWidgets.QRadioButton(revice)
        self.nomal.setGeometry(QtCore.QRect(50, 210, 112, 23))
        self.nomal.setObjectName("nomal")
        self.premium = QtWidgets.QRadioButton(revice)
        self.premium.setGeometry(QtCore.QRect(150, 210, 112, 23))
        self.premium.setObjectName("premium")
        self.vip = QtWidgets.QRadioButton(revice)
        self.vip.setGeometry(QtCore.QRect(270, 210, 112, 23))
        self.vip.setObjectName("vip")
        self.change = QtWidgets.QPushButton(revice)
        self.change.setGeometry(QtCore.QRect(48, 264, 271, 41))
        self.change.setObjectName("change")

        self.retranslateUi(revice)
        QtCore.QMetaObject.connectSlotsByName(revice)

    def retranslateUi(self, revice):
        _translate = QtCore.QCoreApplication.translate
        revice.setWindowTitle(_translate("revice", "Dialog"))
        self.label.setText(_translate("revice", "정보수정"))
        self.label_2.setText(_translate("revice", "비밀번호"))
        self.label_3.setText(_translate("revice", "이름"))
        self.nomal.setText(_translate("revice", "일반"))
        self.premium.setText(_translate("revice", "프리미엄"))
        self.vip.setText(_translate("revice", "VIP"))
        self.change.setText(_translate("revice", "변경"))
