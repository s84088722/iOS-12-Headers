//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface PSUIFindMyiPhoneController : NSObject
{
    NSObject<OS_dispatch_semaphore> *_stateChangeSem;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enablePhoneLocatorWithCompletion:(CDUnknownBlockType)arg1;
- (id)preferredFindMyiPhoneAccount;
- (void)locatorStateDidChange:(id)arg1;
- (_Bool)isFindMyiPhoneEnabled;
- (_Bool)isFindMyiPhoneProvisioned;
- (void)dealloc;
- (id)init;

@end

