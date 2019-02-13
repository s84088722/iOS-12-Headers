//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CATCollectionControllerDelegate-Protocol.h"
#import "LKStudentProviding-Protocol.h"
#import "LUIAuthenticationControllerDelegate-Protocol.h"
#import "LUIFooterButtonNaming-Protocol.h"
#import "LUINavigationViewControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CATCollectionController, LUIPaneHeaderView, LUIPrivacyView, LUIUserGridViewLayout, NSArray, NSMutableArray, NSString, SBUIVibrantButton, UICollectionView, UILabel, UIView;
@protocol LUIProgressAnimationProtocol;

@interface LUIUserGridViewController : UIViewController <CATCollectionControllerDelegate, UIGestureRecognizerDelegate, LUIAuthenticationControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, LKStudentProviding, LUINavigationViewControllerProtocol, LUIFooterButtonNaming>
{
    _Bool _isFirstUpdate;
    NSArray *_students;
    NSString *_footerButtonTitle;
    NSArray *_users;
    NSString *_headerTitle;
    long long _footerButtonImageType;
    CATCollectionController *_collectionController;
    NSMutableArray *_pendingChangeDescriptors;
    NSArray *_arrangedObjects;
    NSString *_headerText;
    LUIPrivacyView *_privacyView;
    LUIPaneHeaderView *_headerView;
    SBUIVibrantButton *_vibrantButton;
    UILabel *_rosterLabel;
    UICollectionView *_collectionView;
    LUIUserGridViewLayout *_collectionViewLayout;
    UIView<LUIProgressAnimationProtocol> *_progressView;
}

@property(retain, nonatomic) UIView<LUIProgressAnimationProtocol> *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) LUIUserGridViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *rosterLabel; // @synthesize rosterLabel=_rosterLabel;
@property(nonatomic) _Bool isFirstUpdate; // @synthesize isFirstUpdate=_isFirstUpdate;
@property(retain, nonatomic) SBUIVibrantButton *vibrantButton; // @synthesize vibrantButton=_vibrantButton;
@property(retain, nonatomic) LUIPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) NSArray *arrangedObjects; // @synthesize arrangedObjects=_arrangedObjects;
@property(retain, nonatomic) NSMutableArray *pendingChangeDescriptors; // @synthesize pendingChangeDescriptors=_pendingChangeDescriptors;
@property(retain, nonatomic) CATCollectionController *collectionController; // @synthesize collectionController=_collectionController;
@property(nonatomic) long long footerButtonImageType; // @synthesize footerButtonImageType=_footerButtonImageType;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSString *footerButtonTitle; // @synthesize footerButtonTitle=_footerButtonTitle;
@property(copy, nonatomic) NSArray *students; // @synthesize students=_students;
- (void).cxx_destruct;
- (void)presentCustomUIInteractionForNativeAuthModeForUser:(id)arg1;
- (void)vibrantButtonPressed:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)controller:(id)arg1 willChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (void)enumerateVisibleCellsUsingBlock:(CDUnknownBlockType)arg1;
- (id)collectionViewConstraints;
- (void)activateLayoutConstraints;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)notIntendedUserButtonPressed:(id)arg1 forViewController:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

