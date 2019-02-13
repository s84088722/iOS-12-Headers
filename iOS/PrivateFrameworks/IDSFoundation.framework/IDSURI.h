//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDSURI : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_prefixedURI;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *prefixedURI; // @synthesize prefixedURI=_prefixedURI;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToURI:(id)arg1;
@property(readonly, nonatomic) NSString *unprefixedURI;
- (id)initWithUnprefixedURI:(id)arg1;
- (id)initWithPrefixedURI:(id)arg1;

@end

