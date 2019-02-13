//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class BLBookInstallInfo, BLFairplayDecryptSession, NSData, NSError, NSString, SSOperationProgress;

__attribute__((visibility("hidden")))
@interface BLFairPlayDecryptFileOperation : NSOperation
{
    _Bool _success;
    NSError *_error;
    BLFairplayDecryptSession *_fairplayDecryptSession;
    NSData *_dpInfo;
    double _lastSnapshotTime;
    NSString *_path;
    SSOperationProgress *_progress;
    BLBookInstallInfo *_installInfo;
}

@property(nonatomic) __weak BLBookInstallInfo *installInfo; // @synthesize installInfo=_installInfo;
@property(retain, nonatomic) SSOperationProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) double lastSnapshotTime; // @synthesize lastSnapshotTime=_lastSnapshotTime;
@property(retain, nonatomic) NSData *dpInfo; // @synthesize dpInfo=_dpInfo;
@property(retain, nonatomic) BLFairplayDecryptSession *fairplayDecryptSession; // @synthesize fairplayDecryptSession=_fairplayDecryptSession;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)_updateProgressWithByteCount:(long long)arg1;
- (void)_initializeProgressWithFileHandle:(id)arg1;
- (_Bool)_decryptWithSession:(id)arg1 error:(id *)arg2;
- (void)main;
- (id)initWithPath:(id)arg1 dpInfo:(id)arg2 installInfo:(id)arg3;

@end

