//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQHBulletInfo : NSObject
{
    int mType;
    int mBulletIndent;
    int mTextIndent;
    struct __CFString *mChar;
    _Bool mHasNumber;
    int mNumber;
    int mLabelType;
    GQDSStyle *mStyle;
}

- (id)style;
- (void)setStyle:(id)arg1;
- (int)textIndent;
- (void)setTextIndent:(int)arg1;
- (int)bulletIndent;
- (void)setBulletIndent:(int)arg1;
- (struct __CFString *)createTierStringNumber;
- (struct __CFString *)bulletChar;
- (void)setBulletChar:(struct __CFString *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)labelType;
- (void)setLabelType:(int)arg1;
- (void)setHasNumber:(_Bool)arg1;
- (_Bool)hasNumber;
- (int)number;
- (void)setNumber:(int)arg1;
- (void)dealloc;

@end

