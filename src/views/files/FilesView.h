/*
 * FilesView.h
 *
 *  Created on: Apr 18, 2019
 *      Author: petrstepanov
 */

#ifndef SRC_VIEWS_FILES_FILESVIEW_H_
#define SRC_VIEWS_FILES_FILESVIEW_H_

#include "./../AbstractView.h"
#include "FilesPresenter.h"
#include <TGListBox.h>
#include <TGButton.h>
#include <TGNumberEntry.h>

class FilesPresenter;

class FilesView : public AbstractView<FilesPresenter> {
  protected:
    void initUI();
    void connectSlots();

  public:
    FilesView(const TGWindow *w = 0);
    virtual ~FilesView();

    // Override base class virtual functions
    FilesPresenter* instantinatePresenter();

    // Ui elements
    TGListBox* filesListBox;
    TGButton* addFilesButton;
	TGButton* removeFilesButton;
	TGNumberEntry* minChannelNumberEntry;
	TGNumberEntry* maxChannelNumberEntry;
	TGTextButton* importSpectraButton;

    void onFileSelected(Int_t selectedNumber);
};

#endif /* SRC_VIEWS_FILES_FILESVIEW_H_ */
