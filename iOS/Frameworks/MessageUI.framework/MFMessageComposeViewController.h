//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class MSMessage, NSArray, NSString;
@protocol MFMessageComposeViewControllerDelegate;

@interface MFMessageComposeViewController : UINavigationController
{
    id <MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
    NSString *_subject;
    MSMessage *_message;
    unsigned long long _currentAttachedVideoCount;
    unsigned long long _currentAttachedAudioCount;
    unsigned long long _currentAttachedImageCount;
    NSArray *_UTITypes;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSArray *_contentURLs;
    NSArray *_attachments;
}

+ (_Bool)isiMessageEnabled;
+ (_Bool)isMMSEnabled;
+ (void)initialize;
+ (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (id)_chatKitBundle;
+ (void)_preloadDependencies;
+ (_Bool)canSendText;
+ (void)_startListeningForAvailabilityNotifications;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_updateServiceAvailability;
+ (_Bool)isSupportedAttachmentUTI:(id)arg1;
+ (_Bool)canSendAttachments;
+ (_Bool)canSendSubject;
+ (_Bool)_canSendText;
+ (void)_setupAccountMonitor;
@property(readonly, copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void)setContentURLs:(id)arg1;
- (id)contentURLs;
- (void)setContentText:(id)arg1;
- (id)contentText;
- (void)setCloudPhotoIDs:(id)arg1;
- (id)cloudPhotoIDs;
- (void)setPhotoIDs:(id)arg1;
- (id)photoIDs;
- (void)setUTITypes:(id)arg1;
- (id)UTITypes;
@property(nonatomic) unsigned long long currentAttachedImageCount; // @synthesize currentAttachedImageCount=_currentAttachedImageCount;
@property(nonatomic) unsigned long long currentAttachedAudioCount; // @synthesize currentAttachedAudioCount=_currentAttachedAudioCount;
@property(nonatomic) unsigned long long currentAttachedVideoCount; // @synthesize currentAttachedVideoCount=_currentAttachedVideoCount;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) id <MFMessageComposeViewControllerDelegate> messageComposeDelegate; // @synthesize messageComposeDelegate=_messageComposeDelegate;
- (void)_setCanEditRecipients:(_Bool)arg1;
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)dealloc;
- (void)disableUserAttachments;
- (void)_updateAttachmentCountForAttachmentURL:(id)arg1;
@property(copy, nonatomic) MSMessage *message; // @synthesize message=_message;
- (_Bool)addRichLinkData:(id)arg1 withWebpageURL:(id)arg2;
- (_Bool)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2;
- (_Bool)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3;
- (_Bool)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2;
- (_Bool)_isImageMIMEType:(id)arg1;
- (_Bool)_isAudioMIMEType:(id)arg1;
- (_Bool)_isVideoMIMEType:(id)arg1;
- (id)_contentTypeForMIMEType:(id)arg1;
- (id)_MIMETypeForURL:(id)arg1;
- (id)mutableAttachmentURLs;
- (id)attachmentURLs;
- (_Bool)canAddAttachmentURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

