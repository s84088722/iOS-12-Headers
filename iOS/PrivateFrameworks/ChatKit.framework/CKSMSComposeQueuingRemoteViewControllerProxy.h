//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CKSMSCompose;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject
{
    NSMutableArray *_queuedInvocations;
    id <CKSMSCompose> _serviceViewControllerProxy;
}

@property(retain, nonatomic) id <CKSMSCompose> serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;
@property(retain, nonatomic) NSMutableArray *queuedInvocations; // @synthesize queuedInvocations=_queuedInvocations;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end
