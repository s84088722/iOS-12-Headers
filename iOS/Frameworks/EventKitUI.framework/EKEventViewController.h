//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKEventDetailNotesCellDelegate-Protocol.h>
#import <EventKitUI/EKEventTitleDetailItemDelegate-Protocol.h>
#import <EventKitUI/EKUIEventStatusButtonsViewDelegate-Protocol.h>
#import <EventKitUI/UIAlertViewDelegate-Protocol.h>
#import <EventKitUI/UIScrollViewDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKCustomTitleView, EKEvent, EKEventDetailItem, EKEventEditViewController, EKEventTitleDetailItem, EKUIEventStatusButtonsView, EKUIRecurrenceAlertController, NSArray, NSDictionary, NSMutableDictionary, NSString, SingleToolbarItemContainerView, UIScrollView, UITableView, UIView, _UIAccessDeniedView;
@protocol EKEventViewDelegate;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEventDetailNotesCellDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSArray *_items;
    EKEvent *_event;
    _Bool _ignoreDBChanges;
    long long _lastAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
    EKEventDetailItem *_selectedEditItem;
    long long _disclosedTableSection;
    struct _NSRange _disclosedTableRange;
    int _pendingStatus;
    EKEventEditViewController *_activeEventEditor;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    double _statusButtonsViewCachedFontSize;
    long long _lastOrientation;
    EKEventTitleDetailItem *_titleItem;
    EKCustomTitleView *_customTitle;
    EKEventDetailItem *_currentEditItem;
    UITableView *_tableView;
    _Bool _didAppear;
    _Bool _countedAppearance;
    _Bool _autoPop;
    _Bool _showsPreview;
    _Bool _hidePreview;
    _Bool _calendarPreviewIsInlineDayView;
    _Bool _inlineDayViewRespectsSelectedCalendarsFilter;
    _Bool _trustsStatus;
    _Bool _needsReload;
    _Bool _dead;
    _Bool _tableIsBeingEdited;
    NSArray *_currentSections;
    int _scrollToSection;
    UIView *_headerView;
    NSArray *_headerConstraints;
    NSArray *_tableViewTopConstraints;
    UIView *_blankFooterView;
    _Bool _showingBlankFooterView;
    UIViewController *_confirmationAlertPresentationSourceViewController;
    NSMutableDictionary *_cellHeights;
    _Bool _allowsEditing;
    _Bool _viewIsVisible;
    _Bool _ICSPreview;
    _Bool _allowsInviteResponses;
    _Bool _showsAddToCalendarForICSPreview;
    _Bool _showsUpdateCalendarForICSPreview;
    _Bool _showsDeleteForICSPreview;
    _Bool _allowsSubitems;
    _Bool _showsDoneButton;
    _Bool _showsOutOfDateMessage;
    _Bool _showsDelegatorMessage;
    _Bool _showsDelegateMessage;
    _Bool _showsConferenceItem;
    _Bool _minimalMode;
    _Bool _noninteractivePlatterMode;
    _Bool _isLargeDayView;
    int _editorShowTransition;
    int _editorHideTransition;
    id <EKEventViewDelegate> _delegate;
    struct NSDictionary *_context;
    struct UIEdgeInsets _layoutMargins;
}

