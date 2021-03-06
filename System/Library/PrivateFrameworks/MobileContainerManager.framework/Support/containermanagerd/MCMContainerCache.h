//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MCMContainerCache : NSObject
{
    NSMutableDictionary *_liveContainerCache;
    NSMutableDictionary *_transientContainerCache;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _cacheLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)setSandboxContainerMappingForUser:(unsigned int)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 url:(id)arg4;
- (_Bool)removeContainerForUser:(unsigned int)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(_Bool)arg4 error:(id *)arg5;
- (_Bool)addContainerMetadata:(id)arg1 forUser:(unsigned int)arg2 url:(id)arg3 transient:(_Bool)arg4 updateSandbox:(_Bool)arg5 error:(id *)arg6;
- (id)allContainerIdentifiersForUser:(unsigned int)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (id)allContainersForUser:(unsigned int)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (id)allContainersForUser:(unsigned int)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 populateSandboxCache:(_Bool)arg4 error:(id *)arg5;
- (id)containerForUser:(unsigned int)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 uuidString:(id)arg4;
- (id)containerForUser:(unsigned int)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(_Bool)arg4 error:(id *)arg5;
- (id)_getCacheForUserId:(unsigned int)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (id)_getCacheForUserId:(unsigned int)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 populateSandboxCache:(_Bool)arg4 error:(id *)arg5;
- (id)init;

@end

