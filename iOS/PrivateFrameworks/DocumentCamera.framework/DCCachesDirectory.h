//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCCachesDirectory : NSObject
{
    NSURL *_cachesDirectoryURL;
}

+ (id)sharedCachesDirectory;
@property(readonly, nonatomic) NSURL *cachesDirectoryURL; // @synthesize cachesDirectoryURL=_cachesDirectoryURL;
- (void).cxx_destruct;
- (id)init;

@end