+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 forceLayout:(_Bool)arg5;
+ (void)setDefaultDatesForEvent:(id)arg1;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) int editorHideTransition; // @synthesize editorHideTransition=_editorHideTransition;
@property(nonatomic) int editorShowTransition; // @synthesize editorShowTransition=_editorShowTransition;
@property(nonatomic) _Bool isLargeDayView; // @synthesize isLargeDayView=_isLargeDayView;
@property(nonatomic) _Bool noninteractivePlatterMode; // @synthesize noninteractivePlatterMode=_noninteractivePlatterMode;
@property(nonatomic) _Bool minimalMode; // @synthesize minimalMode=_minimalMode;
@property(nonatomic) _Bool showsConferenceItem; // @synthesize showsConferenceItem=_showsConferenceItem;
@property(nonatomic) _Bool showsDelegateMessage; // @synthesize showsDelegateMessage=_showsDelegateMessage;
@property(nonatomic) _Bool showsDelegatorMessage; // @synthesize showsDelegatorMessage=_showsDelegatorMessage;
@property(nonatomic) _Bool showsOutOfDateMessage; // @synthesize showsOutOfDateMessage=_showsOutOfDateMessage;
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(nonatomic) _Bool allowsSubitems; // @synthesize allowsSubitems=_allowsSubitems;
@property(nonatomic) _Bool showsDeleteForICSPreview; // @synthesize showsDeleteForICSPreview=_showsDeleteForICSPreview;
@property(nonatomic) _Bool showsUpdateCalendarForICSPreview; // @synthesize showsUpdateCalendarForICSPreview=_showsUpdateCalendarForICSPreview;
@property(nonatomic) _Bool showsAddToCalendarForICSPreview; // @synthesize showsAddToCalendarForICSPreview=_showsAddToCalendarForICSPreview;
@property(nonatomic) _Bool allowsInviteResponses; // @synthesize allowsInviteResponses=_allowsInviteResponses;
@property(nonatomic, getter=isICSPreview) _Bool ICSPreview; // @synthesize ICSPreview=_ICSPreview;
@property _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) __weak id <EKEventViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (void)_performEditKeyCommand;
- (void)_setUpkeyCommands;
- (void)editButtonPressed;
- (_Bool)shouldShowEditButtonInline;
- (void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)detailItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(CDUnknownBlockType)arg3;
- (unsigned long long)_sectionForDetailItem:(id)arg1;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;
- (void)_clearCustomTitle;
- (void)updateTitleWithScrollView:(id)arg1 animation:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_sectionsForTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;
- (double)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2;
- (id)previewActionItems;
- (id)_statusButtonsForOrb:(_Bool)arg1;
- (id)_statusButtons;
- (_Bool)_shouldDisplayStatusButtons;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_deleteSuggestionTapped:(id)arg1;
- (void)_addToCalendarClicked:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_saveStatus:(long long)arg1;
- (void)invokeAction:(long long)arg1;
- (void)_prepareEventForEdit;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)_dismissEditor:(_Bool)arg1 deleted:(_Bool)arg2;
- (id)viewControllerForEventItem:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidSave:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)eventDetailItemWantsRefeshForHeightChange;
- (void)_presentDetachSheet;
@property(nonatomic) __weak UIViewController *confirmationAlertPresentationSourceViewController;
- (void)viewLayoutMarginsDidChange;
- (struct CGSize)preferredContentSize;
- (void)_performDelete:(long long)arg1;
- (void)_presentValidationAlert:(id)arg1;
- (_Bool)_performSave:(long long)arg1 animated:(_Bool)arg2;
- (void)_saveStatus:(long long)arg1 span:(long long)arg2;
- (id)_viewControllerForEditorPresentation;
- (void)presentEditorAnimated:(_Bool)arg1;
- (void)setActiveEventEditor:(id)arg1;
- (id)activeEventEditor;
- (void)editEvent;
- (void)doneButtonPressed;
- (void)_updateStatusButtonsActions;
- (id)_statusButtonsContainerView;
- (id)_statusButtonsView;
- (void)_setUpForEvent;
- (id)_footerLabelContainingText:(id)arg1;
- (void)_updateHeaderAndFooterIfNeeded;
- (_Bool)_shouldDisplayDelegateOrOutOfDateMessage;
- (_Bool)_isDisplayingInvitation;
- (_Bool)_isDisplayingDeletableEvent;
- (_Bool)_isDisplayingSuggestion;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (id)items;
- (void)_keyboardWasHidden:(id)arg1;
- (void)_keyboardWasShown:(id)arg1;
- (void)_localeChanged;
- (void)_storeChanged:(id)arg1;
- (void)_refreshEventAndReload;
- (void)_setObservesKeyboardNotifications:(_Bool)arg1;
@property(readonly, nonatomic) UIScrollView *eventDetailsScrollView;
- (double)topInset;
- (void)setTopInset:(double)arg1;
- (id)accessDeniedView;
@property(nonatomic) int scrollToSection;
- (void)completeWithAction:(long long)arg1;
@property(nonatomic) _Bool inlineDayViewRespectsSelectedCalendarsFilter;
@property(nonatomic) _Bool calendarPreviewIsInlineDayView;
@property(nonatomic) _Bool hideCalendarPreview;
@property(nonatomic) _Bool allowsCalendarPreview;
- (_Bool)_backingEventAllowsEditing;
@property(retain, nonatomic) EKEvent *event;
- (void)_reloadIfNeeded;
- (void)setNeedsReload;
- (void)reloadedData;
- (void)openAttendeesDetailItem;
- (void)_pop;
- (_Bool)_shouldPopSelf;
- (struct CGSize)_idealSize;
- (_Bool)_shouldShowEditButton;
- (void)_updateNavBarAnimated:(_Bool)arg1;
- (_Bool)_shouldDisplayDoneButton;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (void)_updateTableContentForSizeCategoryChange:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_navigationBarShouldBeHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)viewTitle;
- (id)_indexPathForAttendeesDetailItem;
- (id)_indexPathForSection:(int)arg1;
- (void)loadView;
- (id)tableView;
- (void)dealloc;
- (void)_teardownTableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContext:(struct NSDictionary *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

