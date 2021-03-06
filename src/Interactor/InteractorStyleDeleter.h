#ifndef INTERACTORSTYLEDELETER_H
#define INTERACTORSTYLEDELETER_H

#include <QIcon>
#include <QMessageBox>
#include <QAbstractButton>
#include <QPointer>
#include <QApplication>
#include <QObject>
#include <QCoreApplication>

#include <vtkObjectFactory.h>
#include <vtkSmartPointer.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderWindow.h>
#include <vtkVolumePicker.h>
#include <vtkImageViewer2.h>

#include "Core/Sculpture.h"
#include "Core/SlicePlane.h"
#include "GUI/ProgressDialog.h"
#include "Segmentation/RegionGrowingDeleter.h"

/**
 * @class InteractorStyleDeleter
 * Class that inherits from vtkInteractorStyleTrackballCamera and deletes voxels using a region growing algorithm when a voxel
 * is picked.
 */
class InteractorStyleDeleter : public vtkInteractorStyleTrackballCamera {
public:
    /**
     * Constructor
     */
    static InteractorStyleDeleter* New();

    /**
     * Set ImageViewer2 that will be updated when delete
     * @param	viewer	ImageViewer2 that will be updated when delete
     */
    void SetViewer(const vtkSmartPointer<vtkImageViewer2> &viewer);

    /**
     * Set sculpture where we will delete a region
     * @param	sculpture	Sculpture where we will delete a region
     */
    void SetSculpture(Sculpture* sculpture);

    /**
     * Slice plane that will be updated when delete
     * @param	slicePlane	Slice plane that will be updated when delete
     */
    void SetSlicePlane(SlicePlane* slicePlane);

    /**
     * Left button down event
     */
    void OnLeftButtonDown() override;

private:
    vtkSmartPointer<vtkImageViewer2> viewer; /**< ImageViewer2 that will be updated when delete */
    Sculpture* sculpture; /**< Sculpture where we will delete a region */
    SlicePlane* slicePlane; /**< Slice plane that will be updated when delete */
};

#endif // INTERACTORSTYLEDELETER_H
