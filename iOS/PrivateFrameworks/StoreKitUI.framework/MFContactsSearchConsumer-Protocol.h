//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSNumber;

@protocol MFContactsSearchConsumer <NSObject>

@optional
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(NSArray *)arg1 type:(unsigned long long)arg2 taskID:(NSNumber *)arg3;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(NSNumber *)arg1;
- (void)finishedSearchingForCorecipients;
- (void)consumeCorecipientSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
@end

