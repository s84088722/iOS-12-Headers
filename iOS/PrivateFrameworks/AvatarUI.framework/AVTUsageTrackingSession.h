//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTUsageTrackingSession-Protocol.h>

@class AVTAvatarConfiguration, AVTUsageTrackingRecordTimedEvent, NSDate;
@protocol AVTAggDClient, AVTAvatarConfigurationMetric, AVTAvatarStoreInternal, AVTDifferentialPrivacyRecorder, AVTUILogger, OS_dispatch_queue;

@interface AVTUsageTrackingSession : NSObject <AVTUsageTrackingSession>
{
    _Bool _expandedMode;
    _Bool _recordedVideo;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <AVTUILogger> _logger;
    id <AVTAggDClient> _ntsAggDClient;
    id <AVTDifferentialPrivacyRecorder> _ntsDPRecorder;
    id <AVTAvatarConfigurationMetric> _metric;
    CDUnknownBlockType _recordTransformer;
    AVTAvatarConfiguration *_defaultConfiguration;
    CDUnknownBlockType _timeProvider;
    NSDate *_editorEnterDate;
    AVTUsageTrackingRecordTimedEvent *_faceTrackingEvent;
    id <AVTAvatarStoreInternal> _avatarStore;
    CDUnknownBlockType _puppetIndexProvider;
}

+ (CDUnknownBlockType)puppetIndexProviderForStore:(id)arg1 callbackQueue:(id)arg2 logger:(id)arg3;
+ (CDUnknownBlockType)likenessComparator;
+ (CDUnknownBlockType)configurationDistanceClassifierWithMetric:(id)arg1;
+ (id)makeDPKey:(id)arg1;
+ (id)makeKeyAggDCompliant:(id)arg1;
+ (id)makeAggDDistributionKey:(id)arg1;
+ (id)makeAggDScalarKey:(id)arg1;
+ (id)dpKeyBasePrefix;
+ (id)aggDKeyBasePrefix;
+ (id)colorPresetDescriptionForAvatarConfiguration:(id)arg1;
+ (void)getPresetDescription:(out id *)arg1 usedCategoriesDescription:(out id *)arg2 forAvatarConfiguration:(id)arg3 defaultConfiguration:(id)arg4;
+ (id)keyContentForAvatarRecord:(id)arg1 puppetIndexProvider:(CDUnknownBlockType)arg2 action:(id)arg3 includingPuppetIndex:(_Bool)arg4;
+ (CDUnknownBlockType)defaultTimeProvider;
+ (CDUnknownBlockType)defaultRecordTransformerForCoreModel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType puppetIndexProvider; // @synthesize puppetIndexProvider=_puppetIndexProvider;
@property(retain, nonatomic) id <AVTAvatarStoreInternal> avatarStore; // @synthesize avatarStore=_avatarStore;
@property(retain, nonatomic) AVTUsageTrackingRecordTimedEvent *faceTrackingEvent; // @synthesize faceTrackingEvent=_faceTrackingEvent;
@property(retain, nonatomic) NSDate *editorEnterDate; // @synthesize editorEnterDate=_editorEnterDate;
@property(nonatomic) _Bool recordedVideo; // @synthesize recordedVideo=_recordedVideo;
@property(nonatomic) _Bool expandedMode; // @synthesize expandedMode=_expandedMode;
@property(readonly, copy, nonatomic) CDUnknownBlockType timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) AVTAvatarConfiguration *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType recordTransformer; // @synthesize recordTransformer=_recordTransformer;
@property(readonly, nonatomic) id <AVTAvatarConfigurationMetric> metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) id <AVTDifferentialPrivacyRecorder> ntsDPRecorder; // @synthesize ntsDPRecorder=_ntsDPRecorder;
@property(readonly, nonatomic) id <AVTAggDClient> ntsAggDClient; // @synthesize ntsAggDClient=_ntsAggDClient;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)nts_reportExpandedModeWithClient:(id)arg1;
- (void)nts_reportAvatarComplexity:(id)arg1 withClient:(id)arg2;
- (void)nts_reportAvatarLikenessClustersWithClient:(id)arg1;
- (void)nts_reportAvatarDescription:(id)arg1 dpRecorder:(id)arg2;
- (void)nts_reportAvatarCountWithClient:(id)arg1;
- (void)nts_reportFaceTrackingTimeWithEndTime:(id)arg1 client:(id)arg2;
- (void)nts_reportEditorTimeWithExitTime:(id)arg1 client:(id)arg2;
- (void)end;
- (void)beginWithStore:(id)arg1;
- (void)didResumeFaceTracking;
- (void)didPauseFaceTracking;
- (void)didStopFaceTrackingInCarousel;
- (void)didChangeCurrentAvatarInCarousel:(id)arg1;
- (void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1;
- (void)didLeaveEditor;
- (void)didEnterEditor;
- (void)didRecordVideo;
- (void)didShowExpandedMode;
- (void)didDuplicateAvatar:(id)arg1;
- (void)didEditAvatar:(id)arg1;
- (void)didCreateAvatar:(id)arg1;
- (void)didDeleteAvatar:(id)arg1;
- (void)didTriggerHoldPose;
- (void)didSendStickerWithAvatar:(id)arg1;
- (void)didSendImageWithAvatar:(id)arg1;
- (void)didReplayVideo;
- (void)didDiscardVideoWithDuration:(double)arg1;
- (void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2;
- (void)reportAddOneForScalarKey:(id)arg1;
- (void)performClientWork:(CDUnknownBlockType)arg1;
- (id)initWithAggDClient:(id)arg1 dpRecorder:(id)arg2 serialQueueProvider:(CDUnknownBlockType)arg3 recordTransformer:(CDUnknownBlockType)arg4 defaultConfiguration:(id)arg5 timeProvider:(CDUnknownBlockType)arg6 configurationMetric:(id)arg7 logger:(id)arg8;
- (id)initWithSerialQueueProvider:(CDUnknownBlockType)arg1 recordTransformer:(CDUnknownBlockType)arg2 logger:(id)arg3;

@end

