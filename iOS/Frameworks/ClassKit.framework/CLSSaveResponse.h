//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassKit/CLSSaveResponse-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CLSSaveResponse : NSObject <CLSSaveResponse>
{
    NSMutableDictionary *_objectsByID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (oneway void)clientRemote_saveDone:(id)arg1;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (id)savedObjectWithObjectID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

