//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ROCKit/ROCKImpersonatableProxy.h>

@class NSSet;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface ROCKForwardingProxy : ROCKImpersonatableProxy
{
    id <NSObject> _instance;
    NSSet *_protocols;
}

+ (void)forwardingProxyWithInstance:(id)arg1 options:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)forwardingProxyWithSessionManager:(id)arg1 instance:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSSet *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) id <NSObject> instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithSessionManager:(id)arg1 impersonatableProxyUUID:(id)arg2 instance:(id)arg3 error:(id *)arg4;
- (id)initWithSessionManager:(id)arg1 impersonatableProxyUUID:(id)arg2 instance:(id)arg3 protocols:(id)arg4 error:(id *)arg5;
- (void)_forwardStackInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

