//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSCharacterSet, NSString;

@interface TICharacterSetDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSCharacterSet *_characterSet;
    _Bool _inverted;
    long long _baseIdentifier;
    NSString *_charactersAddedToBase;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool inverted; // @synthesize inverted=_inverted;
@property(copy, nonatomic) NSString *charactersAddedToBase; // @synthesize charactersAddedToBase=_charactersAddedToBase;
@property(readonly, nonatomic) long long baseIdentifier; // @synthesize baseIdentifier=_baseIdentifier;
- (void).cxx_destruct;
- (void)clearCachedCharacterSet;
@property(readonly, nonatomic) NSCharacterSet *characterSet;
- (id)newCharacterSetFromDescription;
- (id)invertedSetDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBase:(long long)arg1 additionalCharacters:(id)arg2 inverted:(_Bool)arg3;
- (id)initWithCharactersInString:(id)arg1;
- (id)initWithBaseCharacterSet:(long long)arg1;

@end

