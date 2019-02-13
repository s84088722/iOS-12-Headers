//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest
{
    CDUnknownBlockType _notificationMarkedReadProgressBlock;
    NSArray *_notificationIDs;
    NSMutableDictionary *_notificationIDsByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *notificationIDsByRequestID; // @synthesize notificationIDsByRequestID=_notificationIDsByRequestID;
@property(retain, nonatomic) NSArray *notificationIDs; // @synthesize notificationIDs=_notificationIDs;
@property(copy, nonatomic) CDUnknownBlockType notificationMarkedReadProgressBlock; // @synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock;
- (void).cxx_destruct;
- (id)zoneIDsToLock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;

@end

