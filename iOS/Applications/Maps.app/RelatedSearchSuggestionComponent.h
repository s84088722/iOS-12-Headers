//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORelatedSearchSuggestion, NSString, RelatedSearchSuggestionSubstitute;

__attribute__((visibility("hidden")))
@interface RelatedSearchSuggestionComponent : NSObject
{
    NSString *_displayText;
    RelatedSearchSuggestionSubstitute *_substitute;
}

@property(retain, nonatomic) RelatedSearchSuggestionSubstitute *substitute; // @synthesize substitute=_substitute;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *suggestion;
@property(readonly, nonatomic) _Bool isRelatedSearchSuggestion;
- (id)initWithDisplayText:(id)arg1 substitute:(id)arg2;

@end

