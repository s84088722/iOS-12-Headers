//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DPyramidBlurFBOResource, TSUPair;

__attribute__((visibility("hidden")))
@interface TSCH3DPyramidLevelResources : NSObject
{
    TSUPair *mResourcePair;
}

+ (id)resourcesWithFBOSize:(tvec2_3b141483)arg1;
@property(readonly, nonatomic) tvec2_3b141483 size;
@property(readonly, nonatomic) TSCH3DPyramidBlurFBOResource *temporaryResource;
@property(readonly, nonatomic) TSCH3DPyramidBlurFBOResource *finalResource;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithFBOSize:(tvec2_3b141483)arg1;

@end

