//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMMsgHandler : HMFObject
{
    NSObject<OS_dispatch_queue> *_receiverQueue;
    CDUnknownBlockType _messageHandler;
    NSNumber *_token;
}

+ (id)msgHandler:(CDUnknownBlockType)arg1 token:(id)arg2 receiverQueue:(id)arg3;
@property(retain, nonatomic) NSNumber *token; // @synthesize token=_token;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
- (void).cxx_destruct;
- (id)initWithMessageHandler:(CDUnknownBlockType)arg1 token:(id)arg2 receiverQueue:(id)arg3;

@end

