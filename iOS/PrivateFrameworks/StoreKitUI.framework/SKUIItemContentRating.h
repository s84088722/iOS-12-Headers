//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SKUIItemContentRating : NSObject
{
    NSArray *_contentRatingAdvisories;
    NSString *_contentRatingName;
    NSString *_contentRatingSystemName;
    NSString *_contentRank;
}

@property(readonly, nonatomic) NSString *contentRank; // @synthesize contentRank=_contentRank;
@property(readonly, nonatomic) NSString *contentRatingSystemName; // @synthesize contentRatingSystemName=_contentRatingSystemName;
@property(readonly, nonatomic) NSArray *contentRatingAdvisories; // @synthesize contentRatingAdvisories=_contentRatingAdvisories;
@property(readonly, nonatomic) NSString *contentRatingName; // @synthesize contentRatingName=_contentRatingName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2;

@end

