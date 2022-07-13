# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/signup.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_signup(object):
    def setupUi(self, signup):
        signup.setObjectName("signup")
        signup.resize(400, 300)
        self.sign = QtWidgets.QPushButton(signup)
        self.sign.setGeometry(QtCore.QRect(100, 220, 201, 41))
        self.sign.setStyleSheet("color: rgb(98, 133, 103);\n"
"")
        self.sign.setObjectName("sign")
        self.name_text = QtWidgets.QLineEdit(signup)
        self.name_text.setGeometry(QtCore.QRect(100, 40, 201, 41))
        self.name_text.setObjectName("name_text")
        self.pw_text = QtWidgets.QLineEdit(signup)
        self.pw_text.setGeometry(QtCore.QRect(101, 140, 201, 41))
        self.pw_text.setObjectName("pw_text")
        self.id_text = QtWidgets.QLineEdit(signup)
        self.id_text.setGeometry(QtCore.QRect(100, 90, 201, 41))
        self.id_text.setObjectName("id_text")
        self.nomal = QtWidgets.QRadioButton(signup)
        self.nomal.setGeometry(QtCore.QRect(92, 190, 112, 23))
        self.nomal.setObjectName("nomal")
        self.premium = QtWidgets.QRadioButton(signup)
        self.premium.setGeometry(QtCore.QRect(162, 190, 112, 23))
        self.premium.setObjectName("premium")
        self.vip = QtWidgets.QRadioButton(signup)
        self.vip.setGeometry(QtCore.QRect(260, 190, 51, 23))
        self.vip.setObjectName("vip")
        self.check = QtWidgets.QPushButton(signup)
        self.check.setGeometry(QtCore.QRect(300, 90, 61, 41))
        self.check.setStyleSheet("color: rgb(98, 133, 103);\n"
"border-radioius: 0px;\n"
"")
        self.check.setObjectName("check")

        self.retranslateUi(signup)
        QtCore.QMetaObject.connectSlotsByName(signup)

    def retranslateUi(self, signup):
        _translate = QtCore.QCoreApplication.translate
        signup.setWindowTitle(_translate("signup", "Dialog"))
        self.sign.setText(_translate("signup", "회원가입"))
        self.name_text.setPlaceholderText(_translate("signup", "이름"))
        self.pw_text.setPlaceholderText(_translate("signup", "비밀번호"))
        self.id_text.setPlaceholderText(_translate("signup", "아이디"))
        self.nomal.setText(_translate("signup", "일반"))
        self.premium.setText(_translate("signup", "프리미엄"))
        self.vip.setText(_translate("signup", "VIP"))
        self.check.setText(_translate("signup", "중복확인"))
