//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class FPSandboxingURLWrapper, NSData, NSString, NSURL;

@interface QLThumbnailItem : NSObject <NSSecureCoding>
{
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    NSURL *_url;
    FPSandboxingURLWrapper *_urlWrapperForExtension;
    NSData *_data;
    NSString *_contentType;
    unsigned long long _downloadStatus;
    NSString *_dataContentType;
    NSString *_computedContentType;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(copy) NSString *computedContentType; // @synthesize computedContentType=_computedContentType;
@property(readonly, nonatomic) NSString *dataContentType; // @synthesize dataContentType=_dataContentType;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) FPSandboxingURLWrapper *urlWrapperForExtension; // @synthesize urlWrapperForExtension=_urlWrapperForExtension;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)needsDownload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_issueFileExtensionForURL:(id)arg1;
- (void)consumeFileExtension;
- (void)issueFileExtension;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

