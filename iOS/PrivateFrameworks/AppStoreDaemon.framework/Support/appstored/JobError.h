//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface JobError : NSObject <NSCopying>
{
    NSMutableOrderedSet *_downloadIdentifiers;
    NSString *_downloadKind;
    NSString *_downloadTitle;
    NSMutableOrderedSet *_jobIdentifiers;
    id _notification;
}

@property(copy, nonatomic) NSString *downloadTitle; // @synthesize downloadTitle=_downloadTitle;
@property(copy, nonatomic) NSString *downloadKind; // @synthesize downloadKind=_downloadKind;
@property(readonly, nonatomic) NSOrderedSet *jobIdentifiers; // @synthesize jobIdentifiers=_jobIdentifiers;
@property(retain, nonatomic, getter=_notification, setter=_setNotification:) id _notification; // @synthesize _notification;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)representsJobWithIdentifier:(long long)arg1;
- (_Bool)representsDownloadWithIdentifier:(long long)arg1;
- (void)removeJobIdentifier:(long long)arg1;
- (void)removeDownloadIdentifier:(long long)arg1;
- (void)performActionForResponseFlags:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isValidError) _Bool validError;
@property(readonly, nonatomic) NSOrderedSet *downloadIdentifiers;
- (id)copyUserNotification;
- (_Bool)canCoalesceWithError:(id)arg1;
- (void)addJobIdentifiers:(id)arg1;
- (void)addJobIdentifier:(long long)arg1;
- (void)addDownloadIdentifiers:(id)arg1;
- (void)addDownloadIdentifier:(long long)arg1;

@end

