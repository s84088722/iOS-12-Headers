//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "EKStyleProvider-Protocol.h"
#import "ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses-Protocol.h"
#import "PopoverContentView-Protocol.h"

@class CalendarModel, NSString, UINavigationController;

@interface CalendarsViewController : UIViewController <EKStyleProvider, PopoverContentView, ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses>
{
    CDUnknownBlockType _doneBlock;
    CalendarModel *_model;
    UINavigationController *_embeddedNavigationController;
}

@property(retain, nonatomic) UINavigationController *embeddedNavigationController; // @synthesize embeddedNavigationController=_embeddedNavigationController;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
- (void).cxx_destruct;
- (_Bool)isImmuneToCustomAdaptation;
- (_Bool)canDismiss;
- (id)navigationBarColor;
- (id)backgroundColorOpaque;
- (id)backgroundColor;
- (_Bool)prefersForcedModalShowViewController;
- (void)calendarChooserDidFinish:(id)arg1;
- (id)refreshCalendarsButtonPressed;
- (void)_saveFilterAndNotify;
- (void)calendarChooserSelectionDidChange:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

