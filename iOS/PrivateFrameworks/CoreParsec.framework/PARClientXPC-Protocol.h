//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSError, NSString, NSUUID, PARBag;

@protocol PARClientXPC <NSObject>
- (void)sessionDidChange:(NSUUID *)arg1;
- (void)didDeleteResource:(NSString *)arg1;
- (void)didDownloadResource:(NSString *)arg1;
- (void)bagDidLoad:(PARBag *)arg1 error:(NSError *)arg2;
@end

