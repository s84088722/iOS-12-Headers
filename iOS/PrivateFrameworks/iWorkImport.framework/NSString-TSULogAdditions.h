//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSULogAdditions)
+ (id)tsu_unRedactedStringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_redactedStringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)tsu_initUnRedactedWithFormat:(id)arg1;
- (id)tsu_initRedactedWithFormat:(id)arg1;
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
@end

