//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SFSearchResult_SpotlightExtras.h>

@class SFSearchSuggestion;

@interface SPSuggestionSearchResult : SFSearchResult_SpotlightExtras
{
    SFSearchSuggestion *_suggestion;
}

+ (id)_richDisplayTextForSuggestion:(id)arg1 forQuery:(id)arg2;
@property(readonly, nonatomic) SFSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (id)initWithSearchSuggestion:(id)arg1 forQuery:(id)arg2;

@end
