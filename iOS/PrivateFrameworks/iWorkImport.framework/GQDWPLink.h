//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDWPInlineList.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLink : GQDWPInlineList
{
    GQDSStyle *mCharStyle;
    struct __CFString *mHref;
}

- (struct __CFString *)href;
- (id)characterStyle;
- (void)dealloc;
- (int)readStyleFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

