//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNPrimitiveUserDefaults-Protocol.h>

@class NSString;

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>
{
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

- (void)setupAutosync;
- (_Bool)synchronize;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (_Bool)primitiveBoolValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (void)dealloc;
- (struct __CFString *)CFApplicationID;
- (id)initWithApplicationID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

