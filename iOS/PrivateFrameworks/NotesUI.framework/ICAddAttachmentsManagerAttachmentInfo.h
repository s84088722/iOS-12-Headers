//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICAttachment, NSAttributedString, NSData, NSDictionary, NSString, NSURL, UIImage;

@interface ICAddAttachmentsManagerAttachmentInfo : NSObject
{
    ICAttachment *_attachment;
    NSString *_title;
    NSURL *_mediaURL;
    NSString *_mediaUTI;
    NSData *_mediaData;
    NSDictionary *_metadata;
    NSString *_mediaFilenameExtension;
    struct UIImage *_image;
    NSAttributedString *_attributedContentText;
    NSDictionary *_webScrapeResults;
}

@property(retain, nonatomic) NSDictionary *webScrapeResults; // @synthesize webScrapeResults=_webScrapeResults;
@property(retain, nonatomic) NSAttributedString *attributedContentText; // @synthesize attributedContentText=_attributedContentText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *mediaFilenameExtension; // @synthesize mediaFilenameExtension=_mediaFilenameExtension;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) NSString *mediaUTI; // @synthesize mediaUTI=_mediaUTI;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)mediaSize;
- (id)initWithFileURL:(id)arg1;

@end

