//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MFFileAttachment : NSObject
{
    int _attachmentType;
    NSString *_attachmentName;
    NSURL *_attachmentContentIDURL;
}

@property(nonatomic) int attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSURL *attachmentContentIDURL; // @synthesize attachmentContentIDURL=_attachmentContentIDURL;
@property(copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

