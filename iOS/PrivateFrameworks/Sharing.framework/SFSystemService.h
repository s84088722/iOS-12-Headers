//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFService;
@protocol OS_dispatch_queue;

@interface SFSystemService : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFService *_sfService;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)invalidate;
- (void)activate;
- (id)description;
- (id)init;

@end

