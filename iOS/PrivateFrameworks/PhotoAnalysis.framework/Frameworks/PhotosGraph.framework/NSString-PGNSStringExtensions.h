//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (PGNSStringExtensions)
- (unsigned long long)pg_levenshteinDistanceToString:(id)arg1;
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(unsigned long long)arg2;
- (id)pg_stringByRemovingDates;
- (id)_pg_stringByRemovingRegExPattern:(id)arg1;
- (id)pg_stringByRemovingParentheses;
- (id)pg_stringByRemovingParenthesesAndBrackets;
@end
