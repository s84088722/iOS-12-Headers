//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQLassoGenerator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHLasso : NSObject <GQLassoGenerator>
{
}

+ (int)handleDrawableZOrder:(const char *)arg1 state:(id)arg2;
+ (Class)beginWorkspacePage:(id)arg1 state:(id)arg2;
+ (int)handleWorkspaceStyle:(id)arg1 state:(id)arg2;
+ (int)endWorkspace:(id)arg1;
+ (int)beginWorkspace:(const char *)arg1 state:(id)arg2;
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;
+ (int)endDocument:(id)arg1 state:(id)arg2;
+ (int)beginDocument:(id)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

