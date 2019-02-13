//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>
#import <NeutrinoCore/NSMutableCopying-Protocol.h>

@class NSMutableData;

@interface NUBrushStroke : NSObject <NSCopying, NSMutableCopying>
{
    float _radius;
    float _softness;
    float _opacity;
    long long _pressureMode;
    CDStruct_996ac03c _extent;
    NSMutableData *_data;
}

+ (id)dictionaryFromBrushStroke:(id)arg1;
+ (id)brushStrokeFromDictionary:(id)arg1;
@property(readonly, nonatomic) long long pressureMode; // @synthesize pressureMode=_pressureMode;
@property(readonly, nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) float softness; // @synthesize softness=_softness;
@property(readonly, nonatomic) float radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (void)_updateExtent;
- (id)_createDataFromPointArray:(id)arg1;
- (id)_createPointArrayFromData:(id)arg1;
- (id)description;
- (CDStruct_996ac03c)extent;
- (CDStruct_869f9c67)pointAtIndex:(long long)arg1;
- (long long)pointCount;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)points;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_initializeWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 extent:(CDStruct_996ac03c)arg4 data:(id)arg5 pressureMode:(long long)arg6;
- (id)initWithDictionary:(id)arg1;
- (void)writeToTIFFAtPath:(id)arg1 closed:(_Bool)arg2 pressureMode:(long long)arg3;
- (id)ciImageTiled:(_Bool)arg1 closed:(_Bool)arg2 pressureMode:(long long)arg3;

@end

