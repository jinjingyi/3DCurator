/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/GUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[124];
    char stringdata0[2631];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_actionOpenDICOM_triggered"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 36), // "on_actionExportVolumeImage_tr..."
QT_MOC_LITERAL(4, 78, 35), // "on_actionExportSliceImage_tri..."
QT_MOC_LITERAL(5, 114, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(6, 138, 37), // "on_actionEnableDisablePlane_t..."
QT_MOC_LITERAL(7, 176, 31), // "on_actionSagitalPlane_triggered"
QT_MOC_LITERAL(8, 208, 29), // "on_actionAxialPlane_triggered"
QT_MOC_LITERAL(9, 238, 31), // "on_actionCoronalPlane_triggered"
QT_MOC_LITERAL(10, 270, 31), // "on_actionImportPreset_triggered"
QT_MOC_LITERAL(11, 302, 31), // "on_actionExportPreset_triggered"
QT_MOC_LITERAL(12, 334, 33), // "on_actionCompletePreset_trigg..."
QT_MOC_LITERAL(13, 368, 29), // "on_actionWoodPreset_triggered"
QT_MOC_LITERAL(14, 398, 31), // "on_actionStuccoPreset_triggered"
QT_MOC_LITERAL(15, 430, 30), // "on_actionMetalPreset_triggered"
QT_MOC_LITERAL(16, 461, 36), // "on_actionDeleteVolumeParts_tr..."
QT_MOC_LITERAL(17, 498, 30), // "on_actionExtractMesh_triggered"
QT_MOC_LITERAL(18, 529, 27), // "on_actionWoodMesh_triggered"
QT_MOC_LITERAL(19, 557, 29), // "on_actionStuccoMesh_triggered"
QT_MOC_LITERAL(20, 587, 28), // "on_actionMetalMesh_triggered"
QT_MOC_LITERAL(21, 616, 20), // "on_openDICOM_pressed"
QT_MOC_LITERAL(22, 637, 21), // "on_axialPlane_pressed"
QT_MOC_LITERAL(23, 659, 23), // "on_coronalPlane_pressed"
QT_MOC_LITERAL(24, 683, 23), // "on_sagitalPlane_pressed"
QT_MOC_LITERAL(25, 707, 27), // "on_exportSliceImage_pressed"
QT_MOC_LITERAL(26, 735, 28), // "on_exportVolumeImage_pressed"
QT_MOC_LITERAL(27, 764, 23), // "on_importPreset_pressed"
QT_MOC_LITERAL(28, 788, 23), // "on_exportPreset_pressed"
QT_MOC_LITERAL(29, 812, 26), // "on_restoreMaterial_pressed"
QT_MOC_LITERAL(30, 839, 27), // "on_updateProperties_pressed"
QT_MOC_LITERAL(31, 867, 25), // "on_completePreset_pressed"
QT_MOC_LITERAL(32, 893, 21), // "on_woodPreset_pressed"
QT_MOC_LITERAL(33, 915, 23), // "on_stuccoPreset_pressed"
QT_MOC_LITERAL(34, 939, 22), // "on_metalPreset_pressed"
QT_MOC_LITERAL(35, 962, 22), // "on_extractMesh_pressed"
QT_MOC_LITERAL(36, 985, 26), // "on_extractMeshWood_pressed"
QT_MOC_LITERAL(37, 1012, 28), // "on_extractMeshStucco_pressed"
QT_MOC_LITERAL(38, 1041, 27), // "on_extractMeshMetal_pressed"
QT_MOC_LITERAL(39, 1069, 29), // "on_enableDisablePlane_pressed"
QT_MOC_LITERAL(40, 1099, 28), // "on_deleteVolumeParts_pressed"
QT_MOC_LITERAL(41, 1128, 23), // "on_addSliceRule_pressed"
QT_MOC_LITERAL(42, 1152, 24), // "on_addVolumeRule_pressed"
QT_MOC_LITERAL(43, 1177, 26), // "on_deleteSliceRule_pressed"
QT_MOC_LITERAL(44, 1204, 27), // "on_deleteVolumeRule_pressed"
QT_MOC_LITERAL(45, 1232, 33), // "on_enableDisableSliceRule_pre..."
QT_MOC_LITERAL(46, 1266, 34), // "on_enableDisableVolumeRule_pr..."
QT_MOC_LITERAL(47, 1301, 27), // "on_volumeBackground_pressed"
QT_MOC_LITERAL(48, 1329, 35), // "on_volumeDeletingBackground_p..."
QT_MOC_LITERAL(49, 1365, 25), // "on_meshBackground_pressed"
QT_MOC_LITERAL(50, 1391, 29), // "on_restoreBackgrounds_pressed"
QT_MOC_LITERAL(51, 1421, 21), // "on_segmentate_pressed"
QT_MOC_LITERAL(52, 1443, 32), // "on_colorTFMaxSlider_valueChanged"
QT_MOC_LITERAL(53, 1476, 32), // "on_colorTFMinSlider_valueChanged"
QT_MOC_LITERAL(54, 1509, 35), // "on_gradientTFMaxSlider_valueC..."
QT_MOC_LITERAL(55, 1545, 35), // "on_gradientTFMinSlider_valueC..."
QT_MOC_LITERAL(56, 1581, 33), // "on_scalarTFMaxSlider_valueCha..."
QT_MOC_LITERAL(57, 1615, 33), // "on_scalarTFMinSlider_valueCha..."
QT_MOC_LITERAL(58, 1649, 30), // "on_isoValueSlider_valueChanged"
QT_MOC_LITERAL(59, 1680, 18), // "setBackgroundColor"
QT_MOC_LITERAL(60, 1699, 28), // "vtkSmartPointer<vtkRenderer>"
QT_MOC_LITERAL(61, 1728, 3), // "ren"
QT_MOC_LITERAL(62, 1732, 1), // "r"
QT_MOC_LITERAL(63, 1734, 1), // "g"
QT_MOC_LITERAL(64, 1736, 1), // "b"
QT_MOC_LITERAL(65, 1738, 17), // "connectComponents"
QT_MOC_LITERAL(66, 1756, 10), // "drawVolume"
QT_MOC_LITERAL(67, 1767, 8), // "drawMesh"
QT_MOC_LITERAL(68, 1776, 12), // "removeVolume"
QT_MOC_LITERAL(69, 1789, 10), // "removeMesh"
QT_MOC_LITERAL(70, 1800, 12), // "renderVolume"
QT_MOC_LITERAL(71, 1813, 10), // "renderMesh"
QT_MOC_LITERAL(72, 1824, 11), // "renderSlice"
QT_MOC_LITERAL(73, 1836, 9), // "defaultTF"
QT_MOC_LITERAL(74, 1846, 15), // "defaultMaterial"
QT_MOC_LITERAL(75, 1862, 24), // "defaultBackgroundsColors"
QT_MOC_LITERAL(76, 1887, 20), // "defaultPlanePosition"
QT_MOC_LITERAL(77, 1908, 14), // "updateMaterial"
QT_MOC_LITERAL(78, 1923, 13), // "updateSliders"
QT_MOC_LITERAL(79, 1937, 11), // "importDICOM"
QT_MOC_LITERAL(80, 1949, 12), // "importPreset"
QT_MOC_LITERAL(81, 1962, 17), // "loadDefaultPreset"
QT_MOC_LITERAL(82, 1980, 6), // "QFile*"
QT_MOC_LITERAL(83, 1987, 4), // "file"
QT_MOC_LITERAL(84, 1992, 27), // "exportImageFromRenderWindow"
QT_MOC_LITERAL(85, 2020, 32), // "vtkSmartPointer<vtkRenderWindow>"
QT_MOC_LITERAL(86, 2053, 6), // "renWin"
QT_MOC_LITERAL(87, 2060, 8), // "filename"
QT_MOC_LITERAL(88, 2069, 12), // "exportPreset"
QT_MOC_LITERAL(89, 2082, 16), // "exportMeshToFile"
QT_MOC_LITERAL(90, 2099, 10), // "exportMesh"
QT_MOC_LITERAL(91, 2110, 10), // "updateMesh"
QT_MOC_LITERAL(92, 2121, 22), // "getExportImageFilename"
QT_MOC_LITERAL(93, 2144, 15), // "defaultFilename"
QT_MOC_LITERAL(94, 2160, 23), // "getExportPresetFilename"
QT_MOC_LITERAL(95, 2184, 21), // "getExportMeshFilename"
QT_MOC_LITERAL(96, 2206, 11), // "enablePlane"
QT_MOC_LITERAL(97, 2218, 12), // "disablePlane"
QT_MOC_LITERAL(98, 2231, 18), // "enableDisablePlane"
QT_MOC_LITERAL(99, 2250, 10), // "axialPlane"
QT_MOC_LITERAL(100, 2261, 12), // "coronalPlane"
QT_MOC_LITERAL(101, 2274, 12), // "sagitalPlane"
QT_MOC_LITERAL(102, 2287, 17), // "deleteVolumeParts"
QT_MOC_LITERAL(103, 2305, 20), // "importCompletePreset"
QT_MOC_LITERAL(104, 2326, 16), // "importWoodPreset"
QT_MOC_LITERAL(105, 2343, 18), // "importStuccoPreset"
QT_MOC_LITERAL(106, 2362, 17), // "importMetalPreset"
QT_MOC_LITERAL(107, 2380, 7), // "addRule"
QT_MOC_LITERAL(108, 2388, 4), // "type"
QT_MOC_LITERAL(109, 2393, 10), // "deleteRule"
QT_MOC_LITERAL(110, 2404, 17), // "enableDisableRule"
QT_MOC_LITERAL(111, 2422, 10), // "enableRule"
QT_MOC_LITERAL(112, 2433, 11), // "disableRule"
QT_MOC_LITERAL(113, 2445, 13), // "clearAllRules"
QT_MOC_LITERAL(114, 2459, 24), // "restoreBackgroundsColors"
QT_MOC_LITERAL(115, 2484, 13), // "launchWarning"
QT_MOC_LITERAL(116, 2498, 11), // "std::string"
QT_MOC_LITERAL(117, 2510, 7), // "message"
QT_MOC_LITERAL(118, 2518, 21), // "launchWarningNoVolume"
QT_MOC_LITERAL(119, 2540, 19), // "launchWarningNoRule"
QT_MOC_LITERAL(120, 2560, 25), // "launchWarningTooManyRules"
QT_MOC_LITERAL(121, 2586, 21), // "changeBackgroundColor"
QT_MOC_LITERAL(122, 2608, 6), // "widget"
QT_MOC_LITERAL(123, 2615, 15) // "segmentateOnOff"

    },
    "MainWindow\0on_actionOpenDICOM_triggered\0"
    "\0on_actionExportVolumeImage_triggered\0"
    "on_actionExportSliceImage_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionEnableDisablePlane_triggered\0"
    "on_actionSagitalPlane_triggered\0"
    "on_actionAxialPlane_triggered\0"
    "on_actionCoronalPlane_triggered\0"
    "on_actionImportPreset_triggered\0"
    "on_actionExportPreset_triggered\0"
    "on_actionCompletePreset_triggered\0"
    "on_actionWoodPreset_triggered\0"
    "on_actionStuccoPreset_triggered\0"
    "on_actionMetalPreset_triggered\0"
    "on_actionDeleteVolumeParts_triggered\0"
    "on_actionExtractMesh_triggered\0"
    "on_actionWoodMesh_triggered\0"
    "on_actionStuccoMesh_triggered\0"
    "on_actionMetalMesh_triggered\0"
    "on_openDICOM_pressed\0on_axialPlane_pressed\0"
    "on_coronalPlane_pressed\0on_sagitalPlane_pressed\0"
    "on_exportSliceImage_pressed\0"
    "on_exportVolumeImage_pressed\0"
    "on_importPreset_pressed\0on_exportPreset_pressed\0"
    "on_restoreMaterial_pressed\0"
    "on_updateProperties_pressed\0"
    "on_completePreset_pressed\0"
    "on_woodPreset_pressed\0on_stuccoPreset_pressed\0"
    "on_metalPreset_pressed\0on_extractMesh_pressed\0"
    "on_extractMeshWood_pressed\0"
    "on_extractMeshStucco_pressed\0"
    "on_extractMeshMetal_pressed\0"
    "on_enableDisablePlane_pressed\0"
    "on_deleteVolumeParts_pressed\0"
    "on_addSliceRule_pressed\0"
    "on_addVolumeRule_pressed\0"
    "on_deleteSliceRule_pressed\0"
    "on_deleteVolumeRule_pressed\0"
    "on_enableDisableSliceRule_pressed\0"
    "on_enableDisableVolumeRule_pressed\0"
    "on_volumeBackground_pressed\0"
    "on_volumeDeletingBackground_pressed\0"
    "on_meshBackground_pressed\0"
    "on_restoreBackgrounds_pressed\0"
    "on_segmentate_pressed\0"
    "on_colorTFMaxSlider_valueChanged\0"
    "on_colorTFMinSlider_valueChanged\0"
    "on_gradientTFMaxSlider_valueChanged\0"
    "on_gradientTFMinSlider_valueChanged\0"
    "on_scalarTFMaxSlider_valueChanged\0"
    "on_scalarTFMinSlider_valueChanged\0"
    "on_isoValueSlider_valueChanged\0"
    "setBackgroundColor\0vtkSmartPointer<vtkRenderer>\0"
    "ren\0r\0g\0b\0connectComponents\0drawVolume\0"
    "drawMesh\0removeVolume\0removeMesh\0"
    "renderVolume\0renderMesh\0renderSlice\0"
    "defaultTF\0defaultMaterial\0"
    "defaultBackgroundsColors\0defaultPlanePosition\0"
    "updateMaterial\0updateSliders\0importDICOM\0"
    "importPreset\0loadDefaultPreset\0QFile*\0"
    "file\0exportImageFromRenderWindow\0"
    "vtkSmartPointer<vtkRenderWindow>\0"
    "renWin\0filename\0exportPreset\0"
    "exportMeshToFile\0exportMesh\0updateMesh\0"
    "getExportImageFilename\0defaultFilename\0"
    "getExportPresetFilename\0getExportMeshFilename\0"
    "enablePlane\0disablePlane\0enableDisablePlane\0"
    "axialPlane\0coronalPlane\0sagitalPlane\0"
    "deleteVolumeParts\0importCompletePreset\0"
    "importWoodPreset\0importStuccoPreset\0"
    "importMetalPreset\0addRule\0type\0"
    "deleteRule\0enableDisableRule\0enableRule\0"
    "disableRule\0clearAllRules\0"
    "restoreBackgroundsColors\0launchWarning\0"
    "std::string\0message\0launchWarningNoVolume\0"
    "launchWarningNoRule\0launchWarningTooManyRules\0"
    "changeBackgroundColor\0widget\0"
    "segmentateOnOff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     107,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  549,    2, 0x08 /* Private */,
       3,    0,  550,    2, 0x08 /* Private */,
       4,    0,  551,    2, 0x08 /* Private */,
       5,    0,  552,    2, 0x08 /* Private */,
       6,    0,  553,    2, 0x08 /* Private */,
       7,    0,  554,    2, 0x08 /* Private */,
       8,    0,  555,    2, 0x08 /* Private */,
       9,    0,  556,    2, 0x08 /* Private */,
      10,    0,  557,    2, 0x08 /* Private */,
      11,    0,  558,    2, 0x08 /* Private */,
      12,    0,  559,    2, 0x08 /* Private */,
      13,    0,  560,    2, 0x08 /* Private */,
      14,    0,  561,    2, 0x08 /* Private */,
      15,    0,  562,    2, 0x08 /* Private */,
      16,    0,  563,    2, 0x08 /* Private */,
      17,    0,  564,    2, 0x08 /* Private */,
      18,    0,  565,    2, 0x08 /* Private */,
      19,    0,  566,    2, 0x08 /* Private */,
      20,    0,  567,    2, 0x08 /* Private */,
      21,    0,  568,    2, 0x08 /* Private */,
      22,    0,  569,    2, 0x08 /* Private */,
      23,    0,  570,    2, 0x08 /* Private */,
      24,    0,  571,    2, 0x08 /* Private */,
      25,    0,  572,    2, 0x08 /* Private */,
      26,    0,  573,    2, 0x08 /* Private */,
      27,    0,  574,    2, 0x08 /* Private */,
      28,    0,  575,    2, 0x08 /* Private */,
      29,    0,  576,    2, 0x08 /* Private */,
      30,    0,  577,    2, 0x08 /* Private */,
      31,    0,  578,    2, 0x08 /* Private */,
      32,    0,  579,    2, 0x08 /* Private */,
      33,    0,  580,    2, 0x08 /* Private */,
      34,    0,  581,    2, 0x08 /* Private */,
      35,    0,  582,    2, 0x08 /* Private */,
      36,    0,  583,    2, 0x08 /* Private */,
      37,    0,  584,    2, 0x08 /* Private */,
      38,    0,  585,    2, 0x08 /* Private */,
      39,    0,  586,    2, 0x08 /* Private */,
      40,    0,  587,    2, 0x08 /* Private */,
      41,    0,  588,    2, 0x08 /* Private */,
      42,    0,  589,    2, 0x08 /* Private */,
      43,    0,  590,    2, 0x08 /* Private */,
      44,    0,  591,    2, 0x08 /* Private */,
      45,    0,  592,    2, 0x08 /* Private */,
      46,    0,  593,    2, 0x08 /* Private */,
      47,    0,  594,    2, 0x08 /* Private */,
      48,    0,  595,    2, 0x08 /* Private */,
      49,    0,  596,    2, 0x08 /* Private */,
      50,    0,  597,    2, 0x08 /* Private */,
      51,    0,  598,    2, 0x08 /* Private */,
      52,    0,  599,    2, 0x08 /* Private */,
      53,    0,  600,    2, 0x08 /* Private */,
      54,    0,  601,    2, 0x08 /* Private */,
      55,    0,  602,    2, 0x08 /* Private */,
      56,    0,  603,    2, 0x08 /* Private */,
      57,    0,  604,    2, 0x08 /* Private */,
      58,    0,  605,    2, 0x08 /* Private */,
      59,    4,  606,    2, 0x08 /* Private */,
      65,    0,  615,    2, 0x08 /* Private */,
      66,    0,  616,    2, 0x08 /* Private */,
      67,    0,  617,    2, 0x08 /* Private */,
      68,    0,  618,    2, 0x08 /* Private */,
      69,    0,  619,    2, 0x08 /* Private */,
      70,    0,  620,    2, 0x08 /* Private */,
      71,    0,  621,    2, 0x08 /* Private */,
      72,    0,  622,    2, 0x08 /* Private */,
      73,    0,  623,    2, 0x08 /* Private */,
      74,    0,  624,    2, 0x08 /* Private */,
      75,    0,  625,    2, 0x08 /* Private */,
      76,    0,  626,    2, 0x08 /* Private */,
      77,    0,  627,    2, 0x08 /* Private */,
      78,    0,  628,    2, 0x08 /* Private */,
      79,    0,  629,    2, 0x08 /* Private */,
      80,    0,  630,    2, 0x08 /* Private */,
      81,    1,  631,    2, 0x08 /* Private */,
      84,    2,  634,    2, 0x08 /* Private */,
      88,    1,  639,    2, 0x08 /* Private */,
      89,    1,  642,    2, 0x08 /* Private */,
      90,    0,  645,    2, 0x08 /* Private */,
      91,    0,  646,    2, 0x08 /* Private */,
      92,    1,  647,    2, 0x08 /* Private */,
      94,    1,  650,    2, 0x08 /* Private */,
      95,    1,  653,    2, 0x08 /* Private */,
      96,    0,  656,    2, 0x08 /* Private */,
      97,    0,  657,    2, 0x08 /* Private */,
      98,    0,  658,    2, 0x08 /* Private */,
      99,    0,  659,    2, 0x08 /* Private */,
     100,    0,  660,    2, 0x08 /* Private */,
     101,    0,  661,    2, 0x08 /* Private */,
     102,    0,  662,    2, 0x08 /* Private */,
     103,    0,  663,    2, 0x08 /* Private */,
     104,    0,  664,    2, 0x08 /* Private */,
     105,    0,  665,    2, 0x08 /* Private */,
     106,    0,  666,    2, 0x08 /* Private */,
     107,    1,  667,    2, 0x08 /* Private */,
     109,    1,  670,    2, 0x08 /* Private */,
     110,    1,  673,    2, 0x08 /* Private */,
     111,    1,  676,    2, 0x08 /* Private */,
     112,    1,  679,    2, 0x08 /* Private */,
     113,    0,  682,    2, 0x08 /* Private */,
     114,    0,  683,    2, 0x08 /* Private */,
     115,    1,  684,    2, 0x08 /* Private */,
     118,    0,  687,    2, 0x08 /* Private */,
     119,    0,  688,    2, 0x08 /* Private */,
     120,    0,  689,    2, 0x08 /* Private */,
     121,    1,  690,    2, 0x08 /* Private */,
     123,    0,  693,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60, QMetaType::Float, QMetaType::Float, QMetaType::Float,   61,   62,   63,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, 0x80000000 | 85, QMetaType::QString,   86,   87,
    QMetaType::Void, QMetaType::QString,   87,
    QMetaType::Void, QMetaType::QString,   87,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,   93,
    QMetaType::QString, QMetaType::QString,   93,
    QMetaType::QString, QMetaType::QString,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  108,
    QMetaType::Void, QMetaType::Int,  108,
    QMetaType::Void, QMetaType::Int,  108,
    QMetaType::Void, QMetaType::Int,  108,
    QMetaType::Void, QMetaType::Int,  108,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 116,  117,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  122,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOpenDICOM_triggered(); break;
        case 1: _t->on_actionExportVolumeImage_triggered(); break;
        case 2: _t->on_actionExportSliceImage_triggered(); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_actionEnableDisablePlane_triggered(); break;
        case 5: _t->on_actionSagitalPlane_triggered(); break;
        case 6: _t->on_actionAxialPlane_triggered(); break;
        case 7: _t->on_actionCoronalPlane_triggered(); break;
        case 8: _t->on_actionImportPreset_triggered(); break;
        case 9: _t->on_actionExportPreset_triggered(); break;
        case 10: _t->on_actionCompletePreset_triggered(); break;
        case 11: _t->on_actionWoodPreset_triggered(); break;
        case 12: _t->on_actionStuccoPreset_triggered(); break;
        case 13: _t->on_actionMetalPreset_triggered(); break;
        case 14: _t->on_actionDeleteVolumeParts_triggered(); break;
        case 15: _t->on_actionExtractMesh_triggered(); break;
        case 16: _t->on_actionWoodMesh_triggered(); break;
        case 17: _t->on_actionStuccoMesh_triggered(); break;
        case 18: _t->on_actionMetalMesh_triggered(); break;
        case 19: _t->on_openDICOM_pressed(); break;
        case 20: _t->on_axialPlane_pressed(); break;
        case 21: _t->on_coronalPlane_pressed(); break;
        case 22: _t->on_sagitalPlane_pressed(); break;
        case 23: _t->on_exportSliceImage_pressed(); break;
        case 24: _t->on_exportVolumeImage_pressed(); break;
        case 25: _t->on_importPreset_pressed(); break;
        case 26: _t->on_exportPreset_pressed(); break;
        case 27: _t->on_restoreMaterial_pressed(); break;
        case 28: _t->on_updateProperties_pressed(); break;
        case 29: _t->on_completePreset_pressed(); break;
        case 30: _t->on_woodPreset_pressed(); break;
        case 31: _t->on_stuccoPreset_pressed(); break;
        case 32: _t->on_metalPreset_pressed(); break;
        case 33: _t->on_extractMesh_pressed(); break;
        case 34: _t->on_extractMeshWood_pressed(); break;
        case 35: _t->on_extractMeshStucco_pressed(); break;
        case 36: _t->on_extractMeshMetal_pressed(); break;
        case 37: _t->on_enableDisablePlane_pressed(); break;
        case 38: _t->on_deleteVolumeParts_pressed(); break;
        case 39: _t->on_addSliceRule_pressed(); break;
        case 40: _t->on_addVolumeRule_pressed(); break;
        case 41: _t->on_deleteSliceRule_pressed(); break;
        case 42: _t->on_deleteVolumeRule_pressed(); break;
        case 43: _t->on_enableDisableSliceRule_pressed(); break;
        case 44: _t->on_enableDisableVolumeRule_pressed(); break;
        case 45: _t->on_volumeBackground_pressed(); break;
        case 46: _t->on_volumeDeletingBackground_pressed(); break;
        case 47: _t->on_meshBackground_pressed(); break;
        case 48: _t->on_restoreBackgrounds_pressed(); break;
        case 49: _t->on_segmentate_pressed(); break;
        case 50: _t->on_colorTFMaxSlider_valueChanged(); break;
        case 51: _t->on_colorTFMinSlider_valueChanged(); break;
        case 52: _t->on_gradientTFMaxSlider_valueChanged(); break;
        case 53: _t->on_gradientTFMinSlider_valueChanged(); break;
        case 54: _t->on_scalarTFMaxSlider_valueChanged(); break;
        case 55: _t->on_scalarTFMinSlider_valueChanged(); break;
        case 56: _t->on_isoValueSlider_valueChanged(); break;
        case 57: _t->setBackgroundColor((*reinterpret_cast< vtkSmartPointer<vtkRenderer>(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 58: _t->connectComponents(); break;
        case 59: _t->drawVolume(); break;
        case 60: _t->drawMesh(); break;
        case 61: _t->removeVolume(); break;
        case 62: _t->removeMesh(); break;
        case 63: _t->renderVolume(); break;
        case 64: _t->renderMesh(); break;
        case 65: _t->renderSlice(); break;
        case 66: _t->defaultTF(); break;
        case 67: _t->defaultMaterial(); break;
        case 68: _t->defaultBackgroundsColors(); break;
        case 69: _t->defaultPlanePosition(); break;
        case 70: _t->updateMaterial(); break;
        case 71: _t->updateSliders(); break;
        case 72: _t->importDICOM(); break;
        case 73: _t->importPreset(); break;
        case 74: _t->loadDefaultPreset((*reinterpret_cast< QFile*(*)>(_a[1]))); break;
        case 75: _t->exportImageFromRenderWindow((*reinterpret_cast< vtkSmartPointer<vtkRenderWindow>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 76: _t->exportPreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 77: _t->exportMeshToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 78: _t->exportMesh(); break;
        case 79: _t->updateMesh(); break;
        case 80: { QString _r = _t->getExportImageFilename((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 81: { QString _r = _t->getExportPresetFilename((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 82: { QString _r = _t->getExportMeshFilename((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->enablePlane(); break;
        case 84: _t->disablePlane(); break;
        case 85: _t->enableDisablePlane(); break;
        case 86: _t->axialPlane(); break;
        case 87: _t->coronalPlane(); break;
        case 88: _t->sagitalPlane(); break;
        case 89: _t->deleteVolumeParts(); break;
        case 90: _t->importCompletePreset(); break;
        case 91: _t->importWoodPreset(); break;
        case 92: _t->importStuccoPreset(); break;
        case 93: _t->importMetalPreset(); break;
        case 94: _t->addRule((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 95: _t->deleteRule((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 96: _t->enableDisableRule((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 97: _t->enableRule((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 98: _t->disableRule((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 99: _t->clearAllRules(); break;
        case 100: _t->restoreBackgroundsColors(); break;
        case 101: _t->launchWarning((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 102: _t->launchWarningNoVolume(); break;
        case 103: _t->launchWarningNoRule(); break;
        case 104: _t->launchWarningTooManyRules(); break;
        case 105: _t->changeBackgroundColor((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 106: _t->segmentateOnOff(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFile* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 107)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 107;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 107)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 107;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
