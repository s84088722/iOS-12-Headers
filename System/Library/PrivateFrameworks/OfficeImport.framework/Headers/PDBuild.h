//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDBuild : NSObject
{
    _Bool mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)setIsAnimateBackground:(_Bool)arg1;
- (_Bool)isAnimateBackground;
- (void)dealloc;
- (id)init;

@end
