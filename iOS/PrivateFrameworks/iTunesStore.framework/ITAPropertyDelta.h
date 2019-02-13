//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ITAPropertyDelta : NSObject
{
    _Bool _accountProperty;
    NSString *_accountIdentifier;
    NSString *_key;
    id _oldValue;
    id _value;
}

+ (id)propertyDeltasForAccount:(id)arg1 oldAccount:(id)arg2;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) id oldValue; // @synthesize oldValue=_oldValue;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic, getter=isAccountProperty) _Bool accountProperty; // @synthesize accountProperty=_accountProperty;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (id)_initWithAccountIdentifier:(id)arg1 key:(id)arg2 value:(id)arg3 oldValue:(id)arg4 isAccountProperty:(_Bool)arg5;

@end

