//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKSyncDeletedEventIDs : NSObject
{
    NSMutableDictionary *_deletedEventIDsBySourceDeviceID;
}

- (void).cxx_destruct;
- (void)addDeletedEventID:(id)arg1 forSourceDeviceID:(id)arg2;
- (id)deletedEventIDsForSourceDeviceID:(id)arg1;
- (id)sourceDeviceIDs;
- (unsigned long long)count;
- (id)init;

@end

