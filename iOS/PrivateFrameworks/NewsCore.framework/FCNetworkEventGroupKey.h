//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying>
{
    long long _eventType;
    unsigned long long _sessionID;
    NSString *_respondingPOP;
}

@property(retain, nonatomic) NSString *respondingPOP; // @synthesize respondingPOP=_respondingPOP;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

