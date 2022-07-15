# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/mainpage.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_mainpage(object):
    def setupUi(self, mainpage):
        mainpage.setObjectName("mainpage")
        mainpage.resize(400, 359)
        font = QtGui.QFont()
        font.setBold(True)
        font.setItalic(True)
        font.setWeight(75)
        mainpage.setFont(font)
        self.label = QtWidgets.QLabel(mainpage)
        self.label.setGeometry(QtCore.QRect(124, 9, 151, 81))
        font = QtGui.QFont()
        font.setFamily("Waree")
        font.setPointSize(20)
        font.setBold(True)
        font.setItalic(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setObjectName("label")
        self.info = QtWidgets.QPushButton(mainpage)
        self.info.setGeometry(QtCore.QRect(99, 99, 201, 41))
        font = QtGui.QFont()
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.info.setFont(font)
        self.info.setObjectName("info")
        self.rental = QtWidgets.QPushButton(mainpage)
        self.rental.setGeometry(QtCore.QRect(99, 169, 201, 41))
        font = QtGui.QFont()
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.rental.setFont(font)
        self.rental.setObjectName("rental")
        self.visit = QtWidgets.QPushButton(mainpage)
        self.visit.setGeometry(QtCore.QRect(100, 239, 201, 41))
        font = QtGui.QFont()
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.visit.setFont(font)
        self.visit.setObjectName("visit")
        self.pushButton = QtWidgets.QPushButton(mainpage)
        self.pushButton.setGeometry(QtCore.QRect(324, 304, 71, 51))
        font = QtGui.QFont()
        font.setBold(True)
        font.setItalic(True)
        font.setWeight(75)
        self.pushButton.setFont(font)
        self.pushButton.setStyleSheet("border :3px solid blue;\n"
"border-top-left-radius :25px;\n"
"border-top-right-radius : 25px; \n"
"border-bottom-left-radius : 25px; \n"
"border-bottom-right-radius : 25px")
        self.pushButton.setObjectName("pushButton")

        self.retranslateUi(mainpage)
        QtCore.QMetaObject.connectSlotsByName(mainpage)

    def retranslateUi(self, mainpage):
        _translate = QtCore.QCoreApplication.translate
        mainpage.setWindowTitle(_translate("mainpage", "Dialog"))
        self.label.setText(_translate("mainpage", "복이 렌터카"))
        self.info.setText(_translate("mainpage", "내 정보"))
        self.rental.setText(_translate("mainpage", "렌터카 예약"))
        self.visit.setText(_translate("mainpage", "여행지"))
        self.pushButton.setText(_translate("mainpage", "chat"))
