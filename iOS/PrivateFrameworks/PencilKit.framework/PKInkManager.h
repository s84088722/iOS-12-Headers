//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PKInkManager : NSObject
{
    NSMutableDictionary *_inks;
}

+ (void)clearCachedManager;
+ (id)defaultInkManager;
@property(readonly, nonatomic) NSMutableDictionary *inks; // @synthesize inks=_inks;
- (void).cxx_destruct;
- (id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;
- (id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2;
- (id)init;

@end

