//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FMAttributedStringRendererOptions : NSObject
{
    long long _lineBreakMode;
    double _lineFragmentPadding;
    unsigned long long _maximumNumberOfLines;
    double _hyphenationFactor;
    NSArray *_exclusionPaths;
}

@property(readonly, copy, nonatomic) NSArray *exclusionPaths; // @synthesize exclusionPaths=_exclusionPaths;
@property(readonly, nonatomic) double hyphenationFactor; // @synthesize hyphenationFactor=_hyphenationFactor;
@property(readonly, nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(readonly, nonatomic) double lineFragmentPadding; // @synthesize lineFragmentPadding=_lineFragmentPadding;
@property(readonly, nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
- (void).cxx_destruct;
- (id)initWithLineBreakMode:(long long)arg1 lineFragmentPadding:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3 hyphenationFactor:(double)arg4 exclusionPaths:(id)arg5;
- (id)init;

@end

