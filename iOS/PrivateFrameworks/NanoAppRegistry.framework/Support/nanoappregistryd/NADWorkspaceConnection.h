//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NARWorkspaceService-Protocol.h"

@class NADApplicationStore, NSString;

@interface NADWorkspaceConnection : NSObject <NARWorkspaceService>
{
    NADApplicationStore *_applicationStore;
}

@property(readonly, nonatomic) NADApplicationStore *applicationStore; // @synthesize applicationStore=_applicationStore;
- (void).cxx_destruct;
- (oneway void)getWorkspaceInfoIncludingHiddenApps:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)getWorkspaceInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithApplicationStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

