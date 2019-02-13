//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoEditTaskManager : NSObject
{
    NSMutableDictionary *_pendingRequestsByAsset;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)createEditableCopyForReadOnlyPhoto:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)pendingSaveRequestForPhoto:(id)arg1;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)clearEditsForPhoto:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)saveEditsForPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)saveEditsForPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)init;

@end

