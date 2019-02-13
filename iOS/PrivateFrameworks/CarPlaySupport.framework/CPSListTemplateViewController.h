//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

#import <CarPlaySupport/CPListTemplateProviding-Protocol.h>
#import <CarPlaySupport/UITableViewDelegate-Protocol.h>

@class CPListTemplate, CPSSectionedDataSource, NSIndexPath, NSString, NSTimer, UIActivityIndicatorView;

@interface CPSListTemplateViewController : CPSBaseTemplateViewController <UITableViewDelegate, CPListTemplateProviding>
{
    CPSSectionedDataSource *_dataSource;
    NSIndexPath *_currentSpinningIndexPath;
    NSIndexPath *_nextSpinningIndexPath;
    UIActivityIndicatorView *_spinnerView;
    unsigned long long _spinnerState;
    NSTimer *_spinnerStartTimer;
    NSTimer *_spinnerTimeoutTimer;
}

@property(retain, nonatomic) NSTimer *spinnerTimeoutTimer; // @synthesize spinnerTimeoutTimer=_spinnerTimeoutTimer;
@property(retain, nonatomic) NSTimer *spinnerStartTimer; // @synthesize spinnerStartTimer=_spinnerStartTimer;
@property(nonatomic) unsigned long long spinnerState; // @synthesize spinnerState=_spinnerState;
@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(copy, nonatomic) NSIndexPath *nextSpinningIndexPath; // @synthesize nextSpinningIndexPath=_nextSpinningIndexPath;
@property(copy, nonatomic) NSIndexPath *currentSpinningIndexPath; // @synthesize currentSpinningIndexPath=_currentSpinningIndexPath;
@property(retain, nonatomic) CPSSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)updateSections:(id)arg1;
- (void)setButton:(id)arg1 hidden:(_Bool)arg2;
- (void)setButton:(id)arg1 enabled:(_Bool)arg2;
- (void)_cellSelectionCompleted:(id)arg1;
- (void)_cancelScheduledLoadingSpinnerForIndexPath:(id)arg1;
- (void)_timeoutSpinnerFired:(id)arg1 indexPath:(id)arg2;
- (void)_startSpinnerTimerFired:(id)arg1 indexPath:(id)arg2;
- (void)_scheduleLoadingSpinnerForIndexPath:(id)arg1;
- (void)_addSpinnerToIndexPath:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) CPListTemplate *listTemplate;
- (id)initWithListTemplate:(id)arg1 templateDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

