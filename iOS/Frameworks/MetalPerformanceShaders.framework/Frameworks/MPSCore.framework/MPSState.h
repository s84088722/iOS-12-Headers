//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLResource;

@interface MPSState : NSObject
{
    // Error parsing type: ^{MPSStateResource=S(?={MPSAutoTexture={atomic<void *>=A^v}{?=QQ}Q(?={?=^{MPSAutoTexture}II}{?=@(?={?=@}{?=@})})CC}{MPSAutoBuffer={atomic<void *>=A^v}Q@@{?=QQ}})}, name: _resources
    unsigned long long _resourceCount;
    unsigned long long _readCount;
    NSString *_label;
    unsigned short _flags;
    _Bool _updatedAlready;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long resourceCount; // @synthesize resourceCount=_resourceCount;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
- (id)resourceAtIndex:(unsigned long long)arg1 allocateMemory:(_Bool)arg2;
- (unsigned long long)bufferSizeAtIndex:(unsigned long long)arg1;
- (struct MPSStateTextureInfo)textureInfoAtIndex:(unsigned long long)arg1;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (unsigned long long)resourceTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourceSize;
- (void)synchronizeOnCommandBuffer:(id)arg1;
@property(copy) NSString *label;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2;
- (id)initWithDevice:(id)arg1 textureDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithResources:(id)arg1;
- (id)initWithResource:(id)arg1;
@property(readonly, nonatomic) _Bool isTemporary;
@property(readonly, retain, nonatomic) id <MTLResource> resource;

@end

