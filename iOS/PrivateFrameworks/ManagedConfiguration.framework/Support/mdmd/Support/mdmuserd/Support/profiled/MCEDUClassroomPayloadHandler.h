//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCEDUClassroomPayloadHandler : MCNewPayloadHandler
{
}

- (void)unsetAside;
- (void)setAside;
- (_Bool)isInstalled;
- (void)remove;
- (void)_remove;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (_Bool)_installWithError:(id *)arg1;
- (id)_persistentIDForPayloadUUID:(id)arg1 requireIdentity:(_Bool)arg2 error:(id *)arg3;
- (_Bool)setConfiguration:(id)arg1 error:(id *)arg2;
- (id)configurationWithError:(id *)arg1;

@end
