//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData, SFKeychainDataAttributes;

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding>
{
    id _keychainDataInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SFKeychainDataAttributes *attributes;
@property(readonly) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

