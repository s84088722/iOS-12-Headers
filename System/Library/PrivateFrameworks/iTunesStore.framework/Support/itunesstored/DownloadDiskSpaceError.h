//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DownloadError.h"

#import "NSCopying-Protocol.h"

@interface DownloadDiskSpaceError : DownloadError <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performActionForResponseFlags:(unsigned long long)arg1;
- (id)copyUserNotification;
- (_Bool)canCoalesceWithError:(id)arg1;

@end
