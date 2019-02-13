//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMAttachment : NSObject
{
    NSString *_guid;
    NSString *_path;
    _Bool _isSticker;
    _Bool _isTransferComplete;
    NSDate *_createdDate;
}

- (void).cxx_destruct;
- (id)fileTransfer;
- (_Bool)isTransferComplete;
- (_Bool)isSticker;
- (id)createdDate;
- (id)path;
- (id)guid;
- (id)description;
- (id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(_Bool)arg4 isTransferComplete:(_Bool)arg5;
- (id)initWithPath:(id)arg1 guid:(id)arg2;

@end

