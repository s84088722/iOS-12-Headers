//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXUIFlyingBadge : NSObject
{
    unsigned long long _mainBadge;
    NSArray *_badges;
}

@property(readonly, copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
@property(readonly, nonatomic) unsigned long long mainBadge; // @synthesize mainBadge=_mainBadge;
- (void).cxx_destruct;
- (id)initWithBadges:(id)arg1 mainBadge:(unsigned long long)arg2;

@end

