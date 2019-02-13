//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPAuxiliaryControlsRecording-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RAPAuxiliaryControlsRecording : NSObject <RAPAuxiliaryControlsRecording>
{
    _Bool _hasOriginatingAuxiliaryControlIndex;
    NSArray *_auxiliaryControls;
    unsigned long long _originatingAuxiliaryControlIndex;
}

@property(readonly, nonatomic) _Bool hasOriginatingAuxiliaryControlIndex; // @synthesize hasOriginatingAuxiliaryControlIndex=_hasOriginatingAuxiliaryControlIndex;
@property(readonly, nonatomic) unsigned long long originatingAuxiliaryControlIndex; // @synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex;
@property(readonly, nonatomic) NSArray *auxiliaryControls; // @synthesize auxiliaryControls=_auxiliaryControls;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithControlsGeo:(id)arg1 originatingIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

