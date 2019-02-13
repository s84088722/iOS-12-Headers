//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/BBSectionIdentity-Protocol.h>

@class BBActionResponse, BBBulletinRequestParameters, BBSectionInfo, BBSectionParameters, BBThumbnailSizeConstraints, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@protocol BBDataProvider <BBSectionIdentity>
- (NSArray *)sortDescriptors;

@optional
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(NSSet *)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (NSString *)displayNameForFilterID:(NSString *)arg1;
- (_Bool)syncsBulletinDismissal;
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1;
- (void)receiveMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (_Bool)migrateSectionInfo:(BBSectionInfo *)arg1 oldSectionInfo:(BBSectionInfo *)arg2;
- (NSString *)displayNameForSubsectionID:(NSString *)arg1;
- (NSArray *)defaultSubsectionInfos;
- (void)dataProviderDidLoad;
- (float)attachmentAspectRatioForRecordID:(NSString *)arg1;
- (NSData *)attachmentPNGDataForRecordID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2;
- (NSData *)primaryAttachmentDataForRecordID:(NSString *)arg1;
- (void)getAspectRatioForAttachmentUUID:(NSUUID *)arg1 recordID:(NSString *)arg2 withCompletionHandler:(void (^)(float))arg3;
- (void)getPNGDataForAttachmentUUID:(NSUUID *)arg1 recordID:(NSString *)arg2 sizeConstraints:(BBThumbnailSizeConstraints *)arg3 withCompletionHandler:(void (^)(NSData *))arg4;
- (void)getDataForAttachmentUUID:(NSUUID *)arg1 recordID:(NSString *)arg2 withCompletionHandler:(void (^)(NSData *))arg3;
- (BBSectionParameters *)sectionParameters;
- (id)clearedInfoForBulletins:(NSSet *)arg1;
- (id)clearedInfoForClearingBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 lastClearedInfo:(id)arg3;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
- (id)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2;
- (NSSet *)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2;
@end

