//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSKSearch)
+ (id)regexStringForSearchString:(id)arg1 options:(unsigned long long)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 searchOptions:(unsigned long long)arg3 range:(struct _NSRange)arg4 replacementCount:(unsigned long long *)arg5;
- (id)stringByCapitalizingToMatchString:(id)arg1 range:(struct _NSRange)arg2 searchOptions:(unsigned long long)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
@end

