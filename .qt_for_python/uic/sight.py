# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '/home/iot/rentcar/client/sight.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_sight(object):
    def setupUi(self, sight):
        sight.setObjectName("sight")
        sight.resize(569, 419)
        font = QtGui.QFont()
        font.setPointSize(11)
        sight.setFont(font)
        self.listtable = QtWidgets.QTableWidget(sight)
        self.listtable.setGeometry(QtCore.QRect(80, 110, 401, 281))
        font = QtGui.QFont()
        font.setPointSize(11)
        self.listtable.setFont(font)
        self.listtable.setObjectName("listtable")
        self.listtable.setColumnCount(0)
        self.listtable.setRowCount(0)
        self.label = QtWidgets.QLabel(sight)
        self.label.setGeometry(QtCore.QRect(210, 30, 221, 61))
        font = QtGui.QFont()
        font.setPointSize(20)
        font.setBold(True)
        font.setItalic(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setObjectName("label")

        self.retranslateUi(sight)
        QtCore.QMetaObject.connectSlotsByName(sight)

    def retranslateUi(self, sight):
        _translate = QtCore.QCoreApplication.translate
        sight.setWindowTitle(_translate("sight", "Dialog"))
        self.label.setText(_translate("sight", "복이 여행지"))
