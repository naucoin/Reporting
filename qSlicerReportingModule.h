/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qSlicerReportingModule_h
#define __qSlicerReportingModule_h

// SlicerQt includes
#include "qSlicerLoadableModule.h"

#include "qSlicerReportingModuleExport.h"

class qSlicerReportingModulePrivate;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_REPORTING_EXPORT qSlicerReportingModule :
  public qSlicerLoadableModule
{
  Q_OBJECT
  Q_INTERFACES(qSlicerLoadableModule);

public:

  typedef qSlicerLoadableModule Superclass;
  explicit qSlicerReportingModule(QObject *parent=0);
  virtual ~qSlicerReportingModule();

  qSlicerGetTitleMacro(QTMODULE_TITLE);
  
  /// Help to use the module
  virtual QString helpText()const;

  /// Return acknowledgements
  virtual QString acknowledgementText()const;
  
  /// Return a custom icon for the module
  virtual QIcon icon()const;

  /// Return the categories
  virtual QStringList categories() const;

  /// Return the dependencies
  virtual QStringList dependencies() const;

  /// Return the contributors
  virtual QStringList contributors() const;

protected:

  /// Initialize the module. Register the volumes reader/writer
  virtual void setup();

  /// Create and return the widget representation associated to this module
  virtual qSlicerAbstractModuleRepresentation * createWidgetRepresentation();

  /// Create and return the logic associated to this module
  virtual vtkMRMLAbstractLogic* createLogic();

protected:
  QScopedPointer<qSlicerReportingModulePrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerReportingModule);
  Q_DISABLE_COPY(qSlicerReportingModule);

};

#endif
