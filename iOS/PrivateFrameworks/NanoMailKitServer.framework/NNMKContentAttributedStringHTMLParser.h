//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NNMKHTMLParser.h>

@class NSLock, NSMutableAttributedString, NSMutableDictionary;

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser
{
    NSLock *_lock;
    NSMutableAttributedString *_parsedAttributedString;
    unsigned long long _maxLength;
    double _maxImageWidth;
    _Bool *_partiallyParsed;
    NSMutableDictionary *_imageAtachmentsDataByContentId;
}

+ (struct CGSize)_scaledDownSize:(struct CGSize)arg1 maxWidth:(double)arg2;
+ (id)_scaleAndPrepareImageForClient:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (id)trimAttributedString:(id)arg1;
+ (id)adjustedImage:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (id)imageAttachmentAttributedStringWithContentId:(id)arg1 imageSize:(struct CGSize)arg2 mergingAttributes:(id)arg3;
+ (id)attachmentAttributedStringWithContentId:(id)arg1 mergingAttributes:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *imageAtachmentsDataByContentId; // @synthesize imageAtachmentsDataByContentId=_imageAtachmentsDataByContentId;
@property(nonatomic) _Bool *partiallyParsed; // @synthesize partiallyParsed=_partiallyParsed;
@property(nonatomic) double maxImageWidth; // @synthesize maxImageWidth=_maxImageWidth;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSMutableAttributedString *parsedAttributedString; // @synthesize parsedAttributedString=_parsedAttributedString;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (_Bool)_validateURLsAndHTMLTagsInParsedString:(id)arg1 urlsFound:(id *)arg2;
- (void)_addDataDetectionAttributes:(id)arg1;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (_Bool)isElementIgnorable:(id)arg1;
- (_Bool)isErrorTypeBlacklisted:(char *)arg1;
- (_Bool)isElementBlacklisted:(id)arg1 attributeQueryBlock:(CDUnknownBlockType)arg2;
- (id)_parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(_Bool *)arg5 imageAttachmentsLoaded:(id *)arg6 urlsForValidation:(id)arg7 urlsFound:(id *)arg8;
- (id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(_Bool *)arg5 imageAttachmentsLoaded:(id *)arg6 urlsForValidation:(id)arg7;
- (id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(_Bool *)arg5 imageAttachmentsLoaded:(id *)arg6 urlsFound:(id *)arg7;

@end

