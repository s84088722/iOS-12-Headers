//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformOp-Protocol.h>

@class MDLAnimatedVector3, NSString;

@interface MDLTransformRotateOp : NSObject <MDLTransformOp>
{
    _Bool _inverse;
    NSString *_name;
    MDLAnimatedVector3 *_animatedValue;
    unsigned long long _order;
}

@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(nonatomic) _Bool inverse; // @synthesize inverse=_inverse;
@property(readonly, nonatomic) MDLAnimatedVector3 *animatedValue; // @synthesize animatedValue=_animatedValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
-     // Error parsing type: {?=[4]}24@0:8d16, name: double4x4AtTime:
-     // Error parsing type: {?=[4]}24@0:8d16, name: float4x4AtTime:
- (_Bool)IsInverseOp;
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 order:(unsigned long long)arg3 data:(id)arg4;

@end

