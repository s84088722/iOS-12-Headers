//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSSceneClientSettingsDiff, NSString;

@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent
{
    NSString *_identifier;
    FBSSceneClientSettingsDiff *_clientSettings;
}

@property(retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff; // @synthesize clientSettingsDiff=_clientSettings;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

