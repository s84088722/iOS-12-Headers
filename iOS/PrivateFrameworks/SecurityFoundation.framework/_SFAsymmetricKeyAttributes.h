//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/_SFKeyAttributes-Protocol.h>

@class NSString, _SFKeySpecifier;

@interface _SFAsymmetricKeyAttributes : NSObject <_SFKeyAttributes>
{
    _SFKeySpecifier *_asymmetricKeySpecifier;
    struct NSString *_asymmetricKeyDomain;
}

@property(readonly, copy, nonatomic) NSString *keyDomain; // @synthesize keyDomain=_asymmetricKeyDomain;
@property(readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier; // @synthesize keySpecifier=_asymmetricKeySpecifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecifier:(id)arg1 domain:(struct NSString *)arg2;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

