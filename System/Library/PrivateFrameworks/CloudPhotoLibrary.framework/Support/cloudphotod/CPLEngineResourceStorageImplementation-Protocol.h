//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLResourceIdentity;

@protocol CPLEngineResourceStorageImplementation <CPLEngineStorageImplementation>
- (_Bool)resetWithError:(id *)arg1;
- (unsigned long long)totalOriginalResourceSize;
- (unsigned long long)totalResourceSize;
- (void)enumerateIdentitiesWithBlock:(void (^)(CPLResourceIdentity *, _Bool *))arg1;
- (unsigned long long)retainCountForIdentity:(CPLResourceIdentity *)arg1;
- (_Bool)releaseIdentity:(CPLResourceIdentity *)arg1 lastReference:(_Bool *)arg2 isTrackedOriginal:(_Bool)arg3 error:(id *)arg4;
- (_Bool)retainIdentity:(CPLResourceIdentity *)arg1 isTrackedOriginal:(_Bool)arg2 error:(id *)arg3;
@end

