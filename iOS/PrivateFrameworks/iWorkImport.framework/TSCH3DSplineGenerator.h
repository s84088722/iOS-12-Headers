//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DSplineGenerator : NSObject
{
    float mDetail;
    float mTension;
    float mAdaptiveThreshold;
    vector_d73af98f mControlPts;
    vector_afed86a5 mSplineExclude;
}

+ (id)generator;
@property(nonatomic) float adaptiveThreshold; // @synthesize adaptiveThreshold=mAdaptiveThreshold;
@property(nonatomic) float tension; // @synthesize tension=mTension;
@property(nonatomic) float detail; // @synthesize detail=mDetail;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)generatePoints:(vector_d73af98f *)arg1;
- (void)calcControlMatrix:(tmat4x4_3074befe *)arg1 pointNum:(long long)arg2;
- (vector_afed86a5 *)splineExclude;
- (vector_d73af98f *)controlPts;
- (_Bool)isClosed;
- (id)init;

@end
