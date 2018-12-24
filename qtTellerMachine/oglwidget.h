#ifndef OGLWIDGET_H
#define OGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <gl/GLU.h>
#include <gl/GL.h>

class OGLWidget : public QOpenGLWidget
{
public:
	OGLWidget(QWidget *parent = 0);
	~OGLWidget();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
	void tick();
};

#endif // OGLWIDGET_H