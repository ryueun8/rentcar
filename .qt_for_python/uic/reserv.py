# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/reserv.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_reserv(object):
    def setupUi(self, reserv):
        reserv.setObjectName("reserv")
        reserv.resize(529, 487)
        self.label = QtWidgets.QLabel(reserv)
        self.label.setGeometry(QtCore.QRect(180, 0, 241, 81))
        font = QtGui.QFont()
        font.setFamily("Ubuntu Condensed")
        font.setPointSize(20)
        font.setBold(True)
        font.setItalic(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setObjectName("label")
        self.carwidget = QtWidgets.QTableWidget(reserv)
        self.carwidget.setGeometry(QtCore.QRect(50, 154, 431, 211))
        self.carwidget.setObjectName("carwidget")
        self.carwidget.setColumnCount(0)
        self.carwidget.setRowCount(0)
        self.chat = QtWidgets.QPushButton(reserv)
        self.chat.setGeometry(QtCore.QRect(0, 434, 81, 51))
        font = QtGui.QFont()
        font.setFamily("Ubuntu Condensed")
        font.setPointSize(15)
        self.chat.setFont(font)
        self.chat.setStyleSheet("border :3px solid blue;\n"
"border-top-left-radius :25px;\n"
"border-top-right-radius : 25px; \n"
"border-bottom-left-radius : 25px; \n"
"border-bottom-right-radius : 25px")
        self.chat.setObjectName("chat")
        self.reserv_date = QtWidgets.QDateTimeEdit(reserv)
        self.reserv_date.setGeometry(QtCore.QRect(54, 113, 194, 26))
        self.reserv_date.setObjectName("reserv_date")
        self.return_date = QtWidgets.QDateTimeEdit(reserv)
        self.return_date.setGeometry(QtCore.QRect(284, 113, 194, 26))
        self.return_date.setObjectName("return_date")
        self.oil1 = QtWidgets.QRadioButton(reserv)
        self.oil1.setGeometry(QtCore.QRect(51, 381, 112, 23))
        self.oil1.setObjectName("oil1")
        self.oil2 = QtWidgets.QRadioButton(reserv)
        self.oil2.setGeometry(QtCore.QRect(161, 381, 112, 23))
        self.oil2.setObjectName("oil2")
        self.oil3 = QtWidgets.QRadioButton(reserv)
        self.oil3.setGeometry(QtCore.QRect(281, 381, 112, 23))
        self.oil3.setObjectName("oil3")
        self.oil4 = QtWidgets.QRadioButton(reserv)
        self.oil4.setGeometry(QtCore.QRect(401, 381, 112, 23))
        self.oil4.setObjectName("oil4")
        self.label_2 = QtWidgets.QLabel(reserv)
        self.label_2.setGeometry(QtCore.QRect(56, 93, 67, 17))
        self.label_2.setObjectName("label_2")
        self.label_3 = QtWidgets.QLabel(reserv)
        self.label_3.setGeometry(QtCore.QRect(286, 92, 67, 17))
        self.label_3.setObjectName("label_3")
        self.booking = QtWidgets.QPushButton(reserv)
        self.booking.setGeometry(QtCore.QRect(444, 434, 81, 51))
        font = QtGui.QFont()
        font.setFamily("Ubuntu Condensed")
        font.setPointSize(15)
        self.booking.setFont(font)
        self.booking.setStyleSheet("border :3px solid blue;\n"
"border-top-left-radius :25px;\n"
"border-top-right-radius : 25px; \n"
"border-bottom-left-radius : 25px; \n"
"border-bottom-right-radius : 25px")
        self.booking.setObjectName("booking")

        self.retranslateUi(reserv)
        QtCore.QMetaObject.connectSlotsByName(reserv)

    def retranslateUi(self, reserv):
        _translate = QtCore.QCoreApplication.translate
        reserv.setWindowTitle(_translate("reserv", "Dialog"))
        self.label.setText(_translate("reserv", "렌터카 예약"))
        self.chat.setText(_translate("reserv", "chat"))
        self.oil1.setText(_translate("reserv", "경유"))
        self.oil2.setText(_translate("reserv", "휘발유"))
        self.oil3.setText(_translate("reserv", "LPG"))
        self.oil4.setText(_translate("reserv", "전기차"))
        self.label_2.setText(_translate("reserv", "예약날짜"))
        self.label_3.setText(_translate("reserv", "반납날짜"))
        self.booking.setText(_translate("reserv", "book"))
