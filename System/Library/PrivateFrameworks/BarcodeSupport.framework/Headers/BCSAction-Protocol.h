//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BarcodeSupport/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol BCSActionDelegate;

@protocol BCSAction <NSObject>
@property(readonly, copy, nonatomic) NSArray *actionPickerItems;
@property(readonly, nonatomic) _Bool canSkipUnlock;
@property(readonly, copy, nonatomic) NSString *localizedActionDescription;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
@property(readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property(readonly, nonatomic) NSURL *urlThatCanBeOpened;
@property(nonatomic) __weak id <BCSActionDelegate> delegate;
- (void)showActionPicker;
- (void)performAction;
- (void)performDefaultAction;
@end
