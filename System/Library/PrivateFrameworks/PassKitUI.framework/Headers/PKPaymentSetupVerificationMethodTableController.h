//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PKActivationMethodTableViewCell, PKPaymentVerificationController;

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    PKActivationMethodTableViewCell *_sizingCell;
    PKPaymentVerificationController *_verificationController;
    NSArray *_verificationChannels;
    unsigned long long _selectedIndex;
}

@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *verificationChannels; // @synthesize verificationChannels=_verificationChannels;
@property(readonly, nonatomic) PKPaymentVerificationController *verificationController; // @synthesize verificationController=_verificationController;
- (void).cxx_destruct;
- (id)newVerificationRequest;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_detailTextLabelForChannel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithVerificationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
