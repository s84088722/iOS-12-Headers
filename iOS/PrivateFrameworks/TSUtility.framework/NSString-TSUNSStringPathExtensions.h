//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUNSStringPathExtensions)
- (_Bool)tsu_isPathCreatedByAppendingPathComponent:(id)arg1 insideBasePath:(id)arg2;
- (id)tsu_pathToRelativeComponentPath:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (_Bool)tsu_containsSubstring:(id)arg1;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)tsu_range;
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
@end

