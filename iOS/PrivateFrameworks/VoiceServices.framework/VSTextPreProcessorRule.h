//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTextPreProcessorRule : NSObject
{
    NSString *_matchPattern;
    NSString *_replacement;
    _Bool _caseSensitive;
    _Bool _eatPunctuation;
}

- (id)matchedString:(id)arg1 forTokenInRange:(CDStruct_912cb5d2 *)arg2;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

