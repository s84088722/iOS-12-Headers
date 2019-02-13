//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface ICDelegationPlayInfoRequest : NSObject <NSCopying>
{
    NSString *_playerDeviceGUID;
    NSArray *_tokenRequests;
    NSData *_playerAnisetteMID;
    NSString *_playerUserAgent;
}

@property(copy, nonatomic) NSArray *tokenRequests; // @synthesize tokenRequests=_tokenRequests;
@property(copy, nonatomic) NSString *playerUserAgent; // @synthesize playerUserAgent=_playerUserAgent;
@property(copy, nonatomic) NSString *playerDeviceGUID; // @synthesize playerDeviceGUID=_playerDeviceGUID;
@property(copy, nonatomic) NSData *playerAnisetteMID; // @synthesize playerAnisetteMID=_playerAnisetteMID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;

@end

