//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class MSMessage, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol CKSMSCompose <NSObject>
+ (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (_Bool)acceptsMIMEType:(NSString *)arg1;
- (void)setContentText:(NSArray *)arg1;
- (void)setCloudPhotoIDs:(NSArray *)arg1;
- (void)setPhotoIDs:(NSArray *)arg1;
- (void)setContentURLs:(NSArray *)arg1;
- (void)setUTIs:(NSArray *)arg1;
- (void)setUICustomizationData:(NSData *)arg1;
- (void)setGameCenterPickedHandles:(NSArray *)arg1 playerNames:(NSArray *)arg2;
- (void)setGameCenterModeWithPickerBlock:(void (^)(void))arg1;
- (void)forceMMS;
- (void)forceCancelComposition;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(_Bool)arg1;
- (void)setPendingAddresses:(NSArray *)arg1;
- (_Bool)insertMessage:(MSMessage *)arg1;
- (_Bool)insertRichLinkWithURL:(NSURL *)arg1 andData:(NSData *)arg2;
- (_Bool)insertFilename:(NSString *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3 options:(NSDictionary *)arg4;
- (_Bool)insertData:(NSData *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3;
- (_Bool)insertAttachmentWithURL:(NSURL *)arg1 andDescription:(NSString *)arg2;
@end

