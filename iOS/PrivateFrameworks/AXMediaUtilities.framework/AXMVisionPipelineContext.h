//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMDiagnosticMetricToken, AXMDiagnostics, AXMVisionAnalysisOptions, AXMVisionResult, CIImage, NSArray, NSDictionary, NSError, NSMutableArray, NSNumber, VNImageRequestHandler;
@protocol NSCopying;

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding>
{
    CIImage *_sourceImage;
    NSDictionary *_sourceParameters;
    _Bool _sourceProvidesOwnResults;
    struct __CVBuffer *_nativeFormatPixelBuffer;
    NSMutableArray *_resultHandlers;
    struct CGColorSpace *_extendedSRGBColorSpace;
    struct CGSize _cachedSize;
    AXMDiagnosticMetricToken *_processingDiagnosticToken;
    _Bool _shouldProcessRemotely;
    _Bool _shouldCallCompletionHandlersForEngineBusyError;
    _Bool _shouldCallCompletionHandlersForEmptyResultSet;
    _Bool _evaluationExclusivelyUsesVisionFramework;
    NSError *_error;
    AXMVisionAnalysisOptions *_analysisOptions;
    NSNumber *_appliedImageOrientation;
    id <NSCopying> _cacheKey;
    unsigned long long _sequenceID;
    AXMDiagnostics *_diagnostics;
    NSMutableArray *_features;
    AXMVisionResult *_result;
    VNImageRequestHandler *_visionImageRequestHandler;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithSourceParameters:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) VNImageRequestHandler *visionImageRequestHandler; // @synthesize visionImageRequestHandler=_visionImageRequestHandler;
@property(retain, nonatomic) AXMVisionResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
@property(retain, nonatomic) AXMDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(nonatomic) unsigned long long sequenceID; // @synthesize sequenceID=_sequenceID;
@property(nonatomic) _Bool evaluationExclusivelyUsesVisionFramework; // @synthesize evaluationExclusivelyUsesVisionFramework=_evaluationExclusivelyUsesVisionFramework;
@property(nonatomic) _Bool shouldCallCompletionHandlersForEmptyResultSet; // @synthesize shouldCallCompletionHandlersForEmptyResultSet=_shouldCallCompletionHandlersForEmptyResultSet;
@property(nonatomic) _Bool shouldCallCompletionHandlersForEngineBusyError; // @synthesize shouldCallCompletionHandlersForEngineBusyError=_shouldCallCompletionHandlersForEngineBusyError;
@property(retain, nonatomic) id <NSCopying> cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSNumber *appliedImageOrientation; // @synthesize appliedImageOrientation=_appliedImageOrientation;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool shouldProcessRemotely; // @synthesize shouldProcessRemotely=_shouldProcessRemotely;
- (void).cxx_destruct;
- (void)didFinishProcessingContext;
- (void)willBeginProcessingContext;
- (id)generateImageRepresentation;
- (id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2;
- (void)errorOccurred:(id)arg1;
- (void)appendFeature:(id)arg1;
- (id)analyzeBuffer:(CDUnknownBlockType)arg1;
- (struct __CVBuffer *)nativeFormatPixelBufferRenderIfNeeded:(_Bool)arg1;
- (void)produceImage:(CDUnknownBlockType)arg1;
- (struct CGColorSpace *)imageColorSpace;
- (void)addResultHandlers:(id)arg1;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *resultHandlers;
@property(readonly, nonatomic) _Bool visionImageRequestHandlerIsLoaded;
- (id)visionImageRequestHandlerWithOptions:(id)arg1;
- (void)_discardSourceImageIfPossible;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) _Bool sourceProvidesResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithSourceParameters:(id)arg1 options:(id)arg2;

@end

