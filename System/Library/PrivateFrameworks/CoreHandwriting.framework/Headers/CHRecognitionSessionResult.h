//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>

@class CHStrokeGroupingResult, NSArray, NSDictionary, NSString;
@protocol CHStrokeProviderVersion;

@interface CHRecognitionSessionResult : NSObject <NSCopying>
{
    long long __transcriptionCapability;
    id <CHStrokeProviderVersion> _strokeProviderVersion;
    NSArray *_locales;
    NSArray *_preferredLocales;
    CHStrokeGroupingResult *_strokeGroupingResult;
    NSDictionary *__recognitionResultsByGroupID;
    CDStruct_a0ca6847 _generationDuration;
}

@property(readonly, copy, nonatomic) NSDictionary *_recognitionResultsByGroupID; // @synthesize _recognitionResultsByGroupID=__recognitionResultsByGroupID;
@property(readonly, nonatomic) CDStruct_a0ca6847 generationDuration; // @synthesize generationDuration=_generationDuration;
@property(readonly, retain, nonatomic) CHStrokeGroupingResult *strokeGroupingResult; // @synthesize strokeGroupingResult=_strokeGroupingResult;
@property(readonly, copy, nonatomic) NSArray *preferredLocales; // @synthesize preferredLocales=_preferredLocales;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, retain, nonatomic) id <CHStrokeProviderVersion> strokeProviderVersion; // @synthesize strokeProviderVersion=_strokeProviderVersion;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)arg1;
- (id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(CDUnknownBlockType)arg2;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;
@property(readonly, nonatomic) NSString *allResultsDebugDescription;
@property(readonly, nonatomic) NSString *highConfidenceDebugDescription;
@property(readonly, nonatomic) long long _transcriptionCapability;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStrokeProviderVersion:(id)arg1 locales:(id)arg2 preferredLocales:(id)arg3 strokeGroupingResult:(id)arg4 recognitionResults:(id)arg5 generationDuration:(CDStruct_a0ca6847)arg6;
- (id)init;

@end
