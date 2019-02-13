//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKJSManagedArray, JSManagedValue, NSTimer;

@interface IKJSTimerContext : NSObject
{
    _Bool _isRepeating;
    NSTimer *_timer;
    id _ownerObject;
    JSManagedValue *_managedCallback;
    IKJSManagedArray *_managedArgs;
}

@property(readonly, nonatomic) _Bool isRepeating; // @synthesize isRepeating=_isRepeating;
@property(readonly, retain, nonatomic) IKJSManagedArray *managedArgs; // @synthesize managedArgs=_managedArgs;
@property(readonly, retain, nonatomic) JSManagedValue *managedCallback; // @synthesize managedCallback=_managedCallback;
@property(readonly, retain, nonatomic) id ownerObject; // @synthesize ownerObject=_ownerObject;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeManagedReferences;
- (id)description;
- (id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(_Bool)arg3 ownerObject:(id)arg4 timer:(id)arg5;

@end

