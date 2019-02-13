//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob
{
    NSArray *_mediaSources;
    NSString *_albumCloudGUID;
    NSString *_albumName;
    NSString *_commentText;
    NSArray *_recipientsInfo;
}

+ (void)publishMediaFromSources:(id)arg1 toNewSharedAlbumWithName:(id)arg2 withCommentText:(id)arg3 recipients:(id)arg4;
+ (void)publishMediaFromSources:(id)arg1 toSharedAlbum:(id)arg2 withCommentText:(id)arg3;
@property(retain, nonatomic) NSArray *recipientsInfo; // @synthesize recipientsInfo=_recipientsInfo;
@property(retain, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *albumCloudGUID; // @synthesize albumCloudGUID=_albumCloudGUID;
@property(retain, nonatomic) NSArray *mediaSources; // @synthesize mediaSources=_mediaSources;
- (void)dealloc;
- (void)executeDaemonOperation;
- (id)description;
- (_Bool)shouldArchiveXPCToDisk;
- (long long)daemonOperation;
- (void)run;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)addInfosForRecipients:(id)arg1;

@end

