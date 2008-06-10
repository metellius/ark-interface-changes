#ifndef ARKVIEWER_H
#define ARKVIEWER_H

/*
 * ark: A program for modifying archives via a GUI.
 *
 * Copyright (C) 2004-2007, Henrique Pinto <henrique.pinto@kdemail.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#include <KDialog>
#include <KParts/ReadOnlyPart>

class ArkViewer : public KDialog
{
	Q_OBJECT

	public:
		explicit ArkViewer( QWidget* parent = 0 );
		~ArkViewer();

		bool view( const QString& filename );

	protected slots:
		void slotFinished();

	private:
		KParts::ReadOnlyPart *m_part;
		QWidget *m_widget;
};

#endif // ARKVIEWER_H

