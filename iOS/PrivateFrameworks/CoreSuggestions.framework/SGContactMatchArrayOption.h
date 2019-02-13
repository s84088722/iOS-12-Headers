//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, SGRecordId;

@interface SGContactMatchArrayOption : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _type;
    NSArray *_matches;
    SGRecordId *_recordId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToContactMatchArrayOption:(id)arg1;
- (id)initWithRecordId:(id)arg1;
- (id)initWithMatches:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

