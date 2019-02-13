//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSArray, NSString, NSURL, PKLinkedApplication, UIActivityIndicatorView, UIColor;

@interface PKLinkedApplicationActionCell : PKTableViewCell <PKLinkedApplicationObserver>
{
    UIActivityIndicatorView *_activityIndicator;
    UIColor *_textColor;
    UIColor *_disabledTextColor;
    PKLinkedApplication *_linkedApplication;
}

@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
@property(copy, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)linkedApplicationDidChangeState:(id)arg1;
@property(copy, nonatomic) NSURL *appLaunchURL;
@property(copy, nonatomic) NSArray *storeIDs;
- (void)reloadApplicationStateIfNecessary;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

