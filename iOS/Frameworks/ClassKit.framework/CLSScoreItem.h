//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassKit/CLSActivityItem.h>

@interface CLSScoreItem : CLSActivityItem
{
    double _score;
    double _maxScore;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double maxScore;
@property(nonatomic) double score;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 score:(double)arg3 maxScore:(double)arg4;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)_init;

@end
