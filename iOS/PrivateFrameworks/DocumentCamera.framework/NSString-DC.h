//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (DC)
- (unsigned long long)dc_lengthOfLongestLine;
- (struct _NSRange)dc_paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;
- (id)dc_stringByReplacingCharactersInStringMap:(id)arg1;
- (id)dc_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)dc_stringByReplacingNewlineCharactersWithWhiteSpace;
- (id)dc_substringWithRange:(struct _NSRange)arg1;
- (id)dc_substringToIndex:(unsigned long long)arg1;
- (id)dc_substringFromIndex:(unsigned long long)arg1;
- (void)dc_enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dc_enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)dc_numberOfLines;
@property(readonly, nonatomic) NSString *dc_stringReplacingUnsafeHTMLCharacters;
@property(readonly, nonatomic) NSString *dc_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *dc_whitespaceAndNewlineCoalescedString;
@property(readonly, nonatomic) NSString *dc_trimmedString;
@end

