//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest
{
    unsigned int _interfaceID;
    long long _controlCommand;
}

@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
@property(readonly, nonatomic) long long controlCommand; // @synthesize controlCommand=_controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(long long)arg2;

@end

