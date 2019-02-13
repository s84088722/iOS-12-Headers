//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAudioDeviceInfoMutating-Protocol.h>

@class AFAudioDeviceInfo, NSString, NSUUID;

@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating>
{
    AFAudioDeviceInfo *_baseModel;
    NSString *_route;
    _Bool _isRemoteDevice;
    NSUUID *_deviceUID;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRoute:1;
        unsigned int hasIsRemoteDevice:1;
        unsigned int hasDeviceUID:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setDeviceUID:(id)arg1;
- (void)setIsRemoteDevice:(_Bool)arg1;
- (void)setRoute:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

