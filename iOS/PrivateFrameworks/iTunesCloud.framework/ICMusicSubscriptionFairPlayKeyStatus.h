//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying>
{
    _Bool _hasOnlinePlaybackKeys;
    _Bool _hasOfflinePlaybackKeys;
    unsigned long long _accountUniqueIdentifier;
}

@property(nonatomic) _Bool hasOfflinePlaybackKeys; // @synthesize hasOfflinePlaybackKeys=_hasOfflinePlaybackKeys;
@property(nonatomic) _Bool hasOnlinePlaybackKeys; // @synthesize hasOnlinePlaybackKeys=_hasOnlinePlaybackKeys;
@property(nonatomic) unsigned long long accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

