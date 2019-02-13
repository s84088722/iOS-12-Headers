//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveSupport/_PASZonedObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSObject;
@protocol NSCopying><NSSecureCoding;

@interface PPScoredItem : _PASZonedObject <NSCopying, NSSecureCoding>
{
    NSObject<NSCopying><NSSecureCoding> *_item;
    double _score;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToScoredItem:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 score:(double)arg2;

@end

