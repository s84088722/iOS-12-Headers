//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSData, NSDate, NSMutableDictionary, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface MRDRemoteControlCommand : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _commandType;
    NSData *_optionsData;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSDate *_dateCreated;
    NSString *_senderAppDisplayID;
    unsigned int _appOptions;
    unsigned long long _senderEntitlements;
    CDUnknownBlockType _completionHandler;
    NSMutableDictionary *_parsedOptionsDict;
    NSData *_cachedProtobufData;
}

@property(readonly, nonatomic) unsigned long long senderEntitlements; // @synthesize senderEntitlements=_senderEntitlements;
@property(readonly, nonatomic) unsigned int appOptions; // @synthesize appOptions=_appOptions;
@property(readonly, nonatomic) NSString *senderAppDisplayID; // @synthesize senderAppDisplayID=_senderAppDisplayID;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) unsigned int commandType; // @synthesize commandType=_commandType;
- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)_optionsDictionary;
- (void)_setCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_completionHandler;
- (id)optionValueForKey:(struct __CFString *)arg1;
@property(readonly, nonatomic, getter=isAVRCPCommand) _Bool avrcpCommand;
@property(readonly, nonatomic) _Bool originatedFromHID;
@property(readonly, nonatomic) _Bool originatedFromAccessory;
@property(readonly, nonatomic) _Bool shouldImplicitlyLaunchApplication;
@property(readonly, nonatomic, getter=isContextSensitive) _Bool contextSensitive;
@property(readonly, nonatomic) NSString *senderID;
@property(readonly, nonatomic) NSString *commandID;
@property(readonly, nonatomic) NSString *remoteControlInterfaceID;
@property(readonly, nonatomic) NSData *optionsData;
@property(readonly, nonatomic, getter=isNavigational) _Bool navigational;
@property(readonly, nonatomic) NSString *contextID;
@property(readonly, nonatomic) NSString *routeUID;
@property(readonly, nonatomic) NSString *destinationAppDisplayID;
@property(readonly, nonatomic) int destinationAppProcessID;
@property(readonly, nonatomic) NSData *protobufData;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithProtocolMessage:(id)arg1;
- (id)initWithCommandType:(unsigned int)arg1 player:(id)arg2 senderAppDisplayID:(id)arg3 optionsData:(id)arg4;

@end

