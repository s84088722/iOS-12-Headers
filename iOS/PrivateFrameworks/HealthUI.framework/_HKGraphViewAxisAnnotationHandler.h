//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesAxisAnnotation-Protocol.h>

@class NSMapTable, NSString;

@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation>
{
    _Bool _clearedPreviousAnnotations;
    NSMapTable *_seriesToAnnotations;
}

@property(nonatomic) _Bool clearedPreviousAnnotations; // @synthesize clearedPreviousAnnotations=_clearedPreviousAnnotations;
@property(retain, nonatomic) NSMapTable *seriesToAnnotations; // @synthesize seriesToAnnotations=_seriesToAnnotations;
- (void).cxx_destruct;
- (void)clearAxisAnnotations;
- (_Bool)applyAnnotationForSeries:(id)arg1 commonAxes:(id)arg2;
- (void)addAxisAnnotation:(id)arg1 forSeries:(id)arg2 textColor:(id)arg3 modelCoordinate:(id)arg4;
- (void)startAnnotationSequence;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

