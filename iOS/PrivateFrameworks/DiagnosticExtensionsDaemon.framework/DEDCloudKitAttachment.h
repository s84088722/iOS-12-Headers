//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface DEDCloudKitAttachment : NSObject
{
    NSURL *_url;
    NSNumber *_fileSize;
}

@property(retain) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

