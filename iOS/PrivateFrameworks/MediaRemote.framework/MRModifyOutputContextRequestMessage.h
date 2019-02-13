//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage
{
}

+ (id)setDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;
+ (id)removeDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;
+ (id)addDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;
- (unsigned long long)type;
@property(readonly, nonatomic) NSArray *settingOutputDeviceUIDs;
@property(readonly, nonatomic) NSArray *removingOutputDeviceUIDs;
@property(readonly, nonatomic) NSArray *addingOutputDeviceUIDs;
@property(readonly, nonatomic) unsigned int contextType;
- (id)description;
- (id)initWithContextType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4;

@end

