//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface WristDetect_3_0Input : NSObject <MLFeatureProvider>
{
    struct __CVBuffer *_input__0;
}

@property(nonatomic) struct __CVBuffer *input__0; // @synthesize input__0=_input__0;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput__0:(struct __CVBuffer *)arg1;

@end

