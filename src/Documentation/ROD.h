#ifndef ROD_H
#define ROD_H

#include <QListWidget>
#include <QFont>

#include <string>
#include <map>
#include <vector>

#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/foreach.hpp>

#include <vtkSmartPointer.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkDistanceWidget.h>
#include <vtkDistanceRepresentation.h>
#include <vtkAngleWidget.h>
#include <vtkAngleRepresentation.h>
#include <vtkCaptionWidget.h>
#include <vtkCaptionRepresentation.h>
#include <vtkCaptionActor2D.h>
#include <vtkTextActor.h>
#include <vtkTextProperty.h>

using boost::property_tree::ptree;

class ROD {
public:
	/**
	 * Constructor
	 * @param	name		ROD name
	 * @param	origin		Origin of the plane
	 * @param	point1		Position of the point defining the first axis of the plane
	 * @param	point2		Position of the point defining the second axis of the plane
	 * @param	slice		Slice position in terms of data extent
	 * @param	enabled		Font for enabled list elements
	 * @param	disabled	Font for disabled list elements
	 */
	ROD(const std::string name, const double* origin, const double* point1, const double* point2, const double slice, const QFont enabled, const QFont disabled);

	/**
	 * Destructor
	 */
	~ROD();

	/**
	 * Get ROD name
	 * @return	ROD name
	 */
	std::string getName() const;

	/**
	 * Get origin of the plane
	 * @return	Origin of the plane
	 */
	double* getOrigin() const;

	/**
	 * Get position of the point defining the first axis of the plane
	 * @return	Position of the point defining the first axis of the plane
	 */
	double* getPoint1() const;

	/**
	 * Get position of the point defining the second axis of the plane
	 * @return	Position of the point defining the second axis of the plane
	 */
	double* getPoint2() const;

	/**
	 * Get slice position in terms of data extent
	 * @return	Slice position in terms of data extent
	 */
	double getSlicePosition() const;

	/**
	 * Add new rule to measure
	 * @param	item		Rule item in UI
	 * @param	interactor	Render window interactor where will be placed
	 */
	void addRule(QListWidgetItem* item, vtkSmartPointer<vtkRenderWindowInteractor> interactor);

	/**
	 * Delete selected rule
	 * @param	item	Rule item in UI
	 */
	void deleteRule(QListWidgetItem* item);

	/**
	 * Enable or disable selected rule
	 * @param	item	Rule item in UI
	 */
	void enableDisableRule(QListWidgetItem* item);

	/**
	 * Enable selected rule
	 * @param	item	Rule item in UI
	 */
	void enableRule(QListWidgetItem* item);

	/**
	 * Disable selected rule
	 * @param	item	Rule item in UI
	 */
	void disableRule(QListWidgetItem* item);

	/**
	 * Hide all rules
	 */
	void hideAllRules();

	/**
	 * Show all rules
	 */
	void showAllRules();

	/**
	 * Delete all rules
	 */
	void clearAllRules();

	/**
	 * Add new protractor to measure
	 * @param	item		Rule item in UI
	 * @param	interactor	Render window interactor where will be placed
	 */
	void addProtractor(QListWidgetItem* item, vtkSmartPointer<vtkRenderWindowInteractor> interactor);

	/**
	 * Delete selected protractor
	 * @param	item	Protractor item in UI
	 */
	void deleteProtractor(QListWidgetItem* item);

	/**
	 * Enable or disable selected protractor
	 * @param	item	Protractor item in UI
	 */
	void enableDisableProtractor(QListWidgetItem* item);

	/**
	 * Enable selected protractor
	 * @param	item	Protractor item in UI
	 */
	void enableProtractor(QListWidgetItem* item);

	/**
	 * Disable selected protractor
	 * @param	item	Protractor item in UI
	 */
	void disableProtractor(QListWidgetItem* item);

	/**
	 * Hide all protractors
	 */
	void hideAllProtractors();

	/**
	 * Show all protractors
	 */
	void showAllProtractors();

	/**
	 * Delete all protractors
	 */
	void clearAllProtractors();

	/**
	 * Add new annotation
	 * @param	item		Rule item in UI
	 * @param	text		Annotation text
	 * @param	interactor	Render window interactor where will be placed
	 */
	void addAnnotation(QListWidgetItem* item, std::string text, vtkSmartPointer<vtkRenderWindowInteractor> interactor);

	/**
	* Delete selected annotation
	* @param	item	Annotation item in UI
	*/
	void deleteAnnotation(QListWidgetItem* item);

	/**
	* Enable or disable selected annotation
	* @param	item	Annotation item in UI
	*/
	void enableDisableAnnotation(QListWidgetItem* item);

	/**
	* Enable selected annotation
	* @param	item	Protractor item in UI
	*/
	void enableAnnotation(QListWidgetItem* item);

	/**
	* Disable selected annotation
	* @param	item	Annotation item in UI
	*/
	void disableAnnotation(QListWidgetItem* item);

	/**
	* Hide all annotations
	*/
	void hideAllAnnotations();

	/**
	* Show all annotations
	*/
	void showAllAnnotations();

	/**
	 * Delete all annotations
	 */
	void clearAllAnnotations();

	/**
	 * Hide all ROD elements
	 */
	void hideAll();

	/**
	 * Show all ROD elements
	 */
	void showAll();

	/**
	 * Compare if the input plane is the same as the ROD's one
	 * @param	origin		Origin of the plane
	 * @param	point1		Position of the point defining the first axis of the plane
	 * @param	point2		Position of the point defining the second axis of the plane
	 * @param	slice		Slice position in terms of data extent
	 * @return	The input plane is the same as the ROD's one
	 */
	bool samePlane(const double* origin, const double* point1, const double* point2, const double slice);

	/**
	 * Write ROMD in an XML file
	 * @param	filename	Path to the output XML file
	 */
	void write(std::string &filename);

private:
	std::string name; /**< ROD name */
	double* origin; /**< Origin of the plane */
	double* point1; /**< Position of the point defining the first axis of the plane */
	double* point2; /**< Position of the point defining the second axis of the plane */
	double slice; /**< Slice position in terms of data extent */
	std::map<QListWidgetItem*, vtkSmartPointer<vtkDistanceWidget> > rules; /**< Rules container */
	std::map<QListWidgetItem*, vtkSmartPointer<vtkAngleWidget> > protractors; /**< Rules container */
	std::map<QListWidgetItem*, vtkSmartPointer<vtkCaptionWidget> > annotations; /**< Annotations container */

	QFont enabled; /**< Font for list enabled elements */
	QFont disabled; /**< Font for list disabled elements */
};

#endif