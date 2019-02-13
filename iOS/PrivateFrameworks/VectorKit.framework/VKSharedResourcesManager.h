//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VKSharedResourcesManager : NSObject
{
    struct mutex _lock;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (void)removeResourceUser:(id)arg1;
+ (void)addResourceUser:(id)arg1;
+ (id)sharedResourcesForConfiguration:(id)arg1;
+ (id)defaultManifestConfiguration;
+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resourcesForConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

@end

