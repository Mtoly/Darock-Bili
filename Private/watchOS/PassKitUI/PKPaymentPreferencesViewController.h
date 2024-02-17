//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPreferencesViewController_h
#define PKPaymentPreferencesViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKAddressEditorViewControllerDelegate-Protocol.h"
#include "PKPassSnapshotter.h"
#include "PKPaymentPreferenceButtonCell.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, PKContactFormatValidator, PKPaymentPass, UISwitch, UITableView, UITextField;

@interface PKPaymentPreferencesViewController : UIViewController<UITextFieldDelegate, PKAddressEditorViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  PKPassSnapshotter *_passSnapshotter;
  UITextField *_currentEditingField;
  NSIndexPath *_currentEditingIndexPath;
  PKPaymentPreferenceButtonCell *_sizingButtonCell;
  PKPaymentPass *_paymentPassForBillingErrors;
  PKPaymentPass *_currentlySelectedPaymentPass;
  UISwitch *_peerPaymentAccountPaymentSwitch;
  NSArray *_latestPreferences;
  BOOL _keyboardVisible;
  unsigned short _layoutRecursionCounter;
  BOOL _preferredContentSizeUpdateDeferred;
  PKContactFormatValidator *_contactFormatValidator;
  BOOL _isEditingFieldThatWasOriginallyInvalid;
}

@property (copy, nonatomic) id pickedContactPropertyHandler;
@property (copy, nonatomic) id pickedContactHandler;
@property (retain, nonatomic) NSArray *preferences;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)pk_childrenForAppearance;
- (id)initWithStyle:(long long)style preferences:(id)preferences title:(id)title handler:(id /* block */)handler contactFormatValidator:(id)validator;
- (void)dealloc;
- (BOOL)_isViewTranslucent;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (BOOL)_shouldUpdatePreferredContentSize;
- (void)_updatePreferredContentSize;
- (void)_updateNavigationBarButtons;
- (void)_keyboardDidShow:(id)show;
- (void)_keyboardWillHide:(id)hide;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (void)_startInlineEditingForPreference:(id)preference inSection:(unsigned long long)section;
- (void)_cleanupInlineEdits;
- (id)_peerPaymentAccountPaymentSwitch;
- (void)clearErrorsForPreference:(Class)preference;
- (void)setErrors:(id)errors selectedPass:(id)pass animated:(BOOL)animated;
- (void)setErrors:(id)errors otherPass:(id)pass animated:(BOOL)animated;
- (void)setErrors:(id)errors animated:(BOOL)animated;
- (void)applePayCashSwitchValueChanged:(id)changed;
- (id)_cellForPreference:(id)preference row:(unsigned long long)row;
- (id)_cellForNamePreference:(id)preference row:(unsigned long long)row;
- (id)_cellOfClass:(Class)class;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (id)_hyperlinkFooterViewForPreference:(id)preference;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)path;
- (long long)tableView:(id)view editingStyleForRowAtIndexPath:(id)path;
- (id)tableView:(id)view trailingSwipeActionsConfigurationForRowAtIndexPath:(id)path;
- (void)_editPreferenceAtIndexPath:(id)path;
- (void)_showAddressEditorForContact:(id)contact title:(id)title requiredKeys:(id)keys highlightedKeys:(id)keys errors:(id)errors;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)path;
- (void)tableViewDidFinishReload:(id)reload;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textDidChange:(id)change;
- (BOOL)textFieldShouldReturn:(id)return;
- (BOOL)textFieldShouldEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (void)hideTextField:(id)field;
- (void)_checkFormatOfTextField:(id)field forBeginEditing:(BOOL)editing;
- (void)_updateContactAndForceSelection:(BOOL)selection;
- (BOOL)_saveUpdatedContact:(id)contact contactKey:(id)key preference:(id)preference atIndex:(long long)index;
- (void)_savePickedContact:(id)contact inPreference:(id)preference;
- (void)_presentMeCardAlertControllerWithContact:(id)contact contactKey:(id)key handler:(id /* block */)handler;
- (void)_showAddressPickerForPreference:(id)preference;
- (void)_showContactsPickerForPreference:(id)preference;
- (void)_setContactHandlersForPreference:(id)preference;
- (void)addressSearcherViewControllerDidCancel:(id)cancel;
- (void)addressEditorViewController:(id)controller selectedContact:(id)contact;
- (void)addressEditorViewControllerDidCancel:(id)cancel;
- (BOOL)_isPaymentStyle;
- (id)_requiredKeysForPreference:(id)preference contact:(id)contact;
@end

#endif /* PKPaymentPreferencesViewController_h */