//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEHotspotNetwork, NSArray, NSString;

@interface NEHotspotHelperCommand : NSObject
{
    struct __CNPluginCommand *_command;
}

- (id)createUDPSession:(id)arg1;
- (id)createTCPConnection:(id)arg1;
- (id)createResponse:(long long)arg1;
@property(readonly) NSArray *networkList;
@property(readonly) NEHotspotNetwork *network;
@property(readonly) NSString *interfaceName;
@property(readonly) long long commandType;
@property struct __CNPluginCommand *command; // @synthesize command=_command;
- (id)initWithCommand:(struct __CNPluginCommand *)arg1;
- (void)dealloc;
- (id)description;

@end

