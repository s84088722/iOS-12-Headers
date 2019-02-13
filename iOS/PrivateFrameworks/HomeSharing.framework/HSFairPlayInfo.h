//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface HSFairPlayInfo : NSObject
{
    NSObject<OS_dispatch_queue> *_sapQueue;
}

- (void).cxx_destruct;
- (id)securityInfoForURL:(id)arg1;
- (void)endSecuritySession;
- (id)continueNegotationWithSAPVersion:(unsigned int)arg1 data:(id)arg2 isComplete:(_Bool *)arg3;
- (id)beginNegotiationWithSAPVersion:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *deviceGUID;
- (void)dealloc;
- (id)init;

@end

