//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding>
{
    NSString *_statusText;
    NSArray *_imageData;
    NSArray *_imageAssetURLs;
    NSString *_maskedApplicationID;
    NSString *_inReplyToStatusID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *inReplyToStatusID; // @synthesize inReplyToStatusID=_inReplyToStatusID;
@property(retain, nonatomic) NSString *maskedApplicationID; // @synthesize maskedApplicationID=_maskedApplicationID;
@property(retain, nonatomic) NSArray *imageAssetURLs; // @synthesize imageAssetURLs=_imageAssetURLs;
@property(retain, nonatomic) NSArray *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
- (void).cxx_destruct;
- (void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

