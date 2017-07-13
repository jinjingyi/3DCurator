#include "slicePlane.h"

SlicePlane::SlicePlane() {
	plane = vtkSmartPointer<ImagePlaneWidget>::New();
	centers[0] = centers[1] = centers[2] = 0.0;
}

void SlicePlane::setSagital() {
	// Set plane in YZ axes (but we have to turn it around)
	plane->SetPlaneOrientationToXAxes();
	plane->SetSlicePosition(centers[0]);

	// plane points
	double p1[3] = {
		plane->GetPoint1()[0],
		plane->GetPoint1()[1],
		plane->GetPoint1()[2]
	};
	double p2[3] = {
		plane->GetPoint2()[0],
		plane->GetPoint2()[1],
		plane->GetPoint2()[2]
	};

	// Turn 180� over X axis
	plane->SetPoint1(p1[0], p2[1], p2[2]);
	plane->SetPoint2(p1[0], p1[1], p1[2]);
	plane->SetOrigin(p1[0], p1[1], p2[2]);

	plane->UpdatePlacement();
}

void SlicePlane::setCoronal() {
	// Set plane in YZ axes (but we have to turn it around and set to XZ axis)
	plane->SetPlaneOrientationToXAxes();
	plane->SetSlicePosition(centers[0]);

	// plane points
	double p1[3] = {
		plane->GetPoint1()[0],
		plane->GetPoint1()[1],
		plane->GetPoint1()[2]
	};
	double p2[3] = {
		plane->GetPoint2()[0],
		plane->GetPoint2()[1],
		plane->GetPoint2()[2]
	};

	// Turn 180� over X axis and 90� over Z axis
	plane->SetPoint1(p2[1], p1[0], p2[2]);
	plane->SetPoint2(p1[1], p1[0], p1[2]);
	plane->SetOrigin(p1[1], p1[0], p2[2]);

	plane->UpdatePlacement();
}

void SlicePlane::setAxial() {
	// Set plane in XY axes
	plane->SetPlaneOrientationToZAxes();
	plane->SetSlicePosition(centers[2]);
}

void SlicePlane::setOrigin(const double x, const double y, const double z) {
	plane->SetOrigin(x, y, z);
	
	centers[0] = x;
	centers[1] = y;
	centers[2] = z;
}

void SlicePlane::show(const bool onOff) {
	plane->SetTextureVisibility(onOff);
}

void SlicePlane::enable(const bool onOff) {
	plane->SetEnabled(onOff);
}

void SlicePlane::setInputData(vtkSmartPointer<vtkImageData> imageData) {
	plane->SetInputData(imageData);
}

void SlicePlane::setViewer(vtkSmartPointer<vtkImageViewer2> viewer) {
	plane->SetViewer(viewer);
}

vtkSmartPointer<ImagePlaneWidget> SlicePlane::getPlane() const {
	return plane;
}