//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (RPExtensions)
- (unsigned long long)_srDeviceFreeDiskSpace;
- (_Bool)_srDeviceHasSufficientFreeSpaceForRecording;
- (id)_srGetCreationDateForFile:(id)arg1;
- (void)_srDeleteFilesWithPrefix:(id)arg1;
- (void)_srMoveFileFromURL:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_srRemoveFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_srDeleteFilesOlderThanTimeToLiveInSeconds:(double)arg1;
- (long long)_srDeleteAllTempFiles;
- (long long)_srSizeOfTempDir:(id *)arg1;
- (void)_srSetupTempDirectory;
- (id)_srTempPath;
@end

