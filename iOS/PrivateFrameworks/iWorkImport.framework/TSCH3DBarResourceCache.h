//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DBarResourceCache : NSObject
{
    TSUNoCopyDictionary *mCache;
}

+ (id)barWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)instance;
+ (id)_singletonAlloc;
- (id)p_barWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

