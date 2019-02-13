//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface _MFMailComposeAttachmentWrapper : NSObject
{
    NSData *_data;
    NSString *_mimeType;
    NSString *_fileName;
    NSURL *_fileURL;
    NSString *_identifier;
}

+ (id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
+ (id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)fileSize;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)initWithFileURL:(id)arg1 mimeType:(id)arg2;

@end

