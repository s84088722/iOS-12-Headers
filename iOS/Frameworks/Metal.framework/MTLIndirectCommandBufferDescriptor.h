//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTLIndirectCommandBufferDescriptor : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long commandTypes; // @dynamic commandTypes;
@property(nonatomic) _Bool inheritBuffers; // @dynamic inheritBuffers;
@property(nonatomic) _Bool inheritPipelineState; // @dynamic inheritPipelineState;
@property(nonatomic) unsigned long long maxFragmentBufferBindCount; // @dynamic maxFragmentBufferBindCount;
@property(nonatomic) unsigned long long maxVertexBufferBindCount; // @dynamic maxVertexBufferBindCount;

@end

