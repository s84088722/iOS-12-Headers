//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PBSlideObjAndMasterPair : NSObject
{
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;
- (void)dealloc;
- (int)masterId;
- (id)slide;
- (void)setSlide:(id)arg1 masterId:(int)arg2;

@end

