//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXTypingPrediction : NSObject
{
    NSString *_fullWord;
    NSString *_textToInsert;
    NSString *_prefix;
    double _probability;
    struct _NSRange _rangeToReplace;
}

@property(nonatomic) double probability; // @synthesize probability=_probability;
@property(nonatomic) struct _NSRange rangeToReplace; // @synthesize rangeToReplace=_rangeToReplace;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) NSString *textToInsert; // @synthesize textToInsert=_textToInsert;
@property(copy, nonatomic) NSString *fullWord; // @synthesize fullWord=_fullWord;
- (void).cxx_destruct;
- (id)description;

@end

