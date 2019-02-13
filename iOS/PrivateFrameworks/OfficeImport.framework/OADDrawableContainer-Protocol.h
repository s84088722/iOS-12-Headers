//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/NSObject-Protocol.h>

@class NSArray, OADDrawable;

@protocol OADDrawableContainer <NSObject>
- (void)removeChild:(OADDrawable *)arg1;
- (void)replaceChild:(OADDrawable *)arg1 with:(OADDrawable *)arg2;
- (NSArray *)children;
- (OADDrawable *)childAtIndex:(unsigned long long)arg1;
- (void)addChildren:(NSArray *)arg1;
- (void)addChild:(OADDrawable *)arg1;
- (unsigned long long)childCount;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (struct CGRect)logicalBounds;
@end

