//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/AVTAvatarStore-Protocol.h>

@class AVTAvatarRecord, NSString;

@protocol AVTAvatarStoreInternal <AVTAvatarStore>
+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;
- (void)duplicateAvatar:(AVTAvatarRecord *)arg1 completionBlock:(void (^)(_Bool, id <AVTAvatarRecord>, NSError *))arg2;
- (void)deleteAvatarWithIdentifier:(NSString *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)saveAvatar:(AVTAvatarRecord *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2 thumbnailGenerationCompletionBlock:(void (^)(_Bool, NSError *))arg3;
@end

