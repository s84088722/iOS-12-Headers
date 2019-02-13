//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNAvatarCardActionListController-Protocol.h>
#import <ContactsUI/CNUINavigationListViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIUserActionListConsumer-Protocol.h>

@class NSArray, NSDictionary, NSString, UIViewController;
@protocol CNContactActionsControllerDelegate, CNUIUserActionListDataSource;

@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer>
{
    NSArray *_actionTypes;
    id <CNUIUserActionListDataSource> _actionsDataSource;
    NSDictionary *_modelsByActionTypes;
    NSArray *_modelCancelables;
    UIViewController *_viewController;
    id <CNContactActionsControllerDelegate> _delegate;
    long long _actionsOrder;
}

+ (id)descriptorForRequiredKeysForActionTypes:(id)arg1;
+ (id)supportedActionTypes;
@property(nonatomic) long long actionsOrder; // @synthesize actionsOrder=_actionsOrder;
@property(nonatomic) __weak id <CNContactActionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSArray *modelCancelables; // @synthesize modelCancelables=_modelCancelables;
@property(copy, nonatomic) NSDictionary *modelsByActionTypes; // @synthesize modelsByActionTypes=_modelsByActionTypes;
@property(retain, nonatomic) id <CNUIUserActionListDataSource> actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
@property(copy, nonatomic) NSArray *actionTypes; // @synthesize actionTypes=_actionTypes;
- (void).cxx_destruct;
- (void)prepareNavigationListItems;
- (id)navigationListItemForUserActionType:(id)arg1;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (id)imageForActionType:(id)arg1;
- (id)modelForActionType:(id)arg1;
- (void)cancelModels;
- (void)retrieveModels;
- (id)displayedController;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 actionTypes:(id)arg2;
- (id)initWithContact:(id)arg1 actionTypes:(id)arg2;
@property(nonatomic) _Bool actionsReversed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

