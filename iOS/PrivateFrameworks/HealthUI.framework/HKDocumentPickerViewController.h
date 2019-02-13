//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthUI/HKCDADocumentTableViewCellDelegate-Protocol.h>
#import <HealthUI/HKDataMetadataViewControllerDelegate-Protocol.h>

@class HKHealthStore, HKSource, HKTitledIconHeaderView, NSMutableArray, NSMutableSet, NSSet, NSString;
@protocol HKDocumentPickerViewControllerDelegate;

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate, HKDataMetadataViewControllerDelegate>
{
    NSMutableArray *_samplesList;
    long long _presentationStyle;
    HKHealthStore *_healthStore;
    _Bool _hasPendingDocumentFetch;
    HKSource *_source;
    _Bool _showCheckboxes;
    HKTitledIconHeaderView *_tableHeaderView;
    NSSet *_allSamples;
    NSMutableSet *_enabledSamples;
    id <HKDocumentPickerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HKDocumentPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *enabledSamples; // @synthesize enabledSamples=_enabledSamples;
@property(readonly, nonatomic) NSSet *allSamples; // @synthesize allSamples=_allSamples;
@property(retain, nonatomic) HKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKHealthStore *healthStore;
- (void)cdaDocumentTableViewCellDidChangeValue:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)dataMetadataViewControllerForSample:(id)arg1;
- (void)pushDetailForDocumentSample:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_enableDocumentSample:(id)arg1 enabled:(_Bool)arg2;
- (void)configureHeaderView:(id)arg1;
- (id)_tableHeaderView;
- (void)_finishWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_cancel:(id)arg1;
- (_Bool)_needsSampleRequestDescription;
- (_Bool)_isPrompting;
- (void)_addCancelAndDoneButtons;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAuthorizations:(id)arg1;
- (id)initWithDocuments:(id)arg1 presentationStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

