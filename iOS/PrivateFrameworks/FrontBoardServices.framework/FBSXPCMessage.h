//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface FBSXPCMessage : NSObject
{
    NSObject<OS_xpc_object> *_payload;
}

+ (id)messageWithPacker:(CDUnknownBlockType)arg1;
+ (id)messageWithPayload:(id)arg1;
+ (id)message;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (void)sendReplyMessageWithPacker:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMessagePacker:(CDUnknownBlockType)arg1;
- (id)initWithMessagePayload:(id)arg1;

@end

