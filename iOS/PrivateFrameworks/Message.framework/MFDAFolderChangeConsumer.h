//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/DAFolderChangeConsumer-Protocol.h>

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer>
{
    MFConditionLock *_conditionLock;
    MFDAFolderChangeResult *_result;
}

- (id)waitForResult;
- (void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3;
- (void)dealloc;
- (id)init;

@end

