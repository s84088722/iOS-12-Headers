//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FKTextFeature : NSObject
{
    CDUnion_a5814135 _backingIndex;
    struct FKSession *_session;
    int _scale;
    long long _featureID;
    NSArray *_corners;
    long long _type;
    NSString *_text;
    NSArray *_subFeatures;
    struct CGRect _boundingBox;
}

+ (id)featureFromSequenceIndex:(int)arg1 session:(struct FKSession *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 createConcompFeatures:(_Bool)arg5 createDiacriticFeatures:(_Bool)arg6 featureID:(long long *)arg7 scale:(int)arg8;
+ (id)featureFromConcompIndex:(int)arg1 session:(struct FKSession *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 type:(long long)arg5 createDiacriticFeatures:(_Bool)arg6 featureID:(long long *)arg7 scale:(int)arg8;
@property(retain, nonatomic) NSArray *subFeatures; // @synthesize subFeatures=_subFeatures;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSArray *corners; // @synthesize corners=_corners;
@property(readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly, nonatomic) long long featureID; // @synthesize featureID=_featureID;
- (void)dealloc;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect *)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(struct FKSession *)arg5 backingIndex:(CDUnion_a5814135)arg6 scale:(int)arg7;

@end

