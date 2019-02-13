//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ROCKit/ROCKImpersonator.h>

#import <ROCKit/ROCKMemoizable-Protocol.h>

@class NSMapTable, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface ROCKImmutableProxy : ROCKImpersonator <ROCKMemoizable>
{
    NSSet *_protocols;
    NSMapTable *_properties;
    NSObject<OS_xpc_object> *_xpcDictionary;
}

+ (id)immutableProxyWithInstance:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcDictionary; // @synthesize xpcDictionary=_xpcDictionary;
@property(retain, nonatomic) NSMapTable *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSSet *protocols; // @synthesize protocols=_protocols;
- (void).cxx_destruct;
- (id)initWithProtocols:(id)arg1 properties:(id)arg2;
- (void)_forwardStackInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *memoizableSerializerQueue;
@property(readonly) Class superclass;

@end

