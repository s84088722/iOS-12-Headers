/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PPTopicExtractionPlugin.framework/PPTopicExtractionPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PPTopicExtractionPlugin/PPTopicExtractionPlugin-Structs.h>
#import <libobjc.A.dylib/FIAPPlugin.h>

@class NSString, PPMTopicDonation, PPMTopicItemDonation, PPMTopicUniqueItems, PPMTopicDonationError;

@interface PPTopicExtractionPlugin : NSObject <FIAPPlugin> {

	PPMTopicDonation* topicDonationTracker;
	PPMTopicItemDonation* topicItemDonationTracker;
	PPMTopicUniqueItems* topicUniqueItemsTracker;
	PPMTopicDonationError* errorTracker;
	unsigned long long blacklistHash;
	BOOL started;
	BOOL donated;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)yesWithProbability:(double)arg1 ;
+(id)quantizeAndFilterEntities:(id)arg1 withLimit:(int)arg2 ;
+(id)quantizeTopics:(id)arg1 ;
+(void)_registerDataCollection;
+(void)_registerDailyMetricsLogging;
+(void)_registerContextBlacklistCheck;
+(void)prewarmContextService;
+(id)sharedInstance;
-(id)setup;
-(void)logDonationForTopics:(id)arg1 isReader:(BOOL)arg2 bundleId:(id)arg3 ;
-(void)logDonationErrorForReason:(PPMTopicDonationErrorReason_)arg1 ;
-(unsigned long long)hashForBlacklist:(id)arg1 ;
-(void)checkBlacklist;
-(BOOL)logUniqueTopicsWithError:(id*)arg1 ;
-(BOOL)logPerplexityWithError:(id*)arg1 ;
-(BOOL)logDailyMetricsWithError:(id*)arg1 ;
-(BOOL)runPortraitAnalyticsDataCollectionWithError:(id*)arg1 ;
-(void)extractAndDonateTopicsForText:(id)arg1 isReader:(BOOL)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 weight:(double)arg6 ;
-(BOOL)interestedInSearchableItem:(id)arg1 ;
-(id)processSearchableItem:(id)arg1 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
@end

